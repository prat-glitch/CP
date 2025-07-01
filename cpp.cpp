#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin>>T;
while(T--)
{
    int N,X;
    cin>>N>>X;
    int cnt=0;
    vector<int>a(N);
    for(int i =0 ; i<N; i++)
    {
        cin>>a[i];
    }
    int mini=*min_element(a.begin(),a.end());
    int maxi=*max_element(a.begin(),a.end());
    for(int i =0 ; i<N; i++)
    {
    if(mini+X+X*(N-2)>maxi+X)cnt=mini+X+X*(N-2);
    else cnt=maxi;
    }
    cout<<cnt<<endl;
}
}
