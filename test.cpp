#include <iostream>
#include <vector>
using namespace std;

void solve(int i, vector<int>& ds, int s, int arr[], int sum, int n)
{
    if (i == n) {
        if (s == sum) {
            for (auto it : ds) cout << it << " ";
            cout << endl;
        }
        return;
    }

    // pick
    ds.push_back(arr[i]);
    s += arr[i];
    solve(i + 1, ds, s, arr, sum, n);

    // backtrack
    s -= arr[i];
    ds.pop_back();

    // not pick
    solve(i + 1, ds, s, arr, sum, n);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> ds;
    int sum = 2;
    solve(0, ds, 0, arr, sum, n);
    return 0;
}
