#include<iostream>
using namespace std;
int main()
{
   int i,sum=0,n;
   cout<<"how many natural nos.:\n";
   cin>>n;
   for(i=1;i<=n;++i)
   {
      cout<<"\n"<<i;
      sum=sum+i;
   }
   cout<<"sum of first"<<n<<"natural nos. is:\n"<<sum;
   return 0;
}
