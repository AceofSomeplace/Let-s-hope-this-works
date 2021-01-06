#include <iostream>
using namespace std;
//Chapter 6 exercise 7

int main() {
    //Asks user for 10 integers and adds them to array "userInp"
    int userInp[10];
    cout << "Please enter an integer: ";
    cin >> userInp[0];
    for (int i = 1; i <= 9; i++) { //Asign values to "userInp", by looping from 1 to 9 in increments of 1
        cout << "Please enter another integer: ";
        cin >> userInp[i];
    }

    //Prints numbers entered
    cout << "\nNumbers entered: ";
    for (int i = 0; i <= 9; i++) { //Print values pf "userInp", by looping from 0 to 9 in increments of 1
        cout << userInp[i] << ",";
    }

    //Calculates and prints the sum of an array
    int total = 0;
    for (int i = 0; i <= 9; i++) { //Calculate "userInp" total, by looping from 0 to 9 in increments of 1
        total = total + userInp[i];
    }
    cout << "\nTotal of values entered: " << total << endl;

    //Calculates and prints the average of an array
    float avrg = total / 10; //Calculate "userInp" average
    cout << "Average values entered: " << avrg << endl;

    //Finds and prints lowest value of an array
    int lowest = userInp[0]; //lowest must be given "userInp" value to compare with
    for (int i = 0; i <= 9; i++) { //Compare values, by looping from 0 to 9 in increments of 1
        if (userInp[i] < lowest) { //if "userInp" at index i is less than "lower", reasign "lowest" to "userInp" at index i
            lowest = userInp[i];
        }
    }
    cout << "Smallest value " << lowest << endl;

    //Finds and prints highest value of an array
    float highest = 0; //Inital value to compare with
    for (int i = 0; i <= 9; i++) { //Compare values, by looping from 0 to 9 in increments of 1
        if (userInp[i] > highest) { //if "userInp" at index i is greater than "highest", reasign "highest" to "userInp" at index i
            highest = userInp[i];
        }
    }
    cout << "Greatest value: " << highest << endl;

    //Sorts and prints the array in ascending order
    int acendArray[10];
    for (int i = 0; i <= 9; i++) { //Copying over "userInp" to "acendArray"
        acendArray[i] = userInp[i];
    }
    for (int i = 0; i <= 9; i++) { //Order "ascendArray", by looping from 0 to 9 in increments of 1
        for (int j = i + 1; j <= 9; j++) //Secondary comparable value j, looping from 0 to 9 in increments of 1
        {
            if (acendArray[i] > acendArray[j]) //If i is greater than j, swap them
            {
                int temp = acendArray[i];
                acendArray[i] = acendArray[j];
                acendArray[j] = temp;
            }
        }
    }
    cout << "Ascending order: ";
    for (int i = 0; i <= 9; i++) { //Print ascendArray, by looping from 0 to 9 in increments of 1
        cout << acendArray[i] << ",";
    }

    //Sorts and prints the array in descending order
    int decendArray[10];
    for (int i = 0; i <= 9; i++) { //Copying over "userInp" to "decendArray"
        decendArray[i] = userInp[i];
    }
    for (int i = 0; i <= 9; i++) { //Order "decendArray", by looping from 0 to 9 in increments of 1
        for (int j = i + 1; j <= 9; j++) //Secondary comparable value j, looping from 0 to 9 in increments of 1
        {
            if (decendArray[i] < decendArray[j]) //If i is less than j, swap them
            {
                int temp = decendArray[i];
                decendArray[i] = decendArray[j];
                decendArray[j] = temp;
            }
        }
    }
    cout << "\nDescending order: ";
    for (int i = 0; i <= 9; i++) { //Print decendArray, by looping from 0 to 9 in increments of 1
        cout << decendArray[i] << ",";
    }


    cout << "\nTask 7 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}