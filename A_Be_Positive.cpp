#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the value of n
    vector<int> a(n); // Initialize vector with size n

    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Read elements into the vector
    }

    int required_positive_count = ceil(double(n) / 2); // Calculate the required number of positive elements

    for (int d = n-1; d >= 1; d--) {
        int positive_count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] / double(d) > 0) {
                positive_count++;
            }
        }
        if (positive_count >= required_positive_count) {
            cout << d << endl;
            return 0;
        }
    }
    cout << 0 << endl; // If no valid d is found, output 0
    return 0;
}
