#include<iostream.h>
#include<conio.h>
class temp
{
int x,y;
public:
void get()
{
	cout<<"enter first number :" ;
	cin>>x;
	cout<<"enter second number :" ;
	cin>>y;
}
int min(temp t1)
{
   if  (t1.x>t1.y)
   {
   cout<<"first number is greter .";
   }
   else
   {

   cout<<"second number is greater.";
   }
   return(x,y);
}
};
void main()
{
temp t2,t3;
clrscr();
t2.get();
t3.min(t2);
getch();
}
