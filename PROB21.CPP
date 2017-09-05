#include<iostream>
#include<cmath>
using namespace std;

/*program to input basic salary of an employee and calculate its Gross salary.*/

int main()
{
float BS=0,HRA=0,DA=0,GS=0;
cout<<"enter the basic salary";
cin>>BS;
if(BS<=10000)
{
HRA=0.2*(BS);
DA=0.8*(BS);
GS= (BS+HRA+DA);
cout<<"\n \ngross salary is"<<GS;
}
else if
(BS<=20000)

{
 HRA=0.25*(BS);
 DA=0.9*(BS);
GS=(BS+HRA+DA);
cout<<"\n \ngross salary is"<<GS;
}
else HRA=0.3*(BS); 
DA=0.95*(BS);
GS=BS+HRA+DA;
cout<<"\n \ngross salary is"<<GS;
return 0;
}
