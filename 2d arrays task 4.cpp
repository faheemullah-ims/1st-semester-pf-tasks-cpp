#include<iostream>
using namespace std;
int main()
{
	int upper_half[5][5]={0};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"enter number for index "<<i<<j<<" : ";
			cin>>upper_half[i][j];
		}
	
	}
	cout<<"---Upper half result----"<<endl;
	for(int i=0;i<5;i++)
	{
		for(int space=0;space<i;space++)
		{
			cout<<" ";
		}
		for(int j=i;j<5;j++)
		{
			cout<<upper_half[i][j];
		}
	
		cout<<endl;
	}
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	