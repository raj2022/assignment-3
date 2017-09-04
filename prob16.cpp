# include<iostream>
using namespace std;

/*Program to input sides and angles of triangles and check whether triangle is valid or not.*/
int main ()
{
float a,b,c;
cout<<"program to enter sides of triangles and to check type of triangle";
cout<<"\n \nenter sides of triangle or enter angles of triangles ";
cin>>a>>b>>c;
if (a==b && a==c)
cout<<"\n \n this triangle is an equilateral triangle";
else if (a==b || b==c || a==c)
cout<<"\n \nthis  triangle is  an isosceles  triangle.";
else
cout<<"\n \nthis triangle is a scalene triangle.";

return 0;
}
