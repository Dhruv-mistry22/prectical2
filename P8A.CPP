#include<iostream.h>
#include<conio.h>
class B{
public:
int age;
char name[20];

void get()
		{
		cout <<"enter age:\n";
		cin>>age;
		cout <<"enter name:\n";
		cin>>name;
		}

void display(B &a)
		{
		cout<<"your age is :"<<age;
		cout<<"your name is :"<<name;
		}

};
void main()
{

clrscr();
B d;
d.get();
d.display(d);








getch();
}