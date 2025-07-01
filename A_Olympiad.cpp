#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
     cin >> n ;
     vector<int>A(n);
     for(int i =0 ; i< n ; i++)
     {
        cin>>A[i];
     }
     sort(A.begin() , A.end() , greater<int>());
     A.erase(remove(A.begin() , A.end() , 0) , A.end());
     set<int>uniquescore;
     for(int score:A)
     {
        if(score>0)
        uniquescore.insert(score);
     }
     cout<<uniquescore.size()<<endl;
     return 0;
}
