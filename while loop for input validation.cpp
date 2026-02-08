#include<iostream>
using namespace std;
int main()
{
//1
//	int number;
//	cout<<"enter positive number : ";
//	cin>>number;
//	while(number<0)//number less than 0 so it is negative
//	{
//		cout<<"you have entered negative number\n";
//		cout<<"kindly enter positive number\n";
//		cin>>number;//again take number if number is not positive		
//	}
//	cout<<number<<" is positive "<<endl;


//2pasword validation
//	int pasword;
//	cout<<"enter pasword: ";
//	cin>>pasword;
//	while(pasword!=000000)
//	{
//		cout<<"you have entered wrong pasword\n";
//		cout<<"enter pasword again: ";
//		cin>>pasword;
//	}
//	cout<<"you entered correct pasword!\n";	

//3
	int range;
	cout<<"enter number of your choice: ";
	cin>>range;
	while(range<0 || range>10)//and can not be used bcz number can not be less than 0 and greater than at same time 
	{						//and both conditions must be true or=1 of the 2 cindtion true condition true
		cout<<range<<" is out of range "<<endl;
		cout<<"enter another number \n";
		cin>>range;
	}
	cout<<range<<" is in the range! "<<endl;
	

	




}