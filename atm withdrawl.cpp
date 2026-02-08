#include<iostream>
using namespace std;

int main() {
    int withdraw, balance;
    cout << "Enter your account balance: ";
    cin >> balance;
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdraw;

    if (withdraw <= 0) {
        cout << "Invalid amount.\n";
    }
    else if (withdraw > balance) {
        cout << "Insufficient balance.\n";
    }
    else if (withdraw % 100 != 0) {
        cout << "Withdrawal amount must be a multiple of 100.\n";
    }
    else {
        int pin;
        cout << "Enter your 4-digit PIN: ";
        cin >> pin;

        if (pin == 5178) {
            cout << "Transaction successful!\n";
            cout << "Remaining balance: " << balance - withdraw << endl;
        } 
        else {
            cout << "Incorrect PIN. Transaction cancelled.\n";
        }
    }

    return 0;
}
