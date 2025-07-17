#include <bits/stdc++.h>
using namespace std;

#define lli long long

int count_substr(const string &s, const string &pattern) {
    int count = 0;
    for (int i = 0; i + 1 < s.size(); ++i) {
        if (s.substr(i, 2) == pattern) count++;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int ab = count_substr(s, "ab");
        int ba = count_substr(s, "ba");
        

        if (ab == ba) {
            cout << s << "\n";
        } else {
            // Change the first character to make ab == ba
            s[0] = (s[0] == 'a') ? 'b' : 'a';
            // Now count again
            ab = count_substr(s, "ab");
            ba = count_substr(s, "ba");

            // if still not equal, change the last character
            if (ab != ba) {
                s[0] = (s[0] == 'a') ? 'b' : 'a'; // revert
                s[s.size() - 1] = (s[s.size() - 1] == 'a') ? 'b' : 'a';
            }
            cout << s << "\n";
        }
    }

    return 0;
}
