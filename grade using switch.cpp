#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter pf marks : ";
	cin>>a;
	cout<<"enter physics marks :";
	cin>>b;
	cout<<"enter ict marks: ";
	cin>>c;
	int average;
	average=(a+b+c)/3;
	cout<<"your average is: "<<average<<endl;
	if(a<40||b<40||c<40)
	{
		cout<<"failed ";
	}
	else if(average>=90)
	{
		cout<<"A+";
	 } else 
	 if(average>=80)
	 {
	 	cout<<"A";
	 }else 
	 if(average>=70)
	 {
	 	cout<<"B";
	 }else
	 if(average>=60)
	 {
	 	cout<<"C";
	 }else 
	 cout<<"FAil";
}