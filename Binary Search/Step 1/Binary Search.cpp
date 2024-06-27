#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		int x;
		cin >> x;
		if(binary_search(a,a+n,x)){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}