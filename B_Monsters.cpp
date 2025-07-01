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
        lli n,k;
        cin>>n>>k;
        vector<pair<lli,lli>>a(n);
        for(lli i=0;i<n; i++)
        {
            lli x;
            cin>>x;
            a[i]={x,i+1};
        }
        for(lli i=0;i<n; i++)
        {
            a[i].first=a[i].first%k;
            if(a[i].first%k==0)
            {
                a[i].first=k;
            }
        }
        sort(a.begin(),a.end(),[&](pair<lli,lli>a, pair<lli,lli>b)
        {
           if(a.first!=b.first)return a.first>b.first;
           return a.second<b.second;
        });
        for( auto it:a)
        {
          cout<<it.second<<" ";
        }
        cout<<endl;
    }

    return 0;
}