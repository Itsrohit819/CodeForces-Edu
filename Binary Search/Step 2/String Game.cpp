#include<bits/stdc++.h>
using namespace std;
bool check(int mid, string s, string t, vector<int> &v){
	for(int i=0;i<=mid;i++){
		s[v[i]-1]='0';
	}
	int i=0,j=0;
	while(i<s.size() && j<t.size()){
		if(s[i]==t[j]){
			i++;
			j++;
		}
		else{
			i++;
		}
	}
	if(j==t.size()){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string a,b;
	cin >> a >> b;
	int n = a.size();
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	int l=0;
	int r=n-1;
	while(r >= l){
		int mid=(l+r)/2;
		if(check(mid,a,b,v)){
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	cout << l << endl;
}