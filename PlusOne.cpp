//Plus One problem in array
#include<iostream>
#include<vector>
using namespace std;

vector<int> PlusOne(vector<int>& arr)
{
   int carry=1;
   for(int I=arr.size()-1;I>=0;I--)
   {
     int sum=arr[I]+carry;
     arr[I]=sum%10;
     carry=sum/10;
   }
   if(carry)
      arr.insert(arr.begin(),carry);
      
   return arr;   
}
int main()
{
  vector<int> arr={9,9,9};
  vector<int>res=PlusOne(arr);
  for(int I : res)
  { 
     cout<<I<<" ";
  }
}