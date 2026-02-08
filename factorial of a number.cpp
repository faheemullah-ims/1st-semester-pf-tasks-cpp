#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter number and i will find the factorial of that number: ";
	cin>>num;
	long long fact=1;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial of "<<num<<" is "<<fact<<endl;
	return 0;
}