// Input 3 numbers and output then in ascending order, comma separated.

#include <cstdlib>
#include <iostream>

using namespace std;

void exercise6() {

    int num1, num2, num3 = 0;
    int smallest = 0, middle = 0, biggest = 0;

    cout << "Enter three numbers > " << flush;
    cin >> num1 >> num2 >> num3;

    cout << num1 << " " << num2 << " " << num3 << endl;

    //  Identify and print smallest
    smallest = num1;

    if (num2 <= smallest) {
        smallest = num2;
    }

    if (num3 <= smallest) {
        smallest = num3;
    }

    cout << smallest << ", ";

    //  Identify and print middle
    middle = num1;

    if (num2 > smallest && num2 < middle) {
        middle = num2;
    }

    if (num3 > smallest && num3 < middle) {
        middle = num3;
    }

    cout << middle << ", ";

    //  Identify and print biggest
    biggest = num1;

    if (num2 > middle) {
        biggest = num2;
    }

    if (num3 > middle) {
        biggest = num3;
    }

    cout << biggest << endl;
}

