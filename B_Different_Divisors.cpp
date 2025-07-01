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
lli next_prime(lli a)
{
    for(lli i=a;;i++)
    {
    bool isprime=true;
    for(lli j=2;j*j<=i; j++)
    {
        if(i%j==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime)
    {
        return i;
    }
}
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--)
    {
        lli d;
        cin>>d;
        lli p=next_prime(d+1);
        lli q=next_prime(d+p);
        cout<<min(1ll*p*p*p,1ll*p*q)<<endl;;
    }

    return 0;
}