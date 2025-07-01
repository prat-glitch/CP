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
lli ans(lli n)
{
    lli cnt=0;
    while(n>1)
    {
        n=(n+1)/2;
        cnt++;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--)
    {
        lli n,m,a,b;
        cin>>n>>m>>a>>b;
        if(n+1-a<a) a=n+1-a;
        if(m+1-b<b) b=m+1-b;
        cout<<min(1+ans(n) +ans(b), 1+ans(m) +ans(a))<<endl;;
    }

    return 0;
}