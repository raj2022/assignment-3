# include<iostream>
using namespace std;

/*Program to input sides of triangles and check whether triangle is valid or not.*/
int main ()
{
float a,b,c;
cout<<"program to enter sides of triangles";
cout<<"\n \nenter sides of triangle";
cin>>a>>b>>c;
if 
 (a+b>c||b+c>a||a+c>b)
cout<<"\n \n this triangle is can be formed with specified sides";
else
cout<<"\n \nwe can't have triangle with the specified sides.";
return 0;
}
