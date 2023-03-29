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
 cout<<"Enter 1st sem fees paid by student : ";
 cin>>a;
 cout<<"Enter 2nd sem fees paid by student : ";
 cin>>b;
}
template<class T> T add(T &a,T &b)  
{  
    T result = a+b;  
    return result;  
      
}  
void display_details()
{ cout<<"\nRoom number : "<<room_no;
 cout<<"\nName : "<<name;
 cout<<"\nAddress : "<<address;
 cout<<"\nPhone number : "<<phone;
 cout<<"\nFirst Year fees paid : "<<result;
}
};
int main()
{ hostel<int,string,string,int,int,int,int> s;
string username;
int a,b;
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


cout<<"\nEnter the details of Student ";
s.enter_details();


s.add(a,b);

cout<<"\nThe data you added to the system is as follows : ";

cout<<"\nThe Data of the Student ";
s.display_details();

}
