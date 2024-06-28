#include<bits/stdc++.h>
#define int long long
using namespace std;
int k,n;
vector<int> a;
bool check(int x){
	int curr=0;
	for(int i=0;i<n;i++){
		curr += min(a[i],x);
	}
	return curr >= x*k;
}
int solve(){
	cin >> k >> n;
	for(int i=0;i<n;i++){
		int z;
		cin >> z;
		a.push_back(z);
	}
	int l=0,r=1e11;
	while(l+1 < r){
		int mid = (l+r)/2;
		if(check(mid)){
			l=mid;
		}
		else{
			r=mid;
		}
	}
	cout << l << endl;
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
