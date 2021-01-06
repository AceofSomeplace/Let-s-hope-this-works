#include <iostream>
using namespace std;
//Chapter 6 exercise 9

int main() {
    int userInp[10];
    int toFind;
    int count = 0;

    //Asks user for 10 integers and adds them to array "userInp"
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

    //Asking user for item to locate, scans userInp for item
    cout << "Please enter an integer to find: ";
    cin >> toFind;
    for (int i = 0; i < 10; i++) { //Searches "userInp" for instance of "toFind", by looping from 0 to 10 in increments of 1
        if (userInp[i] == toFind) { //If "userInp" at index i equals "toFind", increase "found" by 1
            count++;
        }
    }

    //Prints instances of item in array
    cout << toFind << " is in the array " << count << " times." << endl;


    cout << "\nTask 9 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}