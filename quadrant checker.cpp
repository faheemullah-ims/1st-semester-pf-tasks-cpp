#include <iostream>
using namespace std;
int main(){
	float x;
	float y ;
	cout<<"Enter x ";
	cin>>x;
	cout<<"Enter y ";
	cin>>y;
	if (x > 0)
		if(y > 0)
				cout<<"1st quadrant"; //x>0 and y>0
		else
				cout<<"4th quadrant";  // x>0 and y<0
	else{ //x<0 
		if(y<0)
				cout<<"3rd quadrant"; // x<0 and y<0
		else //x<0 and y>0
				cout<<"2nd quadrant";
		}
	
		return 0;  	
}