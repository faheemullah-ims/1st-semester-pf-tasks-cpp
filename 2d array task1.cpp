#include<iostream>
using namespace std;

int main()
{
    // Declare a 2D array with 6 rows and 6 columns, initialized to 0
    int arr[6][6] = {0};
    
    // INPUT: Nested loop to take input from user
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cout << "Enter value for i= " << i << " j= " << j << " : ";
            cin >> arr[i][j];
        }
    }
    
    // OUTPUT: Nested loop to display the array
    cout << "\nYour 2D Array:\n";
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cout << "|"<<arr[i][j] << "| ";
        }
        cout << endl;  // Move to next line after each row
    }
    
    return 0;
}
