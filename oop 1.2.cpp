#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 float div;
 char ch,con;
 cout<<"\nEnter first number: ";
 cin>>a;
 cout<<"\nEnter second number: ";
 cin>>b;
 do
 {
  cout<<"\nEnter the operator(+,-,/,*): ";
  cin>>ch;
  switch(ch)
  {
   case '+':
   { 
    c=a+b;
    cout<<"\nAddition is:"<<c;
    break;
   }
   case '-':
   { 
    c=a-b;
    cout<<"\nSubstraction is:"<<c;
    break;
   }
   case '/':
   { 
    div=a/b;
    cout<<"\nDivision is:"<<div;
    break;
   }
   case '*':
   { 
    c=a*b;
    cout<<"\nMultiplication is:"<<c;
    break;
   }
  }
  cout<<"\nDo you want to continue(y/n):";
  cin>>con;
 }
  
 while(con!='n');
 cout<<"\n\n";
 return 0;
}
