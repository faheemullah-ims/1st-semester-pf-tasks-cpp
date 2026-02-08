#include<iostream>
using namespace std;
int main()
{
		//series 1:0 1 1 2 3 5 8 13 21
	/* int n;
	cout<<"how many numbers of fibunasi series do you want to print: ";
	cin>>n;
	int num1 = 0;      // First number of Fibonacci series
	int num2 = 1;      // Second number of Fibonacci series
	int next;          // This will store the next Fibonacci number

	cout << num1 << ",";   // Print the first number

	for(int i = 1; i <= n; i++)   // Loop will run 9 times to print next 9 numbers
	{
    next = num1 + num2;   // Add previous two numbers to get the next number
    num1 = num2;          // Move num2 into num1 (shift numbers forward)
    num2 = next;          // Move next into num2 (update second number)
    
    cout << num1 << ",";  // Print the current Fibonacci number
	
	
	// series 2:1 2 5 12 29  70 169
	int num1=1;
	int num2=2;
	int next;
	cout<<num1<<",";
	for(int i;i<=5;i++)
	{
		next=num1+(num2*2);//num 2 is multiplied by 2 and then added to num 1
		num1=num2;//num1 get the value of num 1
		num2=next;//num2 become next.next is temperory variable
		cout<<num1<<",";
	}
	//series 3: 5 10 15 20 25 20 15 10 5 10 15 20 25
    for (int i = 5; i <= 25; i += 5)
        cout << i << ",";

    for (int i = 20; i >= 5; i -= 5)
        cout << i << ",";

    for (int i = 10; i <= 25; i += 5)
        cout << i << ",";*/
        
    //series 4:5 10 15 20 20 15 10 5 10 15 20 20 
    for(int i=5;i<=20;i+=5)
    	cout<<i<<",";
    for(int i=20;i>=5;i-=5)
    	cout<<i<<",";
    for(int i=5;i<=20;i+=5)
    	cout<<i<<",";
    cout<<20;
	
	return 0;
}

