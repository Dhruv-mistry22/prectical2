#include<iostream.h>
#include<conio.h>
class employee
{
private:
int emp_id;
char emp_name[20];
char dept[20];
public:
void get()
{
cout<<"\n enter emp id:";
cin>>emp_id;
cout<<"\n enter emp name:";
cin>>emp name;
cout<<"\n enter emp dept";
cin>>emp dept;
}
void display ()
{
cout<<"__________________display record______________________" ;
cout<<"\n empoyes id :"<< emp id << end l;
cout<<"\n empoyes name  :"<< emp id << end l;
cout<<"\n empoyes dept:"<< emp id << end l;
}
};

void main()
{
employes X[100];
int i,n;
clrscr();
cout <<"enter number :";
cin>>n;
for(i=0;i<n;i++)
{
X[i].get();

}
for(i=0;i<n;i++)
{
X[i].display();
}
getch();
}