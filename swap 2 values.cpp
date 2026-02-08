#include<iostream>
using namespace std;
int main()
{
	cout<<"in this program the values of a and b are exchanged"<<endl;
 int a=5;
 int b=7;
 int temp=a;
a=b;
 b=temp;
 cout<<"change in position of a= "<<a<<endl;
 cout<<"change in position of b= "<<b<<endl;
 return 0;
}