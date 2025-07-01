#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)
using lli = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        fr(i, n) cin >> a[i];

        int minSteps;
        if (n == 1 && a[0] == s) {
            minSteps = 0; 
        } else {
            int left = a[0], right = a[n - 1];
            int option1 = abs(s - left) + (right - left);
            int option2 = abs(s - right) + (right - left);
            minSteps = min(option1, option2);
        }

        cout << minSteps << "\n";
    }

    return 0;
}
