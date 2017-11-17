// Write a program to take an operation and two operands. Handle them
// operators are + - * / plus, minus, mul, div

#include <cstdlib>
#include <iostream>

#include "exercises.h"

using namespace std;

void exercise10() {

    bool finished = false;
    string action = "";
    double operand1 = 0;
    double operand2 = 0;


    cout << "*** Calcy ***" << endl;
    cout << "Enter calculations of the form operator operand operand." << endl;
    cout << "Valid operators are +, -, *, /, plus, minus, mul and div" << endl;
    cout << endl;
    cout << "Enter exit to exit the program" << endl;
    cout << endl;

    while (!finished) {
        cout << "> " << flush;
        cin >> action;
        if (action == "exit") {
            break;
        }

        cin >> operand1 >> operand2;

        if (action == "+" || action == "plus") {
            cout << "= " << (operand1 + operand2) << endl;
        } else if (action == "-" || action == "minus") {
            cout << "= " << (operand1 - operand2) << endl;
        } else if (action == "*" || action == "mul") {
            cout << "= " << (operand1 * operand2) << endl;
        } else if (action == "/" || action == "div") {
            cout << "= " << (operand1 / operand2) << endl;
        } else {
            cout << "ERROR: Unknown operator." << endl;
        }
    }
}
