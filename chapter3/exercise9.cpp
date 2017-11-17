// Write a program that converts spelled out numbers to numbers but only for 0-4

#include <cstdlib>
#include <iostream>

using namespace std;

void exercise9() {

    cout << "Enter numbers as words (zero, one etc). Enter finished when bored.";

    string enteredNumber;

    do {
        cin >> enteredNumber;
        if (enteredNumber != "finished") {

            if (enteredNumber == "zero") {
                cout << "0" << endl;
            } else if (enteredNumber == "one") {
                cout << "1" << endl;
            } else if (enteredNumber == "two") {
                cout << "2" << endl;
            } else if (enteredNumber == "three") {
                cout << "3" << endl;
            } else if (enteredNumber == "four") {
                cout << "4" << endl;
            } else {
                cout << "Not a number I know" << endl;
            }
        }

    } while(enteredNumber != "finished");
}

