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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        map<int, int>mpp;
        mpp[0] = 3;
        mpp[1] = 1;
        mpp[2] = 2;
        mpp[3] = 1;
        mpp[5] = 1;

        map<int, int> current;
        int result = 0;
        for (int i = 0; i < n; ++i) {
            int digit = a[i];
            current[digit]++;
            bool allmet = true;
            for (auto& [d, cnt] : mpp) {
                if (current[d] < cnt) {
                    allmet = false;
                    break;
                }
            }
            if (allmet) {
                result = i + 1;
                break;
            }
        }
        cout << result << endl;
    }

    return 0;
}