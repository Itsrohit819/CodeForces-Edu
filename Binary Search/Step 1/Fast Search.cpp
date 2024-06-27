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
int minOfUpper(vector<int>& v, int x){
	int n=v.size();
	int l=-1,r=n;
	while(l+1 < r){
		int m = (l+r)/2;
		if(v[m] < x){
			l = m;
		}
		else{
			r = m;
		}
	}
	return r + 1 ;
}
int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int z;
		cin >> z;
		v.push_back(z);
	}
	int m;
	cin >> m;
	sort(v.begin(),v.end());
	for(int i=0;i<m;i++){
		int y,z;
		cin >> y >> z;
		cout << maxOfLower(v,z) - minOfUpper(v,y) + 1 << " ";
	}
}