#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0;

    if(num == 0) {  // special case for 0
        count = 1;
    } else {
        while(num != 0) {
            num = num / 10;  // remove last digit
            count++;         // increase digit count
        }
    }

    cout << "Number of digits = " << count << endl;
    return 0;
}
