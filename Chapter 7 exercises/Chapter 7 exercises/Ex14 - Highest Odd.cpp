#include <iostream>
using namespace std;
//Chapter 7 exercise 14

int highestInt(int intArray[7]);

int main() {
    int intArray[] = { 15, 2, 6, 11, 12, 13, 9 };

    //Prints the number to the exponent, by calling upon function "expotot"
    cout << "The highest value of array ";
    for (int i = 0; i < 6; i++) { //Print intArray, by looping from 0 to 6 in incremembers of 1
        cout << intArray[i] << ", ";
    }
    cout << " that is also odd is " << highestInt(intArray) << endl;


    cout << "\n\nTask 14 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Finds and returns highest value of an array that is also an odd value
int highestInt(int intArray[7]) {
    int highest = intArray[0]; //Inital value to compare with
    for (int i = 0; i <= 6; i++) { //Compare values, by Looping from 0 to 6 in increments of 1
        if (intArray[i] > highest && intArray[i] / 2 % 1) { //if "intArray" at index i is greater than "highest" and if "intArray" at index i is not divisible by 2, reasign "highest" to "intArray" at index i
            highest = intArray[i];
        }
    }
    return highest;
}