//Best time to buy and sell stock problem
#include<iostream>
#include<vector>
using namespace std;

int GetBestTime(vector<int>& prices)
{
   int minPrice=INT_MAX;
   int maxProfit=0;
   
   for(int I=0;I<prices.size();I++)
   {
      if(prices[I]<minPrice)
      {
        minPrice=prices[I];
      }
      int profit=prices[I]-minPrice;
      if(profit>maxProfit)
      {
        maxProfit=profit;
      }
   }
   return maxProfit;
}
int main()
{
  vector<int> arr={7,1,5,3,6,4};
  cout<<GetBestTime(arr);
}