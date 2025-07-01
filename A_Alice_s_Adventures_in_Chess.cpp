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
        int a;
        int b;
        cin >> n >> a >> b;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        map<char, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }
        int x = 0;
        int y = 0;
        for (auto const &pair : mpp)
        {
            char dir = pair.first;
            int cnt = pair.second;
            if (dir == 'N')
                y += cnt;
            if (dir == 'S')
                y -= cnt;
            if (dir == 'E')
                x += cnt;
            if (dir == 'W')
                x -= cnt;
        }
        if (x == 0 && y == 0)
            cout << "NO" << endl;
        else if (a % x == 0 && b % y == 0 && x!=a && y!=b)
            cout << "YES" << endl;
        else if (x == a && y != b || x != a && y == b)
            cout << "NO" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}