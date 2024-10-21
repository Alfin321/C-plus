#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int n,a[30],item,i,j,mid,top,bottom;
cout<<"\n DIVIDE AND CONQUER METHOD";
cout<<"\n ****** *** ******* ******"; cout<<"\n Enter how 
many elements you want:"; cin>>n;
cout<<"\n Enter the elements in ascending order:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\n Enter the item to search:";
cin>>item;
bottom=1;
top=n;
do
{
mid=(bottom+top)/2;
if(item<a[mid])
top=mid-1;
else if(item>a[mid])
bottom=mid+1;
}
while(item!=a[mid]&&bottom<=top);
if(item==a[mid])
{
cout<<"\n Binary search successfull";
cin>>item;
cout<<"\n Found in position:"<<item,mid+1;
}
else
{
cout<<"\n Search failed\nNot found";
cin>>item;
}
return 0;
}
