#include<iostream.h>
#include<conio.h>
int part(int low,int high,int*a)
{
int i,h=high,l=low,p,t;
p=a[low];
while(low<high)
{
while(a[l]<p)
{
l++;
}
while(a[h]>p)
{
h--;
}
if(l<h)
{
t=a[l];
a[l]=a[h];
a[h]=t;
}
else
{
t=p;
p=a[l];
a[l]=t;
break;
}
}
return h;
}
void quick(int l,int h,int*a)
{
int index,i;
if(l<h)
{
index=part(l,h,a);
quick(l,index-1,a);
quick(index+l,h,a);
}
}
int main()
clrscr();
int a[100],n,l,h,i;
cout<<"Enter no of element:";
cin>>n;
cout<<"Enter the element(use as a seperator)";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\n Initial array\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
n=n-1;
l=0;
quick(l,h,a);
cout<<"\n After sorting:\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
getch();
return 0;
}
