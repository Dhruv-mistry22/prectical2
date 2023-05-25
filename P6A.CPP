#include<iostream.h>
#include<conio.h>
class temperature
{
private:
float fahren,celsious;
public:
float conservasion(float f)
{
fahren=f;
celsious=(fahren-32)*5.0/9.0;
 return celsious;
}
};

void main()
{
clrscr();
temperature t;
float f;
cout<<"enter temp in fahrebn:";
cin>>f;
cout<<"temperature in celsious:"<<t.conservasion(f);

getch();
}