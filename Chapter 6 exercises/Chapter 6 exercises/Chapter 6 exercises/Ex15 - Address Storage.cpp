#include <iostream>
using namespace std;
//Chapter 6 exercise 15

int main() {
    string addresses[3][2];
    string name, address;

    //Assigns values to array "addresses" with name being at collum index 0, and address being at collum index 1
    for (int i = 0; i < 3; i++) {
        cout << "Please enter a name: ";
        cin >> addresses[i][0];
        cout << "Please enter address: ";
        cin >> addresses[i][1];
    }

    //Prints values of array "addresses"
    for (int i = 0; i < 3; i++) {
        cout << addresses[i][0] << " is at address " << addresses[i][1] << endl;
    }


    cout << "\n\nTask 15 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}