#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;

        int parts = b + 1;
        int baseR = r / parts;
        int extraR = r % parts;

        string ans = "";
        for (int i = 0; i < parts; ++i) {
            // Add baseR R's
            ans += string(baseR, 'R');

            // Distribute the remainder R's (one extra per first 'extraR' parts)
            if (extraR > 0) {
                ans += 'R';
                extraR--;
            }

            // After each group of R's (except last), add B
            if (b > 0) {
                ans += 'B';
                b--;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
