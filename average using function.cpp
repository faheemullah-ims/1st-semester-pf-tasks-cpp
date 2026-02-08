#include<iostream>
using namespace std;
int avgg(int total,int n)
{
	float average=total/n;
	cout<<"average= "<<average;
	return average;
}

int main()
{
	int n;
	cout<<"you want to calculate the average of how many quizes: ";
	cin>>n;
	int total=0;
	for(int i=1;i<=n;i++)
	{
		int marks;
		cout<<"enter the marks of quiz "<<i<<" :";
		cin>>marks;
		total=total+marks;
	}
	cout<<"total= "<<total<<endl;
	//you have to pass this total and 
	//n as parameters to the function above
	
	avgg(total,n);	
}