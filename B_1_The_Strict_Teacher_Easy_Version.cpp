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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        vector<int> a(q);
        for (int i = 0; i < q; i++)
        {
            cin >> a[i];
        }
        int t1 = b[0];
        int t2 = b[1];
        int s = a[0];
        if (t1 > t2)
            swap(t1, t2);
        if (s < t1)
            cout << t1 - 1 << endl;
        else if (s > t2)
            cout << n - t2 << endl;
        else
            cout << (t2 - t1) / 2 << endl;
    }
    return 0;
}