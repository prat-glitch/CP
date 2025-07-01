#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
    int n ;
    cin>>n;
    int x;
    cin>>x;
    int y ;
    cin>>y;
    int sec1=n/x;
    int sec2= n / y;
    if(n%x==0 && x<=y)
    {
        cout<<sec1<<endl;
    }
    else if ((n%x) !=0 && x<y && (n-(sec1*x))<x)
    {
        cout<<sec1+1<<endl;
    }
    else cout<<sec2<<endl;
    }
    return 0;
}