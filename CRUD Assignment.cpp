#include<iostream>
using namespace std;

int main()

{
	const int MAX = 50;
	string name[MAX];
	float CGPA[MAX];
	int regNo[MAX];
	int count = 0, choice;
	
	do 
	{
		cout<<"\n------ Students CRUD menu ------\n";
		cout<<"Press 1 to Add students to the list: ";
		cout<<"\nPress 2 to Display the students list... ";
		cout<<"\nPress 3 to Update students CGPA...";
		cout<<"\nPress 4 to Delete student from the list...";
		cout<<"\nEnter your choice: ";
		cin>> choice;
		
		if(choice == 1)
		{
			if(count >= MAX)
			{
				cout<<"\nSorry, the list is Full already. You can not add anymore students....";
			}
			else
			{
				cout<<"\nEnter student's Registration Number: ";
				cin>>regNo[count];
				
				cout<<"Enter student's name: ";
				cin>>name[count];
				
				cout<<"Enter students CGPA: ";
				cin>>CGPA[count];
				
				count++;
				cout<<"Student added successfully...\n";
			}
		}
			
		else if(choice == 2)
		{	
			if(count == 0)
			{
				cout<<"No data found...";
			}
			else
			{
				cout<<"\nHere's the students full list";
				
				for(int i = 0; i < count; i++)
				{
					cout<<"\nRegistration No: "<<regNo[i];
					cout<<"		Name: "<<name[i];
					cout<<"		CGPA: "<<CGPA[i];
				}
				cout<<"\n ";
			}	
		}
		
		else if(choice == 3)
		{
			if(count == 0)
			{
				cout<<"\nNo students to update...";
			}
			else
			{
				int index;
				cout<<"\nEnter the student number you want to update from(1 to "<<count<<"): ";
				cin>>index;
				
				if(index > count)
				{
					cout<<"Invalid Entry...";
				}
				else
				{
					cout<<"Enter new CGPA: ";
					cin>>CGPA[index - 1];
					cout<<"CGPA updated successfully...";
				}
				cout<<"\n";
			}
		}
		
		else if(choice == 4)
		{
			if(count == 0)
			{
				cout<<"\nNo students to delete...";
			}
			else
			{
				int index;
				cout<<"\nEnter the student number you want to update from(1 to "<<count<<"): ";
				cin>>index;
			
				if(index > count)
				{
					cout<<"Invalid Entry...";
				}
				else
				{					
					for(int i = index - 1;i < count - 1; i++)
					{
						regNo[i] = regNo[i + 1];
						name[i] = name[i + 1];
						CGPA[i] = CGPA[i + 1];
					}
					count--;
					cout<<"\nStudent deleted successfully...";
				}
			}
		}
		
		else if(choice == 5)
		{
			cout<<"\nExiting program Byeeeeee.....";
		}
		else
		{
			cout<<"\nInvalid choice Entry...";
		}
	}
	while(choice != 5);
}
	
