#include <bits/stdc++.h>
using namespace std;
int T,a,b,c,d;
int main(){
	cin>>T;
	while (T--){
		cin>>a>>b>>c>>d;
		if (a%c || (a*d==b*c)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
