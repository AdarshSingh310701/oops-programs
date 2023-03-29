#include<iostream>
#include<fstream>
using namespace std;
class college
{ private:
int phone=3786;	
string address="Mumbai";
string name="Akash";
int room_no=28;
int qualification=12;
public:
	virtual void enter_details()
    { cout<<"\nEnter phone number : ";
    cin>>room_no;
    cout<<"Enter address of student : ";
    cin>>address;
    cout<<"Enter name of student : ";
    cin>>name;
    cout<<"Enter room number of student : ";
    cin>>room_no;
    cout<<"Enter qualification of student : ";
    cin>>qualification;
	}
	virtual void display_details()
	{ cout<<"\nPhone number : "<<phone;
  cout<<"\nAddress : "<<address;
  cout<<"\nName : "<<name;
  cout<<"\nRoom number : "<<room_no;
  cout<<"\nQualification : "<<qualification;
	}
};
class hostel:public college
{   public: 
    int room_no;
    string name;
    string address;
    int phone;
    hostel()
	{ room_no=10;
	name=" Abhinav";
	address=" Nagpur";
	phone=2222;
	}
    void enter_details()
    { cout<<"\nEnter room number : ";
    cin>>room_no;
    cout<<"Enter name of student : ";
    cin>>name;
    cout<<"Enter address of student : ";
    cin>>address;
    cout<<"Enter Phone number of student : ";
    cin>>phone;
	}
	void display_details()
	{ cout<<"\nRoom number : "<<room_no;
     cout<<"\nName : "<<name;
     cout<<"\nAddress : "<<address;
     cout<<"\nPhone number : "<<phone;
	}
	friend void get_details(hostel &d);
};
void get_details(hostel &d)
{ d.room_no;
d.name;
d.address;
d.phone;
}
void exception_check(int x)
{ if(x==0)
{ throw 404;
}
else
{cout<<"You can start entering the details to the database";
}
}
int main()
{ hostel m,s[100];
int n;
int i;
string username;
string userpassword;
int loginattempt=0;
char info[100], inp;
while(loginattempt<3)
{ cout<<"\n*******Welcome to Hostel Management System***********";
cout<<"\nPlease Enter your username:- ";
cin>>username;
cout<<"Enter your password:- ";
cin>>userpassword;
if (userpassword=="12345")
{ cout<<"Welcome "<<username<<" your login is successful";
break;
}
else
{ cout<<"Wrong Password !!!!";
}
loginattempt++;
}
if(loginattempt==3)
{ cout<<"Too many login attempts!!!!";
return 0;
}
cout<<"\nThanks for logging in";
cout<<"\nThe Data of the Student staying in the hostel is ";
get_details(m);
m.display_details();
cout<<"\nEnter the number of students whose Data has to be added to the system : ";
cin>>n;
try
{ exception_check(n);
}
catch (int num)
{ cout<<"Error No.-"<<num;
cout<<"\nYou entered 0 number of students";
cout<<"\nLogging out";
return 0; 
}
ofstream of("data.txt");
for(i=0;i<n;i++)
{
cout << "\nEnter the data of student " <<i+1<< endl;
cout<<"Enter room no: ";
cin>>info;
of << info << endl;
cout << "Enter name: ";
cin>>info;
of << info << endl;
cout<<"Enter address: ";
cin>>info;
of << info << endl;
cout << "Enter phone number: ";
cin >> info;
cin.ignore();
of << info << endl;
}
of.close();
cout<<"Do you want to read the information, if yes please enter 'y'"<<endl;
cin >> inp;
if(inp=='y'||inp=='Y')
{
ifstream ifs("data.txt");
for(i=0;i<n;i++)
{
cout << "Reading information from the file of Student " <<i+1<< endl;
ifs >> info;
cout <<"Room Number: "<< info << endl;
ifs >> info;
cout <<"Name: "<< info << endl;
ifs >> info;
cout <<"Address: "<< info << endl;
ifs >> info;
cout <<"Phone Number: "<< info << endl;
}
ifs.close();
}}


