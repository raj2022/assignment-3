# include <iostream> 
using namespace std;


int main()
{

 int a,b,c;
 cout<<"please enter three integer";
 cin>>a>>b>>c;
 if ( a>b && a>c)
    cout<<"greater number is"<<a ;
 else if (b>c && a<b)
  cout<<"graeter  number is"<<b;
 else if (c>a && c>b)
cout<<"greater no. is"<<c;
return 0;
}
