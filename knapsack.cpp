#include<iostream.h>
#include<conio.h>
void main()
{
float p[100],w[100],x[10],profit=0,u;
int n,i;
clrscr();
cout<<"\t\t KNAPSACK PROBLEM:";
cout<<"\n\t enter number of objects:";
cin>>n;
for(i=1;i<n;i++)
{
cout<<"\n\t enter profit of objects:";
cin>>p[i];
cout<<"\n\t enter the weight of objects:";
cin>>w[i];
}
cout<<"\n\t Enter the capacity of knapsack:";
cin>>u;
for(i=1;i<n;i++)
{
if(w[i]>u)break;
x[i]=1;
u=u-w[i];
profit=profit+p[i]*x[i];
}
if(i<=n)x[i]=u/w[i];
cout<<"profit:";
for(i=1;i<=n;i++)
cout<<p[i]<<"\n";
cout<<"weight:";
for(i=1;i<n;i++)
cout<<w[i]<<"\n";
cout<<"\n\t Result:";
for(i=1;i<n;i++)
{
cout<<x[i]<<" ";
}
cout<<"\n Maximize profit is:"<<profit;
getch();
}
