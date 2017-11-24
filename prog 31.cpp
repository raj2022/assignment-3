#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n=0, d=0;
  cout<<"To CALCULATE NUMBER OF DIGITS IN THE GIVEN NUMBER";
  cout<<"\n \nEnter any INTEGER: ";
  cin>>n;
  int num1=abs(num);
  while(num1>0)
  {
    num1=num1/10;
    d++;
  }
  if(n!=0)
  {
    cout<<"\n \nThe number of digits in "<<n<<" is "<<d;
  }
  else
  {
    cout<<"\n \nThe number of digits in "<<n<<" is 1";
  }
  return 0;
 }
