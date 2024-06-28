#include<bits/stdc++.h>
using namespace std;
bool check(long long mid, long long a, long long b, long long c){
	return (mid/a)*(mid/b) >= c;
}
int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	long long l=0,r=1;
	while(!(check(r,a,b,c))){
		r *= 2;
	}
	while(l+1 < r){
		long long mid = (l+r)/2;
		if(check(mid,a,b,c)){
			r = mid;
		}
		else{
			l = mid;
		}
	}
	cout << r << endl;
}