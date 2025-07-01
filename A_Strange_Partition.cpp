#include <bits/stdc++.h>
using namespace std;

using lli = long long int;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--) {
        lli n, x;
        cin >> n >> x;
        vector<lli> a(n);
        lli total_sum = 0;
        for (lli i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
        }

        // Calculate minimum sum
        lli min_sum = (total_sum + x - 1) / x; // Equivalent to ceil(total_sum / x)

        // Calculate maximum sum
        lli max_sum = 0;
        for (lli i = 0; i < n; ++i) {
            max_sum += (a[i] + x - 1) / x; // Equivalent to ceil(a[i] / x)
        }

        cout << min_sum << " " << max_sum << endl;
    }

    return 0;
}
