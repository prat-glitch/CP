#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int64_t i, n, p, c = 1, ans;
        cin >> n >> p;
        ans = p;
        vector<pair<int64_t, int64_t>> l(n);
        for (i = 0; i < n; i++) cin >> l[i].second;
        for (i = 0; i < n; i++) cin >> l[i].first;
        sort(l.begin(), l.end());
        for (auto [f, s] : l) {
            if (f > p) break;
            ans += f * min(s, n - c);
            c += min(s, n - c);
        }
        ans += (n - c) * p;
        cout << ans << endl;
    }
}
