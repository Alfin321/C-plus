#include<iostream.h>
#include<conio.h>
class B
{
int a;
public:
int b;
void get_ab();
int get_a(void);
void show_a(void);
};
class D:public B
{
int c;
public:
void mul(void);
void display(void);
};
void B::get_ab()
{
a=5;
b=10;
}
int B::get_a(void)
{
return a;
}
void B::show_a(void)
{
cout<<"a="<<a<<"\n";
}
void D::mul()
{
c=b*get_a();
}
void D::display()
{
cout<<"a="<<get_a()<<"\n";
cout<<"b="<<b<<"\n";
cout<<"c="<<c<<"\n";
}
void main()
{
clrscr();
D d;
d.get_ab();
d.mul();
d.show_a();
d.display();
d.b=20;
d.mul();
d.display();
getch();
}
