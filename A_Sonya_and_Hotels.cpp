#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; 
    cin>>n ;
    int d;
    cin>>d;
    vector<int>arr(n);
    for(int i =0 ; i< n ; i++)
    {
        cin>>arr[i];
    }
    int cnt=2;
    for(int i =0 ; i<n-1 ; i++)
    {
        if((arr[i+1]-arr[i])==2*d)
        {
           cnt+=1;
        }
        else if((arr[i+1]-arr[i])>2*d)
        {
            cnt=cnt+2;
        }
    }
    cout<<cnt<<endl;
    return 0;
}