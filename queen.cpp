#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream.h>
static int t[10]={-1};
void queens(int i);
int empty(int i);
void print_solution();
int main()
{
clrscr();
cout<<"\n\t 8 QUEENS PROBLEM";
cout<<"\n\t*****************";
queens(1);
print_solution();
return(0);
}
void queens(int i)
{
for(t[i]=1;t[i]<=8;t[i]++)
{
if(empty(i))
{
if(i==8)
{
print_solution();
exit(0);
}
else
{
queens(i+1);
}
}
}
}
int empty(int i)
{
int j;
j=1;
while(t[i]!=t[j] && abs(t[i]-t[j])!=(i-j) && j<8)
j++;
return((i==j)?1:0);
}
void print_solution()
{
int i;
for(i=1;i<=8;i++)
cout<<"\nt["<<i<<"]="<<t[i];
getch();
}
