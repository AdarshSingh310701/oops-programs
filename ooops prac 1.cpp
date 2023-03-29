#include<iostream>
using namespace std;
class calc
{
	private:
		int result;
	public:
		calc();//constructor definition
		int addition(int,int);
		int subtraction(int,int);
		int multiplication(int,int);
		int division(int,int);
};
calc::calc()//constructor
{
	result=0;
}
int calc::addition(int num1,int num2)//addition function
{
	result=num1+num2;
	return result;
}
int calc::subtraction(int num1,int num2)//subtraction function
{
	result=num1-num2;
	return result;
}
int calc::multiplication(int num1,int num2)//multiplication function
{
	result=num1*num2;
	return result;
}
int calc::division(int num1,int num2)//division function
{
	if(num2!=0)
	{
		result=num1/num2;
		return result;
	}
	else
	{
		if(num2==0)//cannot divide by zero condition
		cout<<"Cannot divide by a ZERO\n";
	}
}
int main()
{
	char op,flag;
	int num1,num2,t;
	calc obj;
	do
	{
		cout<<"Enter in format :NUMBER1 <space> OPERATIOR <space> NUMBER2\n";
		cin>>num1>>op>>num2;
		switch (op)
			{
				case '+': {
							t=obj.addition(num1,num2);
							cout<<"\nThe addition is "<<t<<"\n";
							break;
						}
				case '-': {	
							t=obj.subtraction(num1,num2);
							cout<<"\nThe difference is "<<t<<"\n";
							break;
						}
				case '*': {
							t=obj.multiplication(num1,num2);
							cout<<"\nThe multiplication is "<<t<<"\n";
							break;
						}
				case '/': {
							t=obj.division(num1,num2);
							if(t!=0)
							cout<<"\nThe quotient is "<<t<<"\n";
							break;
						}
			}
	cout<<"\nDo you want to continue(y/n)?\n";
	cin>>flag;
	}while(flag=='y');
	if (flag=='n')
	return 0;
}
