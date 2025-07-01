#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+7;

int main() {
	ios_base::sync_with_stdio(0); 
    cin.tie(0);
	ll t=1;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll sum=0,mn=1e9,cnt=0;
		for(ll i=0;i<n*m;i++){
			ll val;
			cin>>val;
			if(val<0){
				cnt++;
				val*=-1;
			}
			sum+=val;
			mn=min(mn,val);
		}
		if(cnt%2) sum-=2*mn;
		cout<<sum<<"\n";
	}
}