#include<iostream.h>
#include<conio.h>
struct student{
int r_no;
char name[20];
int age;
char br[20];
};
int main()
{
student s[10];
int i,n;
clrscr();
cout<<"enter number of structure :";
cin>>n;
cout<<"enter structure detaile :"<<endl;
for (i=0;i<n;i++)
{
cout<<"enter roll no:";
cin>>s[i].r_no;
cout<<"enter name:";
cin>>s[i].name;
cout<<"enter age:";
cin>>s[i].age;
cout<<"enter branch:";
cin>>s[i].br;
}
cout<<"display student detail:" <<endl;
for(i=0;i<n;i++)
{
cout<<"student roll no :"<<s[i].r_no<<endl;
cout<<"student name :"<<s[i].name<<endl;
cout<<"student age  :"<<s[i].age<<endl;
cout<<"student branch :"<<s[i].br<<endl;
cout<<endl;
}
getch();
return 0;
}



