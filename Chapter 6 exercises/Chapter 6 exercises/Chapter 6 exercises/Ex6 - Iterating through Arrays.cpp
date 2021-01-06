#include <iostream>
using namespace std;
//Chapter 6 exercise 6

int main() {
    char alpha[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', };
    for (int i = 0; i <= 25; i++) { //Print alphabet, by looping from 0 to 25 in increments of 1
        cout << alpha[i] << endl;
    }
    cout << endl;

    //Prints second half of array
    for (int i = 13; i <= 25; i++) { //Print second half of alphabet, by looping from 13 to 25 in increments of 1
        cout << alpha[i] << endl;
    }
    cout << endl;

    //Prints the reverse order of an array
    int revrs[] = { 1, 3, 5, 7, 9 };
    cout << "Reversed value: ";
    for (int i = 4; i >= 0; i--) { //Print reverse of array, by looping from 4 to 0 in increments of -1
        cout << revrs[i];
    }
    cout << endl << endl;

    //Calculates and prints the average of an array
    int avrg[] = { 10, 15, 25, 35, 50, 75 };
    float total = 0;
    for (int i = 0; i <= 5; i++) { //Calculate array total, by Looping from 0 to 5 in increments of 1
        total = total + avrg[i];
    }
    total = total / 6; //Calculate average from array total
    cout << "Average value: " << total << endl << endl;

    //Calculates and prints the average of an array
    float temprt[] = { 7.5, 6.3, 10.0, 6.5, 9.1, 11.5, 10.3 };
    total = 0;
    for (int i = 0; i <= 6; i++) { //Calculate array total, by Looping from 0 to 6 in increments of 1
        total = total + temprt[i];
    }
    total = total / 7; //Calculate average from array total
    cout << "Average temperature: " << total << endl << endl;

    //Finds and prints highest value of an array
    float nums[] = { 6.5, 1.3, 10.9, 7.5, 8.1, 9.9, 9.3 };
    float highest = 0; //Inital value to compare with
    for (int i = 0; i <= 6; i++) { //Compare values, by Looping from 0 to 6 in increments of 1
        if (nums[i] > highest) { //if "nums" at index i is greater than "highest", reasign "highest" to "nums" at index i
            highest = nums[i];
        }
    }
    cout << "Highest value " << highest << endl << endl;

    //Finds and prints lowest value of an array
    int numsv2[] = { 10, 88, 4, 21, 345, 99, 17 };
    int lowest = numsv2[0]; //lowest must be given numsv2 value to compare with
    for (int i = 0; i <= 6; i++) { //Compare values, by Looping from 0 to 6 in increments of 1
        if (nums[i] < lowest) { //if "nums" at index i is less than "lower", reasign "lowest" to "nums" at index i
            lowest = nums[i];
        }
    }
    cout << "Lowest value " << lowest << endl << endl;

    //Prints all odd integers of array
    int toHundo[100];
    for (int i = 0; i <= 99; i++) { //Assign values to "toHundo", by Looping from 0 to 99 in increments of 1
        toHundo[i] = i + 1;
    }
    for (int i = 0; i < 99; i += 2) { //Print "toHundo" values, by Looping from 0 to 99 in increments of 2
        cout << toHundo[i] << endl;
    }

    cout << "\nTask 6 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}