#include<iostream>
using namespace std;
int main()
{
  char ch;
  cout<<"enter a character:\n";
  cin>>ch;
  if(((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z')))
   cout<<"you entered an alphabet\n";
  else
   if((ch>='0')&&(ch<='9'))
    cout<<"you enterd a digit\n";
  else
   cout<<"you enterd a character other than alphabet and digit\n";

  return 0;
}
