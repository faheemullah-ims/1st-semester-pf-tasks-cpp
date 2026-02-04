#include<iostream>
using namespace std;
int main()
{
	double a,b;//double will also give answer in points
	int  choice;//choice must be  taken in ints or chars
	cout<<"enter 1st  number: ";
	cin>>a;
	cout<<"enter second number: ";
	cin>>b;
	cout<<"1 for addition\n";
	cout<<"2 for subtraction\n";
	cout<<"3 for division\n";
	cout<<"4 for multiplication\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"addition= "<<a+b<<endl;
		break;
		case 2:
			cout<<"subtraction= "<<a+b<<endl;
			break;
			case 3:
				cout<<"division= "<<a/b;
				break;
				case 4:
					cout<<"multiplication= "<<a*b<<endl;
					break;
					default:
						cout<<"invalid input!"<<endl;
						
	}
	
	
}