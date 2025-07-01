#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        string b = a;
        reverse(b.begin(), b.end());

        for (char &ch : b)
        {
            if (ch == 'q')
                ch = 'p';
            else if (ch == 'p')
                ch = 'q';
        }

        cout << b << endl;
    }
    return 0;
}
