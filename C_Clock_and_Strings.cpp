#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t;cin>>t;
	while(t--){
		int a,b,c,d;cin>>a>>b>>c>>d;
		string s="";
		for(int i = 1;i<=12;i++){
			if(i==a || i==b){
				s+="r";
			} else if(i==c || i==d){
				s+="b";
			}
		}
		if(s=="rbrb" || s=="brbr")cout<<"YES\n";
		else cout<<"NO\n";
	}
}
