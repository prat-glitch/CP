#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
    int n ;
    cin>>n;
    int k ;
    cin>>k;
    vector<int>a(n);
    for(int i =0 ; i< n ; i++)
    {
        cin>>a[i];
    }
    int cnt1=0;
    int cnt2=0;
     for(int i =0 ; i< n ; i++)
    {
       if(a[i]>=k)
       {
        cnt1+=a[i];
       }
       else if(a[i]==0)
       {
        if(cnt1>0)
        {
            cnt1--;
            cnt2++;
        }
       }
    }
    cout<<cnt2<<endl;
    }
    return 0;
    
}