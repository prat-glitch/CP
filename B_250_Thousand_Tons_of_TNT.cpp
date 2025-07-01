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
        vector<lli>pre(n+1,0);
        lli total=0;
        lli maxi=0;
        for(lli i=0;i<n; i++)
        {
            cin>>a[i];
            pre[i+1]=pre[i]+a[i];
        }
        for(lli i=1;i<=n; i++)
        {
            vector<lli>ans;
            if(n%i==0)
            {
                for(int j=i;j<=n; j+=i)
                {
                   total=pre[j]-pre[j-i];
                   ans.push_back(total);
                }
                sort(ans.begin(),ans.end());
                lli n=ans.size();
                lli diff=ans.back()-ans.front();
                maxi=max(maxi,diff);
            }
        }
       cout<<maxi<<endl;
    }

    return 0;
}