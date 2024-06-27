#include<bits/stdc++.h>
using namespace std;
int maxOfLower(vector<int>& v,int x){
	int n=v.size();
	int l=-1,r=n;
	while(l+1 < r){
		int m = (l+r)/2;
		if(v[m] <= x){
			l = m;
		}
		else{
			r = m;
		}
	}
	return l+1;
}
//int minOfUpper(vector<int>& v, int x){
//	int n=v.size();
//	int l=-1,r=n;
//	while(l+1 < r){
//		int m = (l+r)/2;
//		if(v[m] < x){
//			l = m;
//		}
//		else{
//			r = m;
//		}
//	}
//	return r ;
//}
int main(){
	int n,m;
	cin >> n >> m;
	vector<int> v;
	for(int i=0;i<n;i++){
		int z;
		cin >> z;
		v.push_back(z);
	}
	for(int i=0;i<m;i++){
		int z;
		cin >> z;
		cout << maxOfLower(v,z) << endl;
//		cout << minOfUpper(v,z) << endl;
	}
}