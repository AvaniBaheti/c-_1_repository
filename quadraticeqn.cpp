#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   float a,b,c,r1,r2,discriminant;
   cout<<"enter three nos. a,b,c of ax^2+bx+c\n";
   cin>>a>>b>>c;
   discriminant=b*b-4*a*c;
   if(discriminant>0)
   {
     r1=(-b+sqrt(discriminant))/(2*a);
     r2=(-b-sqrt(discriminant))/(2*a);
     cout<<"roots are real and equal\n"<<r1<<"\t"<<r2;
   }
   else if(discriminant==0)
   {
    r1=-b/(2*a);
    r2=-b/(2*a);
    cout<<"roots are real and equal\n"<<r1<<"\t"<<r2;
   }
   else
    cout<<"roots are complex and imaginary\n";
   return 0;


}
