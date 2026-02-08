#include<iostream>          // Include the input-output stream library
using namespace std;        // Use the standard namespace

int main()
{
    int arr[10];            // Declare an array of size 10 to store integers

    cout << "---enter 10 integers---\n";   // Prompt the user to enter 10 integers

    // Input loop: read 10 integers from the user
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];      // Store each entered integer into the array
    }

    // Initialize max and min values with the first element of the array
    int maxv = arr[0];      
    int minv = arr[0];      

    // Initialize indices for max and min values
    int maxi = arr[0];           
    int mini = 0;           

    // Loop through the array to find max and min values and their indices
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] > maxv)   // If current element is greater than current max
        {
            maxv = arr[i];  // Update max value
            maxi = i;       // Update index of max value
        }
        if(arr[i] < minv)   // If current element is smaller than current min
        {
            minv = arr[i];  // Update min value
            mini = i;       // Update index of min value
        }
    }

    // Output the maximum value and its position (index + 1 for human-friendly position)
    cout << "maximum value= " << maxv << " at index " << maxi + 1 << endl;

    // Output the minimum value and its position (index + 1 for human-friendly position)
    cout << "minimum value= " << minv << " at index " << mini + 1 << endl; 
}

