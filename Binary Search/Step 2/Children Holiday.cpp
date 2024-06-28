#include<bits/stdc++.h>
#define int long long
using namespace std;
int m,n;
vector<int> t(1000),z(1000),y(1000);
bool check(int x){
	int curr=0;
	for(int i=0;i<n;i++){
		curr += x/(t[i]*z[i]+y[i])*z[i] + min(x%(t[i]*z[i]+y[i])/t[i],z[i]);
	}
	return curr>=m;
}
int solve(){
	cin >> m >> n;
	for(int i=0;i<n;i++){
		cin >> t[i] >> z[i] >> y[i];
	}
	int l=-1,r=1e9;
	while(l+1 < r){
		int mid = (l+r)/2;
		if(check(mid)){
			r=mid;
		}
		else{
			l=mid;
		}
	}
	cout << r << endl;
	int cur=0;
	for(int i=0;i<n;i++){
		if(cur>=m){
			cout << "0 \n";
			continue;
		}
		int p = r/(t[i]*z[i]+y[i])*z[i] + min(r%(t[i]*z[i]+y[i])/t[i],z[i]);
		if(p > m-cur){
			cout << m-cur <<" ";
			cur += p;
			continue;
		}
		cur+=p;
		cout << p << " ";
	}
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
