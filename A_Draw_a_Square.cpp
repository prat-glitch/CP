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
       lli l , r , d , u;
       cin>>l>>r>>d>>u;
       int x1=-l;
       int y1=0;
       int x2=r;
       int y2=0;
       int x3=0;
       int y3=-d;
       int x4=0;
       int y4=u;
       if(sqrt(pow(x4-x1, 2)+ pow(y4-y1, 2))==sqrt(pow(x3-x2, 2 )+pow(y3-y2, 2 )) == sqrt(pow(x3-x1, 2 )+pow(y3-y1, 2))==sqrt(pow(x4-x2, 2)+pow(y4-y2,2)))cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }

    return 0;
}