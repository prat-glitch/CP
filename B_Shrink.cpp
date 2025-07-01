#include <bits/stdc++.h>
using namespace std;
using lli = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<lli>ans(n);
        for(lli i=0;i<n; i++)
        {
           ans[i]=i+1;
        }
        swap(ans[1],ans[n-1]);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
