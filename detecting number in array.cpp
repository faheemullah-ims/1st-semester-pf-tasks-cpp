#include<iostream>
using namespace std;
int main()
{
	//decfiiningg and declaring array
	int arr[10]={1,2,3,4,5,11,12,13,14,15,};
	int num;
	cout<<"enter number: ";
	cin>>num;
	bool detected=false;//initialize boolean expression with false
	for(int i=0;i<=10;i++){
		if(num==arr[i])
		detected=true;
		
	}
	if(detected)//if deteted=true
	cout<<"number found";
	else
	cout<<"number not found";
}