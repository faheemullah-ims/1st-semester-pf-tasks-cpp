#include<iostream>
using  namespace std;
int main()
{
	int years;
	cout<<"enter years ";
	cin>>years;
	if(years%400==0){
		cout<<"Leap year ";
	}
	else
	if(years%100==0){
		cout<<"Not leap year ";
	}
else	
if(years%4==0){
		cout<<"leap year ";
	}
	else{
		cout<<"not a leap year ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}