#include <bits/stdc++.h>
using namespace std;

int t, x, k, p, ok;
int main() {
    for (cin >> t; t-- and cin >> x >> k; cout << (ok ? "YES\n" : "NO\n")) {
        if (x == 1) {ok = k == 2; continue;}
        if (k > 1) {ok = 0; continue;}
        for (p = 2; p * p <= x and x % p; p++);
        ok = p * p > x;
    }
}