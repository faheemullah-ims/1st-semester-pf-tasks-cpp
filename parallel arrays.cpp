#include<iostream>
using namespace std;
int main()
{
	string name[50];
	int rolno[50];
	float gpa[50];
	int ids[50];
	int count=0;
	bool input=true;
	while(input==true)
	{
		cout<<"enter name: ";
		cin>>name[count];
		cout<<"id: ";
		cin>>ids[count];
		cout<<"gpa; ";
		cin>>gpa[count];
		cout<<"if you want to enter other record press 1 else press 0: ";
		cin>>input;
		count++;
	}
	cout<<"----students added----"<<endl;
	cout<<"name"<<"\t"<<"ids"<<"\t"<<"gpa"<<endl;
	for(int i=0;i<count;i++)
	{
	cout<<name[i]<<"\t"<<ids[i]<<"\t"<<gpa[i]<<endl;
	}
	}