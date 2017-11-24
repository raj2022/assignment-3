#include <iostream>
using namespace std;
int main()
{
  int i,n;
  cout<<"Program to print multiplication table of any number";
  cout<<"enter the number: ";
  cin>>n;
  cout<<"\n \nThe multiplication table is as like: ";
  for(;i<=100;i++)
  {
    cout<<"\n"<<n<<" * "<<i<<" = "<<(n*i);
  }
  return 0;
}
