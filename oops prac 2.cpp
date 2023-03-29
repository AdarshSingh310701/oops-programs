#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class stock
{
               char author[50];
               char title[50];
               char pub[50];
               double price;
               int numcopies;
   public:
               stock();
               int access_title(char a[]);
               void input();
               void getdata(int);

};
stock::stock()
{
                  char author[50]={"abc"};
                  char title[50]={"efg"};
                  char pub[50]={"hij"};
                  price=500;
                  numcopies=50;
}
int stock::access_title(char a[])
{
               if(strcmp(title,a))
                              return 0;
               else return 1;
}
void stock::getdata(int num)
{
               if(numcopies>=num)
                              cout<<"\nCost of "<<num<<" books is Rs. "<<(price*num);
               else
                  cout<<"\nSorry! Required copies not in stock";
}
void stock::input()
{
               cout<<"\nTitle: ";
               gets(title);
               cout<<"\nAuthor:";
               gets(author);
               cout<<"\nPublisher:";
               gets(pub);
               cout<<"\nPrices:";
               cin>>price;
               cout<<"\ncopies available:";
               cin>>numcopies;
}

int main()
{
   

   stock obj[2];
   int n;
   char ttle[50];

   cout<<"Enter details of 3 books";
   for(int i=0;i<2;++i)
    {
	obj[i].input();
    }
   cout<<endl;
   cout<<"\n Enter title of required book\n";
   gets(ttle);

   for(int i=0;i<2;i++)
   {
        if(obj[i].access_title(ttle))
        {
        cout<<"\nHow many copies? ";
        cin>>n;
        obj[i].getdata(n);
        }
        else
        { cout<<"\nBook unavailable";}
   }
   getch();
   
   return 0;
}

