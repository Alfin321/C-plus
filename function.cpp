#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class INT
{
protected:
int a[5][5];
};
class FLOAT
{
protected:
float b[5][5];
};
class ADD:public INT, public FLOAT
{
protected:
float c[5][5],tot,bgh;
int m,n,i,j,agh;
public:
void getdata();
void read(INT);
void read(FLOAT);
void sum(INT);
void sum(FLOAT);
void totsum();
void matadd(INT,FLOAT);
void disp();
};
void ADD::getdata()
{
cout<<"\n enter the number of rows & columns:";
cin>>n>>m;
}
void ADD::read(INT)
{
cout<<"\n enter the integer value for matrix A:";
for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>a[i][j];
}
void ADD::read(FLOAT)
{
cout<<"\n enter the float value matrix B:";
for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>b[i][j];
}
void ADD::sum(INT)
{
agh=0;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
agh=agh+a[i][j];
cout<<"\n the total number of integer value for matrix A:"<<agh<<"\n";
}
void ADD::sum(FLOAT)
{
bgh=0;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
bgh=bgh+b[i][j];
cout<<"\n the total number of float value for matrix B:"<<bgh<<"\n";
}
void ADD::totsum()
{
tot=agh+bgh;
cout<<"\n the total number of integer & float value of matrix(A+B):"<<tot;
}
void ADD::disp()
{
cout<<"\n the value of matrix A:\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"\t"<<a[i][j]<<"";
}
cout<<"\n \n";
}
cout<<"\n the value of matrix B:\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"\t"<<b[i][j]<<"";
}
cout<<"\n \n";
}
}
void ADD::matadd(INT,FLOAT)
{
for(i=0;i<n;i++)
for(j=0;j<m;j++)
c[i][j]=a[i][j]+b[i][j];
cout<<"\n Resultant matrix is \n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"\t"<<c[i][j]<<"";
}
cout<<"\n \n";
}
}
void main()
{
INT I1;
FLOAT F1;
ADD A1;
clrscr();
cout<<"\n \n \n \n \n";
cout<<setw(24)<<"\t\t matrix addition using function overloading\n"; 
cout<<setw(25)<<"\t \t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"; 
A1.getdata();
A1.read(I1);
A1.read(F1);
A1.disp();
A1.matadd(I1,F1);
A1.sum(I1);
A1.sum(F1);
A1.totsum();
getch();
}
