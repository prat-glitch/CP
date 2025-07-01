#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int a = -1, b = -1;
    bool found = false;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x; j++) {
            if (i * j > x && i / j < x) {
                a = j;
                b = i;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        cout << a << " " << b << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
