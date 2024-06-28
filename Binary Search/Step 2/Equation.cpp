#include<bits/stdc++.h>
using namespace std;
double check(double mid, double x){
	if(((mid*mid) + sqrt(mid)) >= x){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	double x;
	cin >> x;
	double l=0,r=1e9;
	double ans = 0;
	cout << fixed << setprecision(20);
	int it=60;
	while(it--){
		double mid = (l+r)/2;
		if(check(mid,x)){
			ans = mid;
			r = mid;
		}
		else{
			l = mid;
		}
	}
	cout << ans << endl;
}