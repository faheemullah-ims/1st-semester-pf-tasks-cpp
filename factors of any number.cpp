#include<iostream>
using namespace std{
	int num;
	cout<<"enter number: ";
	cin>>num;
	int highestfactor;
	cout<<"factiors of "<<num<<" are ";
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cout<<i<<",";
			highestfactor=i;//highest factor updated each time the loop iterate
		}
	}cout<<endl;
	cout<<"highest factor is "<<highestfactor;
}