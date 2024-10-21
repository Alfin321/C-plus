#include<iostream.h>
#include<conio.h>
#include<math.h>
void line ();
class shap
{
public:
virtual void call_area()
{
}
virtual void call_peri()
{
}
};
class square:public shap
{
int a;
public:
square(int x)
{
a=x;
}
void call_area();
void call_peri();
};
class rect:public shap
{
int l,b;
public:
rect(int x,int y)
{
l=x;
b=y;
}
void call_area();
void call_peri();
};
class tri:public shap
{
int b,h,c;
public:
tri(int x,int y,int z)
b=x;
h=y;
c=z;
}
void call_area();
void call_peri();
};
void square::call_area()
{
cout<<endl<<"\n area of the square:"<<a*a;
}
void square::call_peri()
{
cout<<endl<<"\n perimeter of the square:"<<4*a;
}
void rect::call_area()
{
cout<<endl<<"\n area of rectangle:"<<(l*b);
}
void rect::call_peri()
{
cout<<endl<<"\n perimeter of the rectanle:"<<2*(l+b);
}
void tri::call_peri()
{
cout<<endl<<"\n perimeter of the triangle:"<<b+h+c;
}
void tri::call_area()
{
float s;
s=(b+h+c)/2;
s=sqrt(s*(s-b)*(s-h)*(s-c));
cout<<endl<<"\n area of the triangle:"<<s;
}
void main()
{
int asqr,lrec,brec,btri,htri,ctri;
clrscr();
cout<<"\n\n\t find area and perimeter:"<<endl;
line();
cout<<endl<<"enter the size of the square:";
cin>>asqr;
cout<<endl<<"\n enter the breadth and length of the rectangle:"; 
cin>>brec>>lrec;
cout<<endl<<"\n enter three sides of the 
triangle:"; cin>>btri>>htri>>ctri;
 line();
cout<<"request";
square s(asqr);
rect r(brec,lrec);
tri t(btri,htri,ctri);
shap*sp;
sp=&s;
sp->call_area();
sp->call_peri();
sp=&t;
sp->call_area();
sp->call_peri();
line();
getch();
}
void line()
{
int i;
cout<<endl;
for(i=1;i<=80;i++)
cout<<"~";
cout<<endl;
}
