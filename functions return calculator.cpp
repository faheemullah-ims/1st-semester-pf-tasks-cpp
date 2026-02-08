#include<iostream>
using namespace std;
 int sum(int a,int b){
 	int output=a+b;
 	return output;
 }
 int subtraction(int a,int b){
 	int output=a-b;
 	return output;
 	
 }
 int product(int a,int b){
 	int output=a*b;
 	return output;
 
 }
 int division(int a,int b){
 	int output=a/b;
 	return output;
 	
 }
 int main()
 {
 	int a,b;
 	cout<<"enter first number :";
 	cin>>a;
 	cout<<"enter second number :";
 	cin>>b;
 	cout<<"sum= "<<sum(a,b)<<endl;
 	cout<<"difference= "<<subtraction(a,b)<<endl;
 	cout<<"product= "<<product(a,b)<<endl;
 	cout<<"division= "<<division(a,b)<<endl;
 }