#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll x,n;
        cin>>x>>n;
        ll d;
        if(n%4==0) d=0;
        else if(n%4==1) d=-n;
        else if(n%4==2) d=1;
        else d=n+1;
        if(x%2==0) cout<<x+d<<endl;
        else cout<<x-d<<endl;
    }
    return 0;
}