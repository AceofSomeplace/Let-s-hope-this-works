#include <iostream>
using namespace std;
//Chapter 6 exercise 11

int main() {
    int intArray[] = { 1, 2, 3, 4, 5, 6 };
    int userNum;
    int index;

    //Prints values of array "intArray"
    cout << "Values of array: ";
    for (int i = 0; i < 6; i++) { //Print values of "intArray", by looping from 0 to 6 in increments of 1
        cout << intArray[i] << ", ";
    }

    //Asks user for index and an integer
    cout << "\nPlease enter an index: ";
    cin >> index;
    cout << "\nPlease enter the integer you want to replace this with: ";
    cin >> userNum;

    //Shifts numbers from entered index up, and replaces value of entered index value with "userNum"
    int i;
    for (i = 4; i >= index; i--) { //Shifts values of "intArray" to the right, until reaching "index" value, by looping from 4 to "index" in increments of -1
        intArray[i + 1] = intArray[i];
    }
    intArray[index] = userNum; //Assignes "intArray" at "index" position to "userNum"

    //Prints values of array "intArray"
    cout << "Values of array: ";
    for (int i = 0; i <= 5; i++) { //Print values of "intArray", by looping from 0 to 6 in increments of 1
        cout << intArray[i] << ", ";
    }

    cout << "\n\nTask 11 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}