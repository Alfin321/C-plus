#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct node
{
int data;
node *next;
}
*front=NULL,*rear=NULL,*p=NULL,*np=NULL;
void push(int x)
{
np=new node;
np->data=x;
np->next=NULL;
if(front==NULL)
{
front=rear=np;
rear->next=NULL;
}
else
{
rear->next=np;
rear=np;
rear->next=NULL;
}
}
int remove()
{
int x;
if(front==NULL)
{
cout<<"empty queue \n";
}
else
{
p=front;
x=p->data;
front=front->next;
delete(p);
return(x);
}
}
int main()
{
int n,c=0,x,true;
clrscr();
cout<<"enter the no of values to be pushed into queue \n";
cin>>n;
while(c<n)
{
cout<<"enter the value to be entered into queue \n";
cin>>x;
push(x);
c++;
cout<<"\n\n removed value";
while(true)
{
if(front!=NULL)
cout<<remove()<<endl;
else
break;
}
getch();
}
}
