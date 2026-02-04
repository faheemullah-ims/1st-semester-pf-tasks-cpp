#include<iostream>
using namespace std;
int main()
{
	// centeegrate to farenheit to centegrate
	int temp_in_c=30;
	int conversiontof;
	conversiontof=(temp_in_c*1.8)+32;
	cout<<"temp in f= "<<conversiontof<<endl;
	float conversiontoc=(conversiontof-32)*0.5555555555555556;
	cout<<"temp in c= "<<conversiontoc<<endl;
	return 0;
	
}