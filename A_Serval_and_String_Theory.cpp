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
       lli n , k ;
       cin>>n>>k;
       string s;
       cin>>s;
       bool found=true;
       if(n==1)found=false;
       if(k==0 && s[n-1]<=s[0])found=false;
       else if(k==0 && (s[n-1]>s[0]))found=true;
       else
       {
        string sorted=s;
        sort(sorted.begin(),sorted.end());
        string rev=sorted;
        reverse(rev.begin(),rev.end());
        if(sorted<rev)found=true;
        else found=false;
       }
       if(found==true)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

    return 0;
}