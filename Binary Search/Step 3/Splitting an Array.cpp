#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
vector<int> v;
bool check(int x){
	int cnt=1;
	int cur=0;
	for(int i=0;i<n;i++){
		if((cur+v[i])<=x){
			cur+=v[i];
		}
		else{
			cur=v[i];
			cnt++;
		}
	}
	//cout << cnt << " " << cur << endl;
	return cnt<=k;
}
int solve(){
	cin >> n >> k;
	int sum=0,max=0;
	for(int i=0;i<n;i++){
		int z;
		cin >> z;
		v.push_back(z);
		sum+=z;
		if(z>max){
			max=z;
		}
	}
	int l=max,r=sum+10000,ans=-1;
	while(l <= r){
		int mid = (l+r)/2;
		if(check(mid)){
			ans = mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	cout << ans << endl;
	return 0;
}
signed main(){
	int t=1;
//	cin >> t;
	while(t--){
		solve();
	}
}
