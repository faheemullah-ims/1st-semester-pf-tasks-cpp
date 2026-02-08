#include<iostream>
using namespace std;
int main()
{
	int arr[4]={ 4,1,6,8};
	int n=4;
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			count++;
		}
	}
	cout<<"----Bubble sort result----"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<",";
	}cout<<endl;
	cout<<"Total comparasions= "<<count<<endl;
	return 0;
}