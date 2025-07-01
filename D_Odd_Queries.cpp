#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
int n,q;
cin>>n>>q;
vector<long long> v(n);
long long sum=0;
for(int i=0;i<n;i++){

    cin>>v[i];
    sum+=v[i];
}
vector<long long> pf(n+1);
pf[0]=0;
for(int i=1;i<n+1;i++){
pf[i]=pf[i-1]+v[i-1];
}
for(int i=0;i<q;i++){
   int l,r,k;
   cin>>l>>r>>k;
   l=l-1;
  long long red= pf[r]-pf[l];
  long long ans=sum-red+k*(r-l);
  cout<<((ans % 2!=0)?"YES":"NO")<<endl;


}
    }
    return 0;
}