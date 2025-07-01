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
        lli n;
        cin>>n;
        vector<lli>a(n);
        for(lli i=0;i<n; i++)
        {
            cin>>a[i];
        }
        vector<lli>ans(n+1,0);
        lli mint=0;
        vector<pair<lli, lli>>build;
        for(lli i=0;i<n; i++)
        {
            build.push_back({a[i],i});
        }
        sort(build.rbegin(),build.rend());
        ans[0]=0;
        lli cnt=1;
        for(lli i=0;i<n; i++)
        {
          ans[build[i].second+1]=cnt;
          mint+=2*(abs(cnt)*build[i].first);
          if(cnt<0)cnt=abs(cnt)+1;
          else cnt= -cnt;
        }
         cout<<mint<<endl;
         for(auto it:ans)
         {
            cout<<it<<" ";
         }
         cout<<endl;
    }

    return 0;
}