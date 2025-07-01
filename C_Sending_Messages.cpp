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
        lli n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<lli> p(n);
        for (lli i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        int cnt =n;
        // Initialize previous time
        lli prev_time = 0;

        for (lli i = 0; i < n; i++)
        {
            // Calculate the time difference
            lli time_diff = p[i] - prev_time;

            // Choose the minimum energy option: a * time_diff or b
            lli energy_used = min(time_diff * a, b);

            // Subtract the energy used
            f -= energy_used;
            cnt--;
            // Update previous time
            prev_time = p[i];
        }

        // Output result
        if (f > 0 && cnt==0 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}