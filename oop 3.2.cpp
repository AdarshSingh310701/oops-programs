#include<iostream>
using namespace std;
class complex{
  float a;
  float b;
public:
  complex()
  {
    a=0;
    b=0;
  }
  complex operator+(complex);
  complex operator*(complex);
  friend istream &operator >> (istream &input,complex &t)
  {
    cout<<"Enter real part ";
    cin>>t.a;
    cout<<"Enter imaginary part";
    cin>>t.b;
  }
  friend ostream &operator <<(ostream &output,complex &t)
  {
    output<<t.a<<"+"<<t.b<<"i\n";
  }
};
complex complex::operator+(complex c)
{
  complex temp;
  temp.a=a+c.a;
  temp.b=b+c.b;
  return(temp);
}
complex complex::operator*(complex c)
{
  complex temp1;
  temp1.a=(a*c.a)-(b*c.b);
  temp1.b=(b*c.a)+(a*c.b);
  return(temp1);
  
}
int main()
{
  complex c1,c2,c3,c4;
  cout<<"Default constructor value\n";
  cout<<c1;
  cout<<"\nEnter the 1st number\n ";
  cin>>c1;
  cout<<"\nEnter 2nd number\n ";
  cin>>c2;
  c3=c1+c2;
  c4=c1*c2;
  cout<<"\nfirst number is ";
  cout<<c1;
  cout<<"\nsecond number is ";
  cout<<c2;
  cout<<"\naddition is ";
  cout<<c3;
  cout<<"\nmultiplication is ";
  cout<<c4;
  return 0;
}
