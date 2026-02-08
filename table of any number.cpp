#include<iostream>
using namespace std;
int mian()
{
	int n=10;
	int arr[n];
	cout<<"---enter 10 integers----\n";
	for(int i=0;i<n;i++)
	{
		cout<<"enter number for index "<<i+1<<":";
		cin>>arr[i];
	}
	int evenc=0;
	int oddc=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<" is even\n";
			evenc++;
		}
		else
		{
			cout<<arr[i]<<" is odd\n";
			oddc++;
		}
		cout<<"even numbers= "<<evenc<<endl;
		cout<<"odd numbers= "<<oddc<<endl;
	}
	return 0;
}