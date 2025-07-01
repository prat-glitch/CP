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
        lli a, b;
        cin >> a >> b;
        int cnt = 0;

        // Ensure a is the larger number
        if (a < b)
            swap(a, b);

        // Check if a can be transformed to b
        if (a % b != 0)
        {
            cout << -1 << endl;
            continue;
        }

        lli ratio = a / b;

        // Count the number of divisions by 8, 4, and 2
        while (ratio % 8 == 0)
        {
            ratio /= 8;
            cnt++;
        }
        while (ratio % 4 == 0)
        {
            ratio /= 4;
            cnt++;
        }
        while (ratio % 2 == 0)
        {
            ratio /= 2;
            cnt++;
        }

        // If ratio is not 1, transformation is not possible
        if (ratio != 1)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }

    return 0;
}
