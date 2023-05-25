#include<iostream.h>
#include<conio.h>
void display(int var1,double var2)
{
cout<<"int number:"<<var1;
cout<<"double number:"<<var2 << endl;
}
void display(double var)
{
cout <<"double variable:"<<var<<endl;
}
void display (int var)
{
cout<<"int variable :"<<var<<endl;
}
void main()
{
int a=5;
double b=5.5;
clrscr();
display(a) ;
display(b);
display(a,b);
getch();
}