#include<iostream>
using namespace std;
int main()
{
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
	return 0;
}
