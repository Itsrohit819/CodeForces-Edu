#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
vector<int> a,b;
bool check(double x){
	double l=-1e10,r=1e10;
	for(int i=0;i<n;i++){
		l=max(l,a[i]-x*b[i]);
		r=min(r,a[i]+x*b[i]);
		if(l>r){
			return false;
		}
	}
	return true;
}
int solve(){
	cin >> n;
	for(int i=0;i<n;i++){
		int y,z;
		cin >> y >> z;
		a.push_back(y);
		b.push_back(z);
	}
	double l=-1000000000,r=1000000000;
	int p=100;
	while(p--){
		double mid = (l+r)/2;
		if(check(mid)){
			r=mid;
		}
		else{
			l=mid;
		}
	}
	cout <<setprecision(10)<< r << endl;
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
