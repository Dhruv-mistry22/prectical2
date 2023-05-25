#include<iostream.h>
#include<conio.h>
class area
{
public:
int area;
area()
{
area=0;
}
area(int side)
{
area=side*side;
}
area(int length,int width)
{
area=length*width;
}
int disp()
{
return area;
}

};
void main()
{
clrscr();
area obj1;
area obj2(6) ;
area obj3(3,4);
cout<<"area of obj1:"<<obj1.disp()<<endl;
cout<<"area of obj2:"<<obj2.disp()<<endl;
cout<<"area of obj3:"<<obj3.disp()<<endl;
getch();
}
