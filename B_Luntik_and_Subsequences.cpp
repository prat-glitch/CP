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
        vector<lli> a(n);
        for (lli i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        lli sum = accumulate(a.begin(), a.end(), 0LL); // Ensure the initial value is of type long long
        int cnt0 = 0;
        int cnt1 = 0;
        for (lli i = 0; i < n; i++)
        {
            if (a[i] == 0)
                cnt0++;
            else if (a[i] == 1)
                cnt1++;
        }
        cout << (1LL << cnt0) * cnt1 << endl; // Use 1LL to ensure the left shift operates on a long long
    }

    return 0;
}
