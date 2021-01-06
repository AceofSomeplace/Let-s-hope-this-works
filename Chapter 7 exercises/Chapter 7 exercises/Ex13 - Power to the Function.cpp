#include <iostream>
using namespace std;
//Chapter 7 exercise 13

int expotot(int num, int expo);

int main() {
    int num, expo;

    //Asks user for a number and an exponent
    cout << "Please enter a number: ";
    cin >> num;
    cout << "Please enter an exponent: ";
    cin >> expo;

    //Prints the number to the exponent, by calling upon function "expotot"
    cout << num << " to the power of " << expo << " is " << expotot(num, expo);


    cout << "\n\nTask 13 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Calculates the number entered to the exponent entered is, and returns the value
int expotot(int num, int expo) {
    int total = num;
    for (int i = 1; i < expo; i++) { //multiplies total by num to get total, by looping from 1 to expo in increments of 1
        total = total * num;
    }
    return total;
}