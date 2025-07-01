    #include <bits/stdc++.h>
    #define pb push_back
    #define int long long
    using namespace std;
     
    const int mod = 1e9 +7;
    const int inf = 1e16 + 10;
    const int N = 1e2 + 5;
     
    int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin>>t;
        while(t--){
            int n, r;
            cin>>n>>r;
            vector<int> a(n);
            int tot = 0;
            for(int i = 0; i < n; i++){
                cin>>a[i];
                tot += a[i];
            }
            int rem = r*2 - tot;
            int happy = tot;
            for(int i = 0; i < n; i++){
                if(!rem && a[i] % 2 == 1) happy--;
                if(rem && a[i] % 2 == 1) rem--;
            }
     
            cout<<happy<<endl;
        }
        return 0;
    }