#include<iostream.h>
#include<conio.h>
class test{
int add;
public:
test(int a,int b)
{
		add=a+b;

}
void display ()
{
cout<<"the addition is :"<<add;
}
};
void main()
{
int x,y;
clrscr();
cout<< "enter value first:" ;
cin>>x;
cout<< "enter value second:" ;
cin>>y;
test  t(x,y);
t.display();
getch();
}