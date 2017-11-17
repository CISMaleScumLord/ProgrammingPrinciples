//  Write a program that converts from miles to kilometers.

#include <iostream>

using namespace std;

void exercise2() {

    int miles;
    double kilometers;

    cout << "Miles to convert >" << flush;
    cin >> miles;

    kilometers = miles * 1.6;  

    cout << miles << " miles is " << kilometers << " kilometers." << endl;
}

