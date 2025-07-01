#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N % 3 ==0) {
            cout << "BOB" << endl;
        } else {
            cout << "ALICE" << endl;
        }
    }
    return 0;
}