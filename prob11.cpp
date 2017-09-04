# include<iostream> 
using namespace std;


int main ()
{
  int  a=0;
cout<<"enter the day no. in week (1-7)";
cin>>a;
if(a==1)
cout<<"\n \nThe day is MONDAY";
else if (a==2)
cout<<"\n \nThe day is TUESDAY";
else if (a==3)
cout<<"\n \nThe day is WEDNESDAY";
else if (a==4)
cout<<"\n \nthe day is thrusday";
else if (a==5)
cout<<"\n \nthe day is friday";
else if (a==6)
cout<<"\n \nthe day is saturday";
else if (a==7)
cout<<"\n \nthe day is sunday";
else 
cout<<"\n \nthis is not a valid day number ";
return 0;
}
