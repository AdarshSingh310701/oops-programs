#include<iostream>
using namespace std;
class hostel
{   public: 
    int room_no;
    char name[30];
    char address[50];
    int phone;
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
};
int main()
{ hostel s[100];
int n;
int i;
string username;
string userpassword;
int loginattempt=0;
while(loginattempt<3)
{ cout<<"\n*******Welcome to Hostel Management System***********";
cout<<"\nPlease Enter your username:- ";
cin>>username;
cout<<"\nEnter your password:- ";
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
cout<<"\nEnter the number of students whose Data has to be added to the system : ";
cin>>n;
for(i=0;i<n;i++)
{ cout<<"Enter the details of Student "<<i+1;
s[i].enter_details();
}
cout<<"\nThe data you added to the system is as follows : ";
for(i=0;i<n;i++)
{ cout<<"\nThe Data of the Student "<<i+1;
s[i].display_details();
}}


