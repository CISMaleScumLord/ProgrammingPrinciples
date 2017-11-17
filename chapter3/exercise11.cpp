// write a program that asks how many coins can calculates the pennies
// anglicised.

#include <iostream>

using namespace std;

void exercise11() {
    cout << "***   P E N N Y   T H I N G   ***" << endl;
    cout << "***     using real money      ***" << endl << endl;
    
    //  Gather information and calculate
    int how_many = 0;
    int two_pence = 0;
    int five_pence = 0;
    int ten_pence = 0;
    int twenty_pence = 0;
    int fifty_pence = 0;
    int one_pound = 0;
    int two_pound = 0;
    
    cout << "How many pennies > " << flush;
    cin >> how_many;
    
    two_pound = how_many / 200;
    how_many %= 200;
    
    one_pound = how_many / 100;
    how_many %= 100;
    
    fifty_pence = how_many / 50;
    how_many %= 50;
    
    twenty_pence = how_many / 20;
    how_many %= 20;
    
    ten_pence = how_many / 10;
    how_many %= 10;
    
    five_pence = how_many / 5;
    how_many %= 5;
    
    two_pence = how_many / 2;
    how_many %= 2;
    
    cout << "You have " << how_many << " 1p coins" << endl;
    cout << "You have " << two_pence << " 2p coins" << endl;
    cout << "You have " << five_pence << " 5p coins" << endl;
    cout << "You have " << ten_pence << " 10p coins" << endl;
    cout << "You have " << twenty_pence << " 20p coins" << endl;
    cout << "You have " << fifty_pence << " 50p coins" << endl;
    cout << "You have " << one_pound << " £1 coins" << endl;
    cout << "You have " << two_pound << " £2 coins" << endl;

}