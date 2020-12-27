#include<iostream>
using namespace std;
int main()
{
  int dow;
  cout<<"enter number of week's day(1-7)\n";
  cin>>dow;
  switch(dow)
  {
    case 1: cout<<"sunday\n";
            break;
    case 2: cout<<"monday\n";
            break;
    case 3: cout<<"tuesday\n";
            break;
    case 4: cout<<"wednesday\n";
            break;
    case 5: cout<<"thursday\n";
            break;
    case 6: cout<<"friday\n";
            break;
    case 7: cout<<"saturday\n" ;
            break;
    default : cout<<" wrong number of day\n";
              break;
  }
  return 0;
}
