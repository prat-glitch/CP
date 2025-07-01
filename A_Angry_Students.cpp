#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int k;
    cin>>k;
    string s;
    cin>>s;
    int cnt=0;
    string result=s;
    for(int i=0 ; i< k-1 ; i++)
    {
        if(s[i]=='A' && s[i+1]=='P')
        {
         result[i+1]='A';
         cnt++;
        }
        s=result;
    }
      cout<<cnt<<endl;
    }
      return 0;
}