#include <iostream>
using namespace std;

int main()
{
  string str="aA1_67";
  bool hasDigit=false;
  bool hasUpper=false;
  bool  isValid=true;
  
  if(str.length()<4)
     isValid=false;
  if(isdigit(str[0]))
     isValid=false;
  
  for(int I=0;I<str.length();I++)
  {
    if(isdigit(str[I]))
       hasDigit=true;
    if(isupper(str[I]))  
       hasUpper=true;
    if(str[I]==' ' || str[I]=='/')
       isValid=true;
  }
       
    if(!hasDigit || !hasUpper)
       isValid=false;
    
    if(isValid)
      cout<<"valid password";
    else
      cout<<"invalid password";
}