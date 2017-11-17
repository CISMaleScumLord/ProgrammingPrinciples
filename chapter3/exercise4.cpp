// Write a program that asks for two int values and outputs various stats

#include <iostream>

using namespace std;

void exercise4() {

    int val1, val2;

    cout << "Enter two integer values > " << flush;
    cin >> val1 >> val2;

    if (val1 > val2) {
        cout << "It turns out that " << val1 << " is more than " << val2 << endl;
    } else if (val1 < val2) {
        cout << "It turns out that " << val1 << " is less than " << val2 << endl;
    } else {
        cout << "It turns out that " << val1 << " is equal to " << val2 << ", which is nice." << endl;
    }

    cout << "The sum of the numbers is: " << (val1 + val2) << endl;
    cout << "The difference between then is " << (val1 - val2) << endl;
    cout << "The product of the numbers is: " << (val1 * val2) << endl;

    //  These result in 0, probably due to integer math
    cout << "The ratio of val1 is: " << (val1 / (val1 + val2)) * 100 << endl;
    cout << "The ratio of val2 is: " << (val2 / (val1 + val2)) * 100 << endl;
}
