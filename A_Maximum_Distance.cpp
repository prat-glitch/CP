#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for (int i = 0; i < N; ++i) {
        cin >> x[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> y[i];
    }

    int maxdist = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            int maxsquare = dx * dx + dy * dy;
            maxdist = max(maxdist, maxsquare);
        }
    }
    cout << maxdist << endl;

    return 0;
}
