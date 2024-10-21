#include<iostream.h>
#include<conio.h>
void main()
{
int n;
clrscr();
cout<<"\t\t\t TOWER OF HANOI\n";
cout<<"\t\t\t ***** ** *****\n" ;
cout<<"Enter the number of disk:";
cin>>n;
void tower(int,char,char,char);
tower(n,'A','B','C');
getch();
}
void tower(int a,char from,char aux,char to)
{
if(a==1)
{
cout<<"\t Move disk 1 From"<<from<<" to"<<to<<"\n\n";
}
else
{
tower(a-1,from,to,aux);
cout<<"\t Move Disk"<<a<<" from"<<from<<" to"<<to<<"\n\n";
tower(a-1,aux,from,to);
}
}