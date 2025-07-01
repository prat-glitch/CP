#include <bits/stdc++.h>
using namespace std;

using lli = long long int;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--) {
        lli n, k, b, s;
        cin >> n >> k >> b >> s;

        lli minis = k * b;
        lli maxis = minis + n * (k - 1);

        if (s < minis || s > maxis) {
            cout << "-1" << endl;
            continue; // Skip the rest of the loop
        }

        vector<lli> ans(n, 0);
        ans[0] = minis; // First element must be at least k*b
        lli remaining = s - minis;

        // Distribute the remaining sum (s - minis) across all elements
        for (lli i = 0; i < n && remaining > 0; i++) {
            lli add = min(k - 1, remaining);
            ans[i] += add;
            remaining -= add;
        }

        // If remaining is still > 0, it means distribution failed (shouldn't happen due to checks)
        if (remaining > 0) {
            cout << "-1" << endl;
        } else {
            for (lli i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}