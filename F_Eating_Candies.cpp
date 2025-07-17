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
        lli i=0;
        lli j=n-1;
        lli p=a[i];
        lli b=a[j];
        lli ans=0;
        while(i<j)
        {
           if(p==b)
           {
            ans=max(ans,i+1+n-j);
           }
           if(p<=b)
           {
            i++;
            p+=a[i];
           }
           else if(p>=b)
           {
            j--;
            b+=a[j];
           }
        }
        cout<<ans<<endl;
        
    }

    return 0;
}