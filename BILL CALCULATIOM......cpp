#include<iostream>
using namespace std;
int main()
{
	double mealcoast=800;	
	double tax=(10.75/100)*mealcoast;
	double mealcoastandtax=mealcoast+tax;
	double tip=(21.0/100)*mealcoastandtax;
	double total=mealcoast+tax+tip;
	
	
	cout<<"meal coast is "<<mealcoast<<" rupees."<<endl;
	cout<<"the sales tax is "<<tax<<" rupees."<<endl;
	cout<<"mealcost and tax is "<<mealcoastandtax<<" rupees "<<endl;
	cout<<"the tip is "<<tip<<" rupees. "<<endl;
	cout<<"the total bill is "<<total<<" rupees. "<<endl;
	return 0;	
	
}