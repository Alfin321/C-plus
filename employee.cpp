#include<iostream.h>
#include<conio.h>
Class emp
{
Public:
Char name[20,des[20];
Void get()
{
Cout<”Enter the employee number: “ ;
Cin>>eno;
Cout<<”Enter the employee name: “;
Cin>>name;
Cout<<”Enter the designation:”;
Cin>>des;
}
};
Class salary:public emp
{
Float bp,hra,da,pf,np;
Public:
Void get()
{
Cout<<”Entyer the basic pay:”;
Cin>.bp;
Cout<<”Enter the human resource allowance:”;
Cin>.da;
Cout<<”Enter the profitability fund:”;
Cin>>pf;
}
Void calculate()
{
Np=bp+hra+da-pf;
}
Cout<<eno”\t”<<name<<\t”<<des<<\t”<<hra<<”\t”<<da<<”\t<<”pf<<”\t”<<np<<”\t”;
}
};
Void main()
{
Int I,n;
Char ch;
Salary s[10];
Clrscr();
Cout<<”Enter the number of employee:”;
Cin>>n;
For(i=0;i<n;i++)
{
S[i].get();
s[i].calculate();
}
Cout<<”\n e-no\t e-name\t des\t bp\t hra\t da\t pf\t np\n”;
For(i=0;i<n;i++)
{
S[i].display();
}
Getch();
}
