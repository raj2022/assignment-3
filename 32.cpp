#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n,dig=0,FIR=0,LST=0;
  cout<<"PROGRAM TO FIND FIRST AND LAST DIGIT OF ANY NUMBER";
  cout<<"\n \nEnter the INTEGER: ";
  cin>>n;
  int num1=abs(n);
  LST=num1%10;
  while(num1>0)
  { 
    FIR=num1%10;
    num1=num1/10;
    dig++;
  }
  cout<<"\n \nThe first digit of "<<num<<" is "<<F<<" and last digit is "<<L;
  return 0;
}
