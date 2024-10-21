#include<iostream.h>
#include<conio.h>
class complex
{
float x,y;
public:
complex()
{
}
complex(float a)
{
x=y=a;
}
complex(float real,float image)
{
x=real;
y=image;
}
friend complex sum(complex,complex);
friend void show(complex);
};
complex sum(complex c1,complex c2)
{
complex c3;
c3.x=c1.x+c2.x;
c3.y=c1.y+c2.y;
return c3;
}
void show(complex c)
{
cout<<c.x<<"+j"<<c.y<<"\n";
}
int main()
{
clrscr();
complex a(2.7,3.5);
complex b(1.6);
complex c;
c=sum(a,b);
cout<<"A=";
show(a);
cout<<"B=";
show(b);
cout<<"c=";
show(c);
complex P,Q,R;
P=complex(2.5,3.9);
Q=complex(1.6,2.5);
R=sum(P,Q);
cout<<"\n";
cout<<"p=";
show(P);
cout<<"Q=";
show(Q);
cout<<"R=";
show(R);
getch();
}
