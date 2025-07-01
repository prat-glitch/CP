#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;

using lli = long long int;
using ld = long double;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--)
    {
        int n , m , k ;
        cin>>n>>m>>k;
        int x , y;
        cin>>x>>y;
        int cnt ;
        int dis=0;
        while(k--)
        {
            int  xi , yi;
            cin>>xi>>yi;
            dis+=(abs(x-xi)+abs(y-yi));
            if(dis%2==0 && ((n==m==2) && k==2))cnt=2;
            else if(dis%2==0)cnt=1;
            else cnt=2;
        }
        if(cnt==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }

    return 0;
}