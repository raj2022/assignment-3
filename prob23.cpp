
#include <iostream>
using namespace std;

/*Program to print numbers from n to 1*/
int main()

{
int n=0;
cout<<"program to print number from n to 1";
cout<<"\n \nEnter the limit of the loop: ";
  cin>>n; 
int i=n;
  cout<<"\nThe numbers from  "<<n<<" to 1 are: ";
  while(i>=n)
  {
    cout<<"\n"<<i;
    --i;
  }
  return 0;
}
