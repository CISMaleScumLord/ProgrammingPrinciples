// Input 3 numbers and output then in ascending order, comma separated.

#include <cstdlib>
#include <iostream>

using namespace std;

void exercise7() {

    string string1, string2, string3 ;
    string smallest = "", middle = "", biggest = "";

    cout << "Enter three strings > " << flush;
    cin >> string1 >> string2 >> string3;

    //  Identify and print smallest
    smallest = string1;

    if (string2 <= smallest) {
        smallest = string2;
    }

    if (string3 <= smallest) {
        smallest = string3;
    }

    cout << smallest << ", ";

    //  Identify and print middle
    middle = string1;

    if (string2 > smallest && string2 < middle) {
        middle = string2;
    }

    if (string3 > smallest && string3 < middle) {
        middle = string3;
    }

    cout << middle << ", ";

    //  Identify and print biggest
    biggest = string1;

    if (string2 > middle) {
        biggest = string2;
    }

    if (string3 > middle) {
        biggest = string3;
    }

    cout << biggest << endl;
}

