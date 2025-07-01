#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    vector<bool> color(n, false);
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (!color[i])
        {
            count++;
            for (int j = i; j < n; j++)
            {
                if (a[j] % a[i] == 0)
                {
                    color[j] = true;
                }
            }
        }
    }

    cout<<count<<"\n";
    return 0;
}