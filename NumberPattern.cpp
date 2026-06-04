#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n=6;
  for(int I=1;I<=n;I++)
  {
    for(int j=1;j<=I;j++) //j=1, 121, 12321
    {
       cout<<j;
    }
    for(int j=I-1;j>=1;j--)
    {
       cout<<j;
    }
    cout<<" ";
  }
}