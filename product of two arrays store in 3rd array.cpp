#include<iostream>
using namespace std;

int main()
{
    int a[5], b[5], c[5];

    // Input first array
    cout << "Enter 5 values for first array:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    // Input second array
    cout << "Enter 5 values for second array:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> b[i];
    }

    // Multiply arrays and store in third array
    for(int i = 0; i < 5; i++)
    {
        c[i] = a[i] * b[i];
    }

    // Display result
    cout << "Product stored in third array:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}
