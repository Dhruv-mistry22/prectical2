#include<iostream.h>
#include<conio.h>

class y;

class x

{
int a,b;
public:
void getdata()
{
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
}
void displayx()
{
cout<<"constent of class x:"<<endl;
cout<<"a:"<<a<<endl;
cout<<"constrent of class y:"<<endl;
cout<<"b:"<<b<<endl;
}
friend  void access_private(x,y);
};
class y
{
int m,n;
public:
void getdata()
{
cout<<"enter m";
cin>>m;
cout<<"enter n";
cin>>n;
}
void displayy()
{
cout<<"constent of class m:"<<endl;
cout<<"m:"<<m<<endl;
cout<<"constrent of class n:"<<endl;
cout<<"n:"<<n<<endl;
}
friend void access_private(x,y);
};
void access_private(x p,y q)
{
cout<<"output from freind function: "<<endl ;
cout<<"constent of class x:"<<endl ;
cout<<"a: "<<p.a <<endl ;
cout<<"b: "<< p.b<<endl ;
cout<<"constent of class y:"<<endl ;
cout<<"m: "<<q.m<<endl ;
cout<<"n: "<<q.n<<endl ;
}
void pat()
{
 cout<<"/4";
}
int main()
{
clrscr();
x objx;
y objy;
pat();
cout<<endl;
objx.getdata();
objy.getdata();
objx.displayx();
objy.displayy();
access_private (objx,objy);
getch();
return 0;
}







