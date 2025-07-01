// hsri radhe
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,ct=0;
		cin>>n>>k;
		if(n&1){
			n-=k;
			ct++;
		}
		ct+=(n/(k-1)+((n%(k-1)==0)?0:1));
		cout<<ct<<endl;
	}
}