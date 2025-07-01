#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)

using lli = long long int;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int len=1;
        if(n==1 && a[0]==b[0])len=2*n;
        else if(n>1)
        {
        for(int i =1; i< n ; i++)
        {
            if(a[i]==a[i-1])
            {
                len++;
            }
        }
        for(int i =0; i<n ; i++)
        {
            if(b[i]==a[n-1])
            {
               len++;
            }
        }
    }
        cout<<len<<endl;
    }

    return 0;
}