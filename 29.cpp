#include <iostream>
using namespace std;
int main()
{
  int i,sum,n;
  cout<<" print the sum of all odd numbers from 1 to n";
  cout<<"\n \nEnter the limiting value of n: ";
  cin>>n;
  while(i<=n)
  {
    if(i%2!=0)
    sum+=i;
    i++;
  }
  cout<<"\n \nThe sum of all odd numbers from 1 to "<<n<<" is: "<<sum;
  return 0;
}
