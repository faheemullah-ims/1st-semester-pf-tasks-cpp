#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter your marks ";
	cin>>marks;
	if (marks>50)
	{
		if(marks>60)
		{
			if(marks>70)
			{
				if (marks>80)
				{
					if (marks>90)
					{
						cout<<"A+";												
					}
					else
					cout<<"A";
				}
				else
				cout<<"B+";
			}
			else
			cout<<"B";
		}
		else
		cout<<"C+";
	}
	else
	cout<<"12000 jama ka";
	return 0;
}
				
				
			
		
	
	
	
	
	
	
	
	
	
