#include<iostream>
using namespace std;
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7>
class hostel
{ public: 
 T1 room_no;
 T2 name;
 T3 address;
 T4 phone;
 T5 a;
 T6 b;
 T7 result;
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
template<class T> T add(T &a,T &b)  
{  
    T result = a+b;  
    cout<<"\nFirst Year fees paid : "<<result; 
      
}  
void fee()
{ cout<<"\nEnter 1st sem fees paid by student : ";
 cin>>a;
 cout<<"\nEnter 2nd sem fees paid by student : ";
 cin>>b;
 add(a,b);
 }
void display_details()
{ cout<<"\nRoom number : "<<room_no;
 cout<<"\nName : "<<name;
 cout<<"\nAddress : "<<address;
 cout<<"\nPhone number : "<<phone;
 }
};
int main()
{ hostel<int,string,string,int,int,int,int> s[100];
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
for(i=0;i<n;i++)
{ cout<<"Enter fees paid by Student "<<i+1;
s[i].fee();
}
cout<<"\nThe data added to the system is as follows : ";
for(i=0;i<n;i++)
{ cout<<"\nThe Data of the Student "<<i+1;
s[i].display_details();
}
}
