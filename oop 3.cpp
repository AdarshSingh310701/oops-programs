#include<iostream> 
using namespace std; 
class complex
{ 
private:
	int real,imag; 

public:
 
complex()
{
real = 0;
imag = 0;
} 
void get()
{ 
cout<<"\nEnter the real part\n"; 
cin>>real; 
cout<<"Enter the imaginary part\n"; 
cin>>imag; 
} 
void display()
{ 
cout<<"The complex number will be =  "<<real<<" + "<<imag<<"i\n"; 
} 
friend complex operator+(complex c1,complex c2)
{ complex c3; 
c3.real=c1.real+c2.real; 
c3.imag=c1.imag+c2.imag; 
return c3; 
} 
friend complex operator*(complex c1,complex c2)
{
 complex c3; 
 c3.real=c1.real*c2.real; 
 c3.imag=c1.imag*c2.imag; 
 return c3; 
} 
}; 
int main()
{ 
complex c1,c2,c3; 
int choice; 
cout<<"Default constructor value\n";
c1.display();
cout<<"Enter the first number";
c1.get(); 
c1.display();
cout<<"Enter the second number";
c2.get(); 
c2.display(); 
char ans,y,Y;
do
{
cout<<"\n*****OPERATIONS ON COMPLEX  NUMBERS*****\n"; 
cout<<"1.Addition\n"; 
cout<<"2.Multiplication\n"; 
cout<<"Enter your choice\n";
cin>>choice; 
switch(choice){ 
case 1: 
c3=c1+c2; 
cout<<"ADDITION\n"; 
c3.display(); 
break; 
case 2: 
c3=c1*c2; 
cout<<"MULTIPLICATION\n"; 
c3.display(); 
break; 
default:
cout<<"Please Enter valid choice";
break;
} 
cout<<"\n Do you want to continue (y/n): ";
cin>>ans;
}
while(ans=='y'||ans=='Y');
return 0;
}

