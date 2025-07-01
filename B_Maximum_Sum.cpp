#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;

using lli = long long int;
using ld = long double;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--)
    {
        lli n, k;
        cin >> n >> k;
        vector<lli> a(n);
        for (lli i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(all(a));
        vector<lli>pre(n);
        pre[0]=a[0];
        for(lli i=1;i<n; i++)
        {
            pre[i]=a[i]+pre[i-1];
        }
        lli ans=0;
        for(lli first=0;first<=k;first++)
        {
            lli second=k-first;
            lli left=2*first;
            lli right=n-second-1;
            lli sum=pre[right]-(left==0?0:pre[left-1]);
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }

    return 0;
}
