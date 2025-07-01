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
       vector<lli>b;
       vector<lli>c;
       for(lli i=0;i<n; i++)
       {
        cin>>a[i];
       }
       int maxi=*max_element(a.begin(),a.end());
       for(int i=0;i<n; i++)
       {
        if(a[i]!=maxi)
        {
            b.push_back(a[i]);
        }
        else c.push_back(a[i]);
       }
       if(b.size()==0)cout<<-1<<endl;
       else 
       {
           cout<<b.size()<<" "<<c.size()<<endl;
           for(auto it:b)
           {
            cout<<it<<" ";
        }
        cout<<endl;
           for(auto it:c)
           {
            cout<<it<<" ";
        }
        cout<<endl;
       }
       }

    return 0;
}