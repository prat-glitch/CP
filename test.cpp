#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int MinimumCoins(vector<int>& coins, int amount) {
      int n=coins.size();
      int cnt=0;
      for(int i=n-1;i>=0;i--)
      {
        while(coins[i]<=amount)
        {
            amount-=coins[i];
            cnt++;
        }
      }
      cout<<cnt<<endl;
    }
    int main()
    {
      int n;
      cin>>n;
      vector<int>coins(n);
      int amount;
      cout<<MinimumCoins(coins, amount);
    }
};