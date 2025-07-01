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
        lli n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        lli cnt1=0;
        lli cnt0=0;
        lli cnt=0;
        for(lli i=0;i<n; i++)
        {
            if(s[i]==s[n-i+1])
            {
            if(s[i]=='1')
            {
                cnt1++;
            }
            else cnt0++;
            cnt++;
            }
        }
        if(cnt==k)
        {
          cout<<"YES"<<endl;   
        }
        else if(cnt<k)
        {
            lli need=k-cnt;
            if(need%2==0 &&((n/2)-cnt) >=need)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else 
        {
            lli extra=cnt-k;
            if(extra%2==0 && ((cnt0>=(extra/2)) && cnt1>=(extra/2)))
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}