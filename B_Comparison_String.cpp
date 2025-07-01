#include <bits/stdc++.h>
using namespace std;

using lli = long long int;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--) {
        lli n;
        cin >> n;
        string s;
        cin >> s;
        int cost = 1;
        int maxi=1;
        for (int i = 0; i < n-1; i++) {
            if(s[i]==s[i+1])cost++;
            else cost=1;
            maxi=max(maxi , cost);
        }
        cout << maxi+1 << endl;
    }

    return 0;
}
