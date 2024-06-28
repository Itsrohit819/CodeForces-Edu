#include<bits/stdc++.h>
using namespace std;
int func(int n, int x, int y, int mid){
	if((mid/x)+(mid/y) >= n){
		return 1;
	}	
	else{
		return 0;
	}
}
int main(){
	int n,x,y;
	cin >> n >> x >> y;
	int l=0,r=1e9;
	int ans = 0;
	while(r >= l){
		int mid=(l+r)/2;
		if(func(n-1,x,y,mid)){
			ans = mid;
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	cout << ans+min(x,y) << endl;
}