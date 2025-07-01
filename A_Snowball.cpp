#include<bits/stdc++.h>
using namespace std;
 
#define fr(i,n) for (lli i=0;i<n;i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
 
using lli = long long int;
using ld = long double;
using ii = pair<lli,lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl =bool;
using mp=map<lli,lli>;
using ump=unordered_map<lli,lli>;
using str=string;
 
#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")
 
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
 int w  ; 
 cin>>w ; 
 int h ;
 cin>>h;
 int u1;
 cin>>u1;
 int d1;
 cin>>d1;
 int u2;
 cin>>u2;
 int d2;
 cin>>d2;
 while (h > 0) {
        w += h;  // Increase weight by current height
        if (h == d1) {
            w -= u1;  // Hit the first stone
        }
        if (h == d2) {
            w -= u2;  // Hit the second stone
        }
        if (w < 0) {
            w = 0;  // Weight cannot be negative
        }
        h--;  // Move down one meter
    }

    cout <<  w << endl;

return 0;
}