#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	bool isprime=true;//flags
	for(int i=2;i<num;i++)//number is incremented by one and if it is less that number it will divide num by i
	{//if number is found divided compltely by any number between itselff and 1 it is not prime
		if(num%i==0)//check for each number  if num can be completely divided by that number
		{
			isprime=false;
		}
	}	
	if(isprime)//if isprime =true
	{
		cout<<"prime\n";
	}
	else//if isprime=false;
	cout<<"not prime\n";
}