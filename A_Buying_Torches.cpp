#include <iostream>

using namespace std;
using lli = long long int;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--) {
        lli x, y, k;
        cin >> x >> y >> k;

        // Total resources needed
        lli total_sticks_needed = y * k + k - 1;

        // Trades required to gather enough sticks
        lli trades_for_sticks = (total_sticks_needed + (x - 2)) / (x - 1);

        // Total trades include trades for sticks and coal
        lli total_trades = trades_for_sticks + k;

        cout << total_trades << endl;
    }

    return 0;
}
