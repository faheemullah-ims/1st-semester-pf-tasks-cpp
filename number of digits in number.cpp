#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter number and i will find the number of digits in that number: ";
	cin>>num;
	int digits=0;
	while(num>0)
	{
		num=num/10;			//dividing number by 10 removes the last digit
		cout<<num<<endl;	//ignores the decimal as it is integer value datatype
		digits++;
	}
	cout<<"Number of digits in are "<<digits<<endl;
}