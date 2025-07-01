    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int t;
    	cin>>t;
    	while(t--){
    		int n;
    		cin>>n;
    		vector<int>a(n+1);
    		for(int i=1;i<=n;i++){
    			int c;
    			cin>>c;
    			a[c]++;
    		}
    		int cnt1=0,cnt2=0;
    		for(int i=1;i<=n;i++){
    			if(a[i]==1) cnt1++;
    			else if(a[i]) cnt2++;
    		}
    		cout<<2*((cnt1+1)/2)+cnt2<<endl;
    	}
    	return 0;
    }