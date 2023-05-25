#include<iostream.h>
#include<conio.h>
class numbercounter {
 private:
 int numpositive;
 int numnegative;
 public:
 numbercounter (){

 numpositive=0;
 numnegative=0;
 }
 void count(int num){
 if(num>0){
 numpositive++;
 }
 else if(num<0){
 numnegative++;
 }
 }
 void displaycount(){
 cout<<"number of positive number entered :"<<numpositive<<endl;
 cout<<"number of negative number entered :"<<numnegative<<endl;
}
};
void main()
{
numbercounter NC;
int num;
clrscr();
for(int i=1;i<=10;i++){
cout<<"enter number "<<i<<":";
cin>>num;
NC.count(num);
}
NC.displaycount();
getch();

}