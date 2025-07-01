#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2 == 0) {
        cout << -1 << endl;
        return;
    } 
    else 
    {
        cout<<n<<" ";
        for(int i=0;i<n-1;i++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}