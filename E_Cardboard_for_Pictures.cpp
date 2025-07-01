#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

ll compute_total_area(const vector<int>& sizes, ll w) {
    ll total = 0;
    for (int s : sizes) {
        ll side = s + 2 * w;
        total += side * side;
        if (total > 1e18) break; // early stop to avoid overflow
    }
    return total;
}

ll find_w(const vector<int>& sizes, ll c) {
    ll low = 1, high = 1e9, ans = -1;

    while (low <= high) {
        ll mid = (low + high) / 2;
        ll area = compute_total_area(sizes, mid);

        if (area == c) {
            return mid; // found exact match
        } else if (area < c) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low; // due to problem guarantee that w always exists
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll c;
        cin >> n >> c;

        vector<int> sizes(n);
        for (int i = 0; i < n; ++i) {
            cin >> sizes[i];
        }

        cout << find_w(sizes, c) << "\n";
    }

    return 0;
}
