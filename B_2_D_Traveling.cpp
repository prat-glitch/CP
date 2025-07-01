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
        lli n, k,a,b;
        cin>>n>>k>>a>>b;
        vector<lli>x(n+1),y(n+1);
        for(lli i=1;i<=n; i++)
        {
            cin>>x[i]>>y[i];
        }
        lli ans=abs(x[a]-x[b])+abs(y[a]-y[b]);
        lli minia=1e17;lli minib=1e17;
        for(lli i=1;i<=k;i++)
        {
            minia=min(minia, abs(x[a]-x[i])+abs(y[a]-y[i]));
            minib=min(minib, abs(x[b]-x[i])+abs(y[b]-y[i]));
        }
        ans=min(ans, minia+minib);
        cout<<ans<<endl;
    }

    return 0;
}