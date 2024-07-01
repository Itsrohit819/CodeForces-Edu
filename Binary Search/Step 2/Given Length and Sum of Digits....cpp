#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,s;
	cin >> n >> s;
	if(n==1 && s==0){
		cout << "0 0";
	}
	else if(s>0 && s<=9*n){
		int cur = 0,ans=9;
		vector<int> v;
		if(cur+ans <= s){
			while(cur+ans <= s){
				cur += ans;
				v.push_back(9);
			}
			//cur -= ans;
		}
		if(s-cur > 0){
			v.push_back(s-cur);
		}
		int sz=v.size();
		for(int i=sz;i<n;i++){
			v.push_back(0);
		}
		if(n==1){
			cout << s << " " << s << endl;
		}
		else{
			int sz=n;
			if(v[0]==1){
				for(int i=0;i<sz;i++){
					cout << v[i];
				}
				cout << " ";
				for(int i=0;i<sz;i++){
					cout << v[i];
				}
			}
			else if(v[v.size()-1]!=0){
				for(int i=sz-1;i>=0;i--){
					cout << v[i];
				}
				cout << " ";
				for(int i=0;i<sz;i++){
					cout << v[i];
				}
				
			}
			else{
				cout << "1";
				int ind,val;
				for(int i=sz-1;i>=0;i--){
					if(v[i]!=0){
						ind = i;
						val = v[i];
						break;
					}
				}
				for(int i=sz-2;i>ind;i--){
					cout << "0";
				}
				cout << v[ind]-1;
				for(int i=ind;i>0;i--){
					cout << "9";
				}
				cout << " ";
				for(int i=0;i<sz;i++){
					cout << v[i];
				}
			}
		}
	}
	else{
		cout << "-1 -1" ;
	}
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
