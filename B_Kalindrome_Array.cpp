#include <bits/stdc++.h>
using namespace std;

using lli = long long;

bool check(vector<lli>& a, lli x) {
    vector<lli> b;
    for (lli val : a) {
        if (val != x) b.push_back(val);
    }
    lli m = b.size();
    for (lli i = 0; i < m / 2; i++) {
        if (b[i] != b[m - i - 1]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--) {
        lli n;
        cin >> n;
        vector<lli> a(n);
        for (lli i = 0; i < n; i++) {
            cin >> a[i];
        }

        lli l = 0, r = n - 1;
        bool ok = true;

        while (l < r) {
            if (a[l] != a[r]) {
                // Try removing a[l] or a[r]
                if (check(a, a[l]) || check(a, a[r])) {
                    ok = true;
                } else {
                    ok = false;
                }
                break;
            }
            l++, r--;
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
