#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cin>>m;
    vector<int> B(m);

    for (int j = 0; j < m; j++)
    {
        cin >> B[j];
    }
    int a;
    int b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = A[i] + B[j];
            auto it = find(A.begin(), A.end(), sum);
            auto it2 = find(B.begin(), B.end(), sum);
            if (it == A.end() && it2 == B.end())
            {
                a = A[i];
                b = B[j];
                break;
            }
        }
    }
    cout << a << " " << b << endl;

    return 0;
}