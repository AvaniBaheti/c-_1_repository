#include<iostream>
using namespace std;
int main()
{
 float a,b,result;
 char ch;
 int q,r;
 cout<<"enter two numbers:\n";
 cin>>a>>b;
 cout<<"enter an operator(+,-,*,/,%)\n";
 cin>>ch;
 switch(ch)
 {
   case '+' : result=a+b;
   break;
   case '-': result=a-b;
   break;
   case '*': result=a*b;
   break;
   case'/':result=a/b;
   break;
   case '%': if(b==0)
             cout<<"undefined\n";
             else
             {q=b/a;
             r=b-(a*q);
             result=r;
             }

             break;
   default: cout<<"wrong operator\n";

 }
 cout<<" result is\n"<<result;
 return 0;
}
