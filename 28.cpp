#include <iostream>
using namespace std;
int main()
{
  int i=1,sum=0,n=0;
  cout<<" print the sum of all even numbers from 1 to n";
  cout<<"\n \n Enter the limiting value of n: ";
  cin>>n;
  while(i<=n)
  {
    if(i%2==0)
    sum+=i;
    i++;
  }
  cout<<"\n \nThe sum of all even numbers from 1 to "<<n<<" is: "<<sum;
  return 0;
}
