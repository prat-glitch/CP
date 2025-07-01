#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int mn=min({a,b,c});
		if(a%mn!=0||b%mn!=0||c%mn!=0){
			cout<<"NO"<<endl;
			continue;
		}
		int cnt;
		cnt=a/mn+b/mn+c/mn-3;
		cout<<(cnt<=3?"YES":"NO")<<endl;
	}
	return 0;
}
