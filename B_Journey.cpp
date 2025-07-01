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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int cnt = 0;
        int sum = a + b + c;

        if (a == 1 && b == 1 && c == 1)
        {
            cnt = n;
        }
        else
        {
            while (n > 0)
            {
                if (n >= sum)
                {
                    n -= sum;
                    cnt += 3;
                }
                if (n >= a)
                {
                    n -= a;
                    cnt++;
                }
                if (n >= b)
                {
                    n -= b;
                    cnt++;
                }
                if (n >= c)
                {
                    n -= c;
                    cnt++;
                }
                else if (n > 0)
                {
                    if (a > n)
                    {
                        cnt++;
                        n -= a;
                    }
                    if (b > n)
                    {
                        cnt++;
                        n -= b;
                    }
                    if (c > n)
                    {
                        cnt++;
                        n -= c;
                    }
                }
                else
                {
                    break;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
