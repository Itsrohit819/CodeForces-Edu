#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
vector<int> v;
bool check(int x){
	int cnt=1;
	int cur=v[0];
	for(int i=0;i<n;i++){
		if((v[i]-cur)>=x){
			cur=v[i];
			cnt++;
		}
	}
	//cout << cnt << " " << cur << endl;
	return cnt>=k;
}
int solve(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		int z;
		cin >> z;
		v.push_back(z);
	}
	int l=0,r=1e11,ans=-1;
	while(l <= r){
		int mid = (l+r)/2;
		if(check(mid)){
			ans = mid;
			l = mid + 1;
		}
		else{
			r = mid - 1;
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
