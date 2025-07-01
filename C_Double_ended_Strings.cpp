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
        string a , b ;
        cin>>a>>b;
        int p=a.size();
        int r=b.size();
        int ans=0;
        for(int i=0 ; i<p; i++)
        {
        for(int j=0 ; j<r; j++)
        {
            int k =0;
            while(i+k<p && j+k<r &&a[i+k]==b[j+k])k++;
            if(k>ans)ans=k;
        }
        }  
        cout<<(p+r)-2*ans<<endl;
    }

    return 0;
}