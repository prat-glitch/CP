#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  int n;
  cin>>n;
  vector<int>a(n),b(n);
  for(auto &i:a)cin>>i;
  for(auto &i:b)cin>>i;
  int i=0,j=n-1;
  while(j>=0 && a[j]==b[j])--j;
  while(i<n && a[i]==b[i])++i;
  while(i>0 && b[i]>=a[i-1])--i;
  while(j+1<n && a[j+1]>=b[j])++j;
  cout<<i+1<<" "<<j+1<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}
