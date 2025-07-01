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
        cin >> n;
        lli p[2 * n];
        lli sum = 0;
        fr(i, n)
        {
            fr(j, n)
            {
                lli a;
                cin >> a;
                p[i + j + 1] = a;
            }
        }
     
        p[0] = 2 * n * (2 * n + 1) / 2 - accumulate(p + 1, p + 2 * n, 0LL);
     
        fr(i, 2 * n)
        {
            cout << p[i] << ' ';
        }
        cout <<endl;
    }

    return 0;
}
