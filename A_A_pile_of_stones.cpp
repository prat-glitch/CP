#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n ; 
    cin>> n ;
    string s ;
    cin>>s;
   int cnt=0;
   int maxi=0;
   for(int i=0 ; i<=n-1; i++)
   {
    if(s[i]=='-') cnt--;
    else 
    {
        cnt++;
    }
        maxi=max(maxi , cnt);
   }
   cout<<maxi<<endl;
   return 0;
  
}
