#include<iostream>
using namespace std;
class personal{
    protected:
    char name[50];
    char address[50];
    char birthdate[50];
    char gender;
    public:
    void get_personal();
};
class professional{
    protected:
    int noofyearsexp;
    char orgname[50];
    char projname[50];
    char projdetails[50];
    public:
    void get_professional();
};
class academic{
    protected:
    int year;
    int marks;
    int percentage;
    char clas[50];
    public:
    void get_academic();
};
class biodata:public personal,public academic,public professional
{
    public:void display();
};
void personal::get_personal()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter address: ";
    cin>>address;
    cout<<"Enter birthdate (dd/mm/yyyy): ";
    cin>>birthdate;
    cout<<"Enter gender(M/F): ";
    cin>>gender;
}
void professional::get_professional()
{
    cout<<"Enter number of years experienced: ";
    cin>>noofyearsexp;
    cout<<"Enter organization name: ";
    cin>>orgname;
    cout<<"Whats's your project name: ";
    cin>>projname;
    cout<<"Enter your project details: ";
    cin>>projdetails;
}
void academic::get_academic()
{
    cout<<"Enter year: ";
    cin>>year;
    cout<<"Enter marks: ";
    cin>>marks;
    cout<<"Enter percentage: ";
    cin>>percentage;
    cout<<"Enter class: ";
    cin>>clas;
}
void biodata::display()
{
    cout<<"~~~Employee details~~"<<endl;
    
    
    cout<<"~~~Personal Details~~~"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Birthdate: "<<birthdate<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"\n";
    cout<<"**Professional Details***"<<endl;
    cout<<"Number of year experienced: "<<noofyearsexp<<endl;
    cout<<"Organization Name: "<<orgname<<endl;
    cout<<"Project name: "<<projname<<endl;
    cout<<"Project details: "<<projdetails<<endl;
    cout<<"\n";
    cout<<"----------Academic Details----------"<<endl;
    cout<<"Academic Year: "<<year<<endl;
    cout<<"Marks: "<<marks<<endl;
    cout<<"Percentage: "<<percentage<<endl;
    cout<<"Class: "<<clas<<endl;
}
int main()
{
    biodata b;
    b.get_personal();
    b.get_academic();
    b.get_professional();
    b.display();
    return 0;
}
