#include<bits/stdc++.h>
#define int long long
using namespace std;
typedef long long ll;
const int MAXN=1e5+5;
int n,a[MAXN],b[MAXN];
map<int,int> mp;
void solve(){
    cin>>n;
    mp.clear();
    int ans=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        cin>>b[i];
        mp[b[i]]=i;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==b[i]) continue;
        if(!mp[a[i]]){
            cout<<"NO\n";
            return;
        }
        ans++;
        swap(b[i],b[mp[a[i]]]);
        mp[b[mp[a[i]]]]=mp[a[i]];
    }
    if(ans&1) cout<<"NO\n";
    else cout<<"YES\n";
}

signed main(){
    int t;cin>>t;
    while(t--) solve();
    return 0;
}