#include<iostream.h>
#include<conio.h>
class time{
private:
int hour,min;
public:
void get(int h,int m )
{
hour=h;
min=m   ;
}
void put()
{
cout<<"hour:"<<hour<<endl;
cout<<"min:"<<min<<endl;
       }
       void sum(time,time);
       };
void time::sum(time t1,time t2)
{
min=t1.min+t2.min;
hour=min/60;
min=min%60;
hour=hour+t1.hour+t2.hour;
}
void main()
{
time t1,t2,t3;
clrscr();
t1.get(2,3);
t2.get(3,6);
t3.sum(t1,t2);
cout<<"t1:";
t1.put();
cout<<"t2:";
t2.put();
cout<<"t3:";
t3.put();
getch();
}