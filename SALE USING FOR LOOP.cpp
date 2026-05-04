#include<iostream>
using namespace std;

int main()
{
    double days;                 // Number of days (should be int, but you're using double)
    cout << "enter the number of days: ";
    cin >> days;

    double total = 0;            // Total sales variable (must be initialized to 0)

    // Loop runs from day 1 to the number of days entered
    for (int count = 1; count <= days; count++)
    {
        double sales;            // Sales amount for the current day
        cout << "enter the sales for day " << count << ": ";
        cin >> sales;

        total = total + sales;   // Add today's sales to the total
    }

    // Display total sales after loop ends
    cout << "your total sales for " << days << " days is " << total << endl;

    return 0;                    // End of program
}
