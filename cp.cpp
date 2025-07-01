#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int X;
  cin>>X;
  int Y;
  cin>>Y;
  int Z;
  cin>>Z;
  int p=Z;
  int l=Y;
  int m=X;
  if((X*1+Y*0.5+Z*0)>(p*1+l*0.5+m*0))
  {
      cout<<"yes"<<endl;
  }
  else cout<<"no"<<endl;
  return 0;
  
}
