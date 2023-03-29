#include<iostream>
#include<string.h>
using namespace std;
template<class T1, class T2, class T3, class T4>
class hostel
{ private:
T1 room_no;
T2 name;
T3 address;
T4 phone;	
public: 
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
  cout<<"\nName :"<<name;
  cout<<"\nAddress :"<<address;
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
int main()
{ hostel<int,string,string,int> s,m[100];
int n,i;
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
cout<<"\nThe deails of the Student whose data is already in the database is ";
get_details(s);
s.display_details();
cout<<"\nEnter the number of students whose Data has to be added to the system : ";
cin>>n;
for(i=0;i<n;i++)
{ cout<<"Enter the details of Student "<<i+1;
m[i].enter_details();
}
cout<<"\nThe data you added to the system is as follows : ";
for(i=0;i<n;i++)
{ cout<<"\nThe Data of the Student "<<i+1;
m[i].display_details();
}
}
