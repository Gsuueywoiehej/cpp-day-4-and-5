#include<iostream>
using namespace std;
int main()
{
	char g;
	int yos,qual,sal=0;
	cout<< "\n enter the gender :";
	cin>>g;
	cout<<" \n enter the year of service :";
	cin>>yos;
	cout<< "\n enter the qualification (gr=0,pgr=1):";
	cin>>qual;
	if(g=='m' && yos>=10 && qual==1)
	sal=15000;
	else if((g=='m' && yos>=10 && qual==0)|| (g='m' && yos<10 && qual==1))
	sal=10000;
	else if(g=='m' && yos<10 && qual==0)
	sal=7000;
	else if(g=='f' && yos>=10 && qual==1)
	sal=12000;
	else if(g=='f' && yos>=10 && qual==0)
	sal=9000;
	else if(g=='f' && yos<10 && qual==1)
	sal=10000;
	else if(g=='f' && yos<10 && qual==0)
	sal=6000;
	cout<< " the salary is :"<<sal;
}
