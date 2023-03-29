#include<iostream> 
using namespace std; 
class personal{ 
protected: 
string name; 
string address; 
 string birthdate; 
string gender; 
public: 
void get_personal(){ 
cout<<"Name of employee= "; 
cin>>name; 
cout<<"Address= "; 
cin>>address; 
cout<<"DOB= ";
cin>>birthdate; 
cout<<"Gender= "; 
cin>>gender; 
}; 
}; 
class professional{ 
protected: 
int years; 
 string orgname; 
 string designation; 
 string department; 
 int salary; 
 public: 
 void get_professional(){ 
 cout<<"No.of years worked= "; cin>>years; 
 cout<<"Company name= "; cin>>orgname; 
 cout<<"Designation= ";
cin>>designation; 
 cout<<"Department= "; cin>>department; 
 cout<<"Salary= "; 
 cin>>salary; 
} 
}; 
class academics{ 
protected: 
int marks; 
double percentage; 
string qualifications; 
int pass_year; 
public: 
void get_academic(){ 
cout<<"Total marks= "; 
cin>>marks; 
cout<<"Percentage= ";
cin>>percentage; 
cout<<"Qualifications= "; 
cin>>qualifications; 
cout<<"Year Of Passing= "; 
cin>>pass_year; 
 } 
}; 
class biodata:public personal,public professional,public  academics{ 
public: 
 void display(){ 
 cout<<"**********BIODATA**********\n";   
 cout<<"***PERSONAL DETAILS\n***\n";  cout<<"Name= "<<name<<endl; 
 cout<<"Address= "<<address<<endl; 
 cout<<"Birthdate= "<<birthdate<<endl;
 cout<<"Gender= "<<gender<<endl; 
  
  
 cout<<"******PROFESSIONAL  DETAILS******\n"; 
 cout<<"No.of years worked= "<<years<<endl;  cout<<"Company name= "<<orgname<<endl;  cout<<"Designation= "<<designation<<endl; 
 cout<<"Department= "<<department<<endl; 
 cout<<"Salary= "<<salary<<endl; 
  
  
 cout<<"******ACADEMIC DETAILS******\n";  cout<<"Total Marks= "<<marks<<endl; 
 cout<<"Percentage= "<<percentage<<endl; 
 cout<<"Qualifications= "<<qualifications<<endl;  cout<<"Year of passing= "<<pass_year<<endl; } 
};
int main(){ 
biodata bio; 
bio.get_personal(); 
bio.get_professional(); 
bio.get_academic(); 
bio.display(); 
return 0; 
} 

