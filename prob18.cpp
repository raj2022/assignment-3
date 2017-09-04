#include<iostream>
using namespace std;

/*Program to calculate profit or loss*/

int main()
{
float cp=0,sp=0,pro=0,loss=0;
cout<<"program to calculate profit or loss";
cout<<"enter cost price of commodity";
cin>>cp;
cout<<"enter selling price of commodity";
cin>>sp;
if (cp>sp)
{
loss=(cp-sp);
cout<<"\n \nthere is loss of: Rs "<<loss;

}
else if (cp<sp)
{
pro= (sp-cp);
cout<<"\n \nthere is profit of:Rs"<<pro;
}
else 
cout<<"\n \nthere is not any profit and loss occured";

return 0;
}
