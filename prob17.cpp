# include <iostream>
# include <cmath>
using namespace std;

/* to find roots of quadratic equation.*/


int main()
{
float a,b,c ,root1,root2,dis,real,im;
cout<<"program to find roots of quadratic equation";
cout<<"\n \nenter coefficients a,b,c";
cin >>a>>b>>c;
dis= b*b - 4*a*c;

if (dis>0)
 {
    root1 =(-b+sqrt(dis))/2*a;
    root2 =(-b-sqrt(dis))/2*a;
    cout<<"\n \n both roots are real and different";
}
if (dis==0)
{ 
    root1 =root2=(-b/2*a);
  cout<<"\n \n both roots are equal and real";
}
if (dis<0)
{
 cout<<"\n \n both roots are imaginary and different";
 im=sqrt(-dis)/2*a;
real=-b/2*a;
}
return 0;
}
