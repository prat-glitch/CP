#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int &b : a) cin >> b;

        vector<int> closes;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1)
                closes.push_back(i + 1);  
        }
        if (closes.empty()) {
            cout << "YES\n";
            continue;
        }

        int first = closes.front(), last = closes.back();
        int len = last - first + 1;

        if (len<= x)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
