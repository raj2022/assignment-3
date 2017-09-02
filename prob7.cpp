# include <iostream> 
using namespace std;


int main()
{

 int a;
 cout<<"enter the year";
 cin>>a;
 if( a%400==0 || (a%4==0 && a%100!=0))
    cout<<"It is a leap year";
 else cout<<"it is an non leap year";
return 0;
}
