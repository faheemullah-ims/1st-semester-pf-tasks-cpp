u#include<iostream>
using namespace std;
int main()
{
	int base,exponent;
	cout<<"enter base and exponent\n";
	cin>>base>>exponent;
	int i=1,result=1;
	while(i<=exponent)
	{
		cout<<result<<" x "<<base<<" = ";//Whats hapening
		result=result*base;
		cout<<result<<endl;	
		i++;
	}									//First cout shows old value
										//Then multiplication happens
										//Second cout shows new value	
	cout<<base<<" power "<<exponent<<" = "<<result<<endl;
}
/*built in function is also there 
use cmath heade file first
then function is pow(base,exponent)*/