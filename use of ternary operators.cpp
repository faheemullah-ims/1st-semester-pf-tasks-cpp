#include<iostream>
using namespace std;
int main()
{
	const double pay_rate=50.0;//constants can not be chaed
	const int min_hours=5.0;//changing constants will couse error 
	int hours;
	cout<<"\n enter the number of hours you worked: ";
	cin>>hours;
	hours=hours<min_hours? min_hours:hours;//if hours are less than minmum hours then consider minimum hours
	//if hours are greater than minmum hours consider that hours
	int total_pay=	hours*pay_rate;
	cout<<"your total earningi today is: "<<total_pay<<endl;
	return 0;
}
	