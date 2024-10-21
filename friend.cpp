#include<iostream.h>
#include<conio.h>
class two;
class one
{
int a;
float b;
public:
void get()
{
cout<<"\n ENTER THE INTEGER VALUE FOR a:"; cin>>a;
cout<<"\n ENTER THE FLOAT VALUE FOR b:";
cin>>b;
}
friend void dis(one,two);
void display()
{
cout<<"\n\n FIRST CLASS INTEGER VALUE"<<a<<endl; 
cout<<"\n\n FIRST CLASS FLOAT VALUE"<<b<<endl; }
};
class two
{
int c;
float d;
public:
void get()
{
cout<<"\n ENTER THE INTEGER VALUE FOR c:"; cin>>c;
cout<<"\n ENTER THE FLOAT VALUE FOR d:";
cin>>d;
}
friend void dis(one,two);
void display()
{
cout<<"\n\n SECOND CLASS INTEGER VALUE"<<c<<endl; 
cout<<"\n\n SECOND CLASS FLOAT VALUE"<<d<<endl; }
};
void dis(one s1,two t1)
{
cout<<"\n THE FIRST CLASS INTEGER VALUE IS:"<<s1.a<<endl; cout<<"\n 
THE FIRST CLASS FLOAT VALUE IS:"<<s1.b<<endl; cout<<"\n THE SECOND 
CLASS INTEGER VALUE IS:"<<t1.c<<endl; cout<<"\n THE SECOND CLASS 
FLOAT VALUE IS :"<<t1.d<<endl; }
void main()
{
one s1;
two t1;
clrscr();
cout<<"\n ENTER THE FIRST CLASS VALUE"<<endl<<endl; s1.get();
cout<<"\n ENTER THE SECOND CLASS VALUE"<<endl<<endl;
t1.get();
clrscr();
s1.display();
t1.display();
cout<<"\n\n USING FRIEND FUNCTION"<<endl; 
cout<<"\n\n ~~~~~~~~~~~~~~~~~~~~~"<<endl; dis(s1,t1);
getch();
}
