#include<iostream>
using namespace std;

int CountDigits(int n)
{
   int count=0;
   while(n!=0)
   {
      n/=10;
      count++;
   }
   return count;
}
int main()
{
  int num=4562;
  cout<<CountDigits(num);
}