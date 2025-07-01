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
       lli n,x;
       cin>>n>>x;
       lli cnt=0;
       vector<lli>a(n);
       for(lli i=0;i<3; i++)
       {
        for(lli j=0;j<n; j++)
        {
            cin>>a[j];
        }
       }
       for(lli j=0;j<n; j++)
       {
        if((x|a[j])!=x)break;
        cnt|=a[j];
       }
       if(cnt==x)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }

    return 0;
}