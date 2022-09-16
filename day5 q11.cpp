#include<math.h>
#iclude<iostream>
using namespace std;
int main()
{
int p,t,n1,n2;
float tenureA,rateA,tenureB,rateB,sum=0,interest1,interest2;
cin>>p>>t>>n1;
for(int i=0;i>tenureA>>rateA);
float emi= p*rateA/(1-1/pow((1+rateA),(tenureA*12)));
sum=sum+(emi);
}
interest1=sum-p;
sum=0;
cin>>n2;
for(int i=0;i>tenureB>>rateB);
{
float emi= p*rateB/(1-1/pow((1+rateB),(tenureB*12)));
sum=sum+(emi);
}
interest2=sum-p;
 if(interest1>interest2);
{ 
cout<<"Bank B";
}
else
{
cout<<"Bank A";
}


