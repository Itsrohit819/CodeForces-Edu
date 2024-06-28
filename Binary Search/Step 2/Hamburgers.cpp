#include<bits/stdc++.h>
#define int long long int
using namespace std;
map<char,int> mp;
int a1,a2,a3;
int p,q,r,n;
bool check(int x){
	int d=mp['B']*x;
	int e=mp['S']*x;
	int f=mp['C']*x;
	int cnt = 0;
	if(d>a1){
		cnt += (p*(d-a1));
	}
	if(e>a2){
		cnt += (q*(e-a2));
	}
	if(f>a3){
		cnt += (r*(f-a3));
	}
	return cnt<=n;
}
int solve(){
	string a;
	cin >> a;
	for(int i=0;i<a.size();i++){
		mp[a[i]]++;
	}
	cin >> a1 >> a2 >> a3;
	cin >> p >> q >> r >> n;
	int l=0,r=1e13;
	while(l+1 < r){
		int mid = (l+r)/2;
		if(check(mid)){
			l = mid;
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
//	cin >> t;
	while(t--){
		solve();
	}
}
