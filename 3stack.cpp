#include<iostream.h>
#include<conio.h>
void main()
{
int a[5],j,k,i,item,top=0,b,n;
clrscr();
cout<<"\n\t stack operation";
cout<<"\n\t ***************";
cout<<"\n\t enter the size of stack:";
cin>>n;
b:
cout<<"\n\n 1.push\n\n 2.pop\n\n 3.list of stack\n\n 4.exit:"; cout<<"\n\n what 
you want to prefer:"; cin>>j;
switch(j)
{
case 1:
cout<<"\n enter the elements do you want to insert:";
cin>>item;
if(top==n)
{
cout<<"\n stack is full";
goto b;
}
do
{
top=top+1;
a[top]=item;
}
while(j==2||j==3);
goto b;
case 2:
if(top<=0)
{
cout<<"stack is empty";
goto b;
}
do
{
k=a[top];top=top-1;
cout<<"\n deleted item is \n"<<k;
}
while(j==1||j==3);
goto b;
case 3:
cout<<"\n list of stack\n\n";
for(i=1;i<=top;i++)
cout<<a[1];
if(j!=4)
goto b;
}
getch();
}
