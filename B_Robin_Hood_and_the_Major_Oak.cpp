#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t ;
    while(t--)
    {
    int n ;
    cin>>n;
    int k ;
    cin>>k;
    int totalleaf=0;
    for(int i =max(1 , n-k+1) ; i<=n ; i++)
    {
         totalleaf+=i;
    }
    if(totalleaf%2==0)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    return 0;
}