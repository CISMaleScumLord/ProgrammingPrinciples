//  Write a program to test a number for evenness

#include <cstdlib>
#include <iostream>

using namespace std;

void exercise8() {
    int num;

    cout << "Enter a number > " << flush;
    cin >> num;

    cout << endl << "Using modulus" << endl;
    if (num % 2 == 0) {
        cout << "The number " << num << " is even" << endl;
    } else {
        cout << "The number " << num << " is odd" << endl;
    }

    //  Bonus
    cout << endl << "Using bitwise" << endl;
    if (num & 1) {
        cout << "The number " << num << " is odd" << endl;
    } else {
        cout << "The number " << num << " is even" << endl;
    }
}

