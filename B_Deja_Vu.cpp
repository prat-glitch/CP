#include<bits/stdc++.h>
#define ll long long

using namespace std;



int main ()
{
ios_base::sync_with_stdio(0);cin.tie(0);
int test;
cin >>test;
while (test--)
{

ll n,q; cin>>n>>q;
ll arr[n];ll qq[q];
for(ll i=0;i<n;i++)cin>>arr[i];
for(ll i=0;i<q;i++)cin>>qq[i];
ll mx=31;
for(ll i=0;i<q;i++)
{
if(qq[i]<mx)
{
mx=qq[i];
for(ll j=0;j<n;j++)
if(arr[j]%(1L<<mx)==0) arr[j]+=(1L<<(mx-1));
}
}
for(ll i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
}

}
