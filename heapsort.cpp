#include <iostream.h>
#include<conio.h>
Voidmax-heapify(int*a,inti,int n)
{
Intj,temp;
Temp=a[i];
J=2*I;
While(j<=n)
{
If(j<n&&a[j+1]>a[j])
J=j+I;
If(temp>a[j])
Break;
Else if(temp<=a[j])
{
A[j/2]=a[j];
J=2*j;
}
}
A[j/2=temp;
Return;
Voidheapsort(int*a,int n)
{
Int I, temp;
For(i=n;i>2;i--)
{
Temp=a[i];
A[i]=a[1];
A[1]=temp;
Max-heapify(a,1,i-1);
}
}
Voidbuild-maxheap(int#a,int n)
{
Int I;
For(i=n/2;i>=1;i--);
{
Max-heapify(a,I,n);
}
}
Int main()
{
Int n,I,x;
Cout<<”enter no of elements of array\n:;
Cin>>n;
Int a[20];
For(i=1;i<-n;i++)
{
Cout<<”enter element”<<(i)<<end1;
Cin>>a[i];
Build-maxheap(a,n);
Heapsort(a,n);
Cout<<”sorted output”|n;
{
Cout<<a[i<<end1;
Getch();
Return(0);
