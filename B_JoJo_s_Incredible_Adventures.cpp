#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  string s;
  for (cin >> t; t--;) {
    cin >> s;
    if (s.find('0') == string::npos) {
      int64_t n = s.size();
      cout << n*n << endl;
    } else {
      s += s;
      int64_t best = 0, len = 0;
      for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '0') len = 0;
        else best = max(++len, best);
      }
      cout << ((best+1)/2)*((best+2)/2) << endl;
    }
  }
}