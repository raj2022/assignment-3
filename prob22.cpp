
#include <iostream>
using namespace std;

/*Program to print numbers from 1 to n*/
int main()

{
float n=0,i;
cout<<"program to print number from 1 to n";
cout<<"\n \nEnter the limit of the loop: ";
  cin>>n; 
  cout<<"\nThe numbers from 1 to "<<n<<" are: ";
  while(i<=n)
  {
    cout<<"\n"<<i;
    ++i;
  }
  return 0;
}
