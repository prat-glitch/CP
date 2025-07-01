#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k, p;
        cin >> n >> k >> p;

        long long max_sum = n * p;
        long long min_sum = n * (-p);

        if (k < min_sum || k > max_sum) {
            cout << -1 << endl; // Impossible to achieve the sum k
        } else {
            long long required_sum = abs(k);
            long long operations = (required_sum + p - 1) / p; // Equivalent to ceil(required_sum / p)
            cout << operations << endl;
        }
    }

    return 0;
}
