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
        string s;
        cin>>s;
        vector<int>prefix(n+1,0);
        vector<int>suffix(n+1,0);
        unordered_set<char>st;
       for(int i=1;i<=n; i++)
       {
         st.insert(s[i-1]);
         prefix[i]=st.size();
       }
       st.clear();
       for(int i=n; i>=1; i--)
       {
        st.insert(s[i-1]);
        suffix[i]=st.size();
       }
       int ans=0;
       for(int i =0;i<n ; i++)
       {
        ans=max(ans,prefix[i]+suffix[i+1]);
       }
       cout<<ans<<endl;
    }

    return 0;
}