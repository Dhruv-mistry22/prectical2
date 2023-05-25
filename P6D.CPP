#include<iostream.h>
#include<conio.h>
class student {
private:
int er_no,m,m1,m2,m3;
char name[20];
char course [20];
public:
void get ()
{
cout<<"enter er no:";
cin>> er_no;
cout<<"enter name :";
cin>>name;
cout<<"enter course:";
cin>>course;
cout<<"enter 3 sub marks :";
cin>>m1>>m2>>m3;
}
void sum()
{
int m=m1+m2+m3;
cout <<"total marks is:"<<m;
}
void dis ()
{
cout <<"\n your er no is :"<<er_no;
cout <<"\n your name is :"<<name;
cout <<"\n your course is :"<<course<<endl;
sum();
}
};



int main()
{
student s1,s2,s3;
clrscr();
s1.get();
s1.dis();





getch();
return 0;
}