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
        lli a[n][n];
        for(lli i=0;i<n; i++)
        {
            for(lli j=0;j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        lli cnt=0;
        for(lli i=0;i<n; i++)
        {
            for(lli j=0;j<n; j++)
            {
                if(a[i][j]!=a[n-i-1][n-j-1])
                {
                    cnt++;
                }
            }
        }
        cnt/=2;
        if(cnt>k)cout<<"NO"<<endl;
        else 
        {
            lli temp=k-cnt;
            if(temp%2==0)cout<<"YES"<<endl;
            else{
                if(n%2==0)cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}