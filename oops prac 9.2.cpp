#include <bits/stdc++.h>
#include <conio.h>
#include <fstream>
using namespace std;
class hostel {
private:
	int room_no;
    char name[20];
    char address[30];
    int phone;

public:
	
	hostel()
	{ room_no=10;
	strcpy(name, "Abhinav");
	strcpy(address, "Nagpur");;
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
	{ cout<<"\n\nRoom number : "<<room_no;
     cout<<"\nName : "<<name;
     cout<<"\nAddress : "<<address;
     cout<<"\nPhone number : "<<phone;
	}

	int store_data();
	void view_data();
	void search_data(char*);
	void delete_data(char*);
	void update_data(char*);
};
void hostel::update_data(char* t)
{fstream file;
file.open("myfile3.txt",
			ios::in | ios::out | ios::ate | ios::binary);
	file.seekg(0);
	file.read((char*)this, sizeof(*this));

	while (!file.eof()) {
		if (!strcmp(t, name)) {
			enter_details();

			file.seekp(file.tellp() - sizeof(*this));
			file.write((char*)this, sizeof(*this));
		}
		file.read((char*)this, sizeof(*this));
	}
file.close();
}
void hostel::delete_data(char* t)
{
	ifstream fin;
	ofstream fout;
	fin.open("myfile3.txt",
			ios::app | ios::binary);
	if (!fin)
		cout << "\n File not found";
	else {
		fout.open("tempfile.txt",
				ios::app | ios::binary);
		fin.read((char*)this, sizeof(*this));

		while (!fin.eof()) {
			if (strcmp(name, t))
				fout.write((char*)this, sizeof(*this));
			fin.read((char*)this, sizeof(*this));
		}
		fin.close();
		fout.close();
		remove("myfile3.txt");
		rename("tempfile.txt", "myfile3.txt");
	}
}
void hostel::search_data(char* t)
{
	int counter = 0;
	ifstream fin;
	fin.open("myfile3.txt",
			ios::in | ios::binary);

	if (!fin)
		cout << "File not found";
	else {
		fin.read((char*)this, sizeof(*this));

		while (!fin.eof()) {
			if (!strcmp(t, name)) {
				display_details();
				counter++;
			}
			fin.read((char*)this, sizeof(*this));
		}
		if (counter == 0)
			cout << "No record found";
		fin.close();
	}
}
void hostel::view_data()
{
	ifstream fin;

	fin.open("myfile3.txt", ios::in | ios::binary);
	if (!fin)
		cout << "File not found";

	else {
		fin.read((char*)this, sizeof(*this));

		while (!fin.eof()) {
			display_details();
			fin.read((char*)this, sizeof(*this));
		}
		fin.close();
	}
}
int hostel::store_data()
{
	if (room_no == 0 && phone == 0) {
		cout << "Student's data not"
			<< " initialized";
		return (0);
	}
	else {
		ofstream fout;
		fout.open("myfile3.txt", ios::app | ios::binary);
		fout.write((char*)this, sizeof(*this));
		fout.close();
		return (1);
	}
}
int menu()
{
	int choice;
	cout << "\n***********Student Hostel Management System*********";
	cout << "\n1.Add Student Data";
	cout << "\n2.View Student Data";
	cout << "\n3.Search Student Data";
	cout << "\n4.Delete Student Data";
	cout << "\n5.Update Student Data";
	cout << "\n6.Exit";
	cout << "\n\nEnter your choice : ";
	cin >> (choice);
	return (choice);
}
int main()
{
	hostel h1;
	char name[20];
	string username;
	string userpassword;
	int loginattempt=0;
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
while (1) {
		switch (menu()) {
		case 1:
			h1.enter_details();
			h1.store_data();
			cout << "\nRecord inserted";
			break;
		case 2:
			cout<<"\nThe details of the students staying in the hostel: ";
			h1.view_data();
			break;
		case 3:
			cout << "\nEnter name of "
				<< "student to search : ";
			cin.ignore();
			cin>>name;
			h1.search_data(name);
			break;
		case 4:
			cout << "\nEnter name of student "
				<< "for deleting record : ";
			cin.ignore();
			cin>>name;
			h1.delete_data(name);
			cout<<"\nRecord deleted";
			break;
		case 5:
			cout << "\nEnter name of student "
				<< "to update record : ";
			cin.ignore();
			cin>>name;
			h1.update_data(name);
			cout<<"\nRecord updated";
			break;
		case 6:
			cout << "\n Thanks for using";
			cout << "\n Press any key to exit";
			getch();
			exit(0);
		default:
			cout << "Invalid input";
		}
		getch();
	}
}

