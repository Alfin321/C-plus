#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int a[50],n,i,j,max,bin,mid,min=1,n1,temp;
clrscr();
cout<<"\n\t BINARY SEARCH";
cout<<"\n\t Enter the number of terms:";
cin>>n;
max=n;
cout<<"Enter the number one by one:";
for(i=1;i<n;i++)
{
cin>>a[i];
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"ASCENDING NUMBER:";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\n";
}
cout<<"\n\t Enter the number to search:";
cin>>n1;
cout<<"\n\t linear search";
for(i=0;i<=n;i++)
{
if(n1==a[i])
{
cout<<"\n\t The number is:"<<a[i];
cout<<"\n\t The position of the number:"<<i;
g
}
}
cout<<"\n Number not found";
bin:cout<<"\n Binary search";
while(max>=min)
{
mid=(min+max)/2;
if(n1==a[mid])
{
cout<<"Number is:"<<a[mid];
cout<<"Position of the number is:" <<mid;
getch();
exit(0);
}
else if(n1<a[mid])
max=mid-1;
else
min=mid+1;
}
cout<<"Number not found";
getch();
}
