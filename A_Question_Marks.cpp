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
        string s;
        cin >> s;
        int cnt = 0;
        int cnta = 0;
        int cntb = 0;
        int cntc = 0;
        int cntd = 0;
        for (int i = 0; i < n * 4; i++)
        {
            if (s[i] == 'A')
                cnta++;
            if (s[i] == 'B')
                cntb++;
            if (s[i] == 'C')
                cntc++;
            if (s[i] == 'D')
                cntd++;
        }
        int minia = n;
        int minib = n;
        int minic = n;
        int minid = n;
        if (cnta > n)
            cnta = min(minia, cnta);
        if (cntb > n)
            cntb = min(minib, cntb);
        if (cntc > n)
            cntc = min(minic, cntc);
        if (cntd > n)
            cntd = min(minid, cntd);
        cnt += cnta + cntb + cntc + cntd;
        cout << cnt << endl;
    }
    return 0;
}