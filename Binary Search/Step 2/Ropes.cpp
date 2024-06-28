#include<bits/stdc++.h>
using namespace std;
int func(vector<int>& a, double p, int k){
	long long sum = 0;
	int n=a.size();
	for(int i=0;i<n;i++){
		sum += floor(a[i]/p);
	}
	return sum>=k;
}
int main(){
	int n;
	double x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	double l=0,r=1e8;
	cout << setprecision(20);
	for(int i=1;i<100;i++){
		double m = (l+r)/2;
		if(func(a,m,x)){
			l=m;
		}
		else{
			r=m;
		}
	}
	cout << l << endl;
}