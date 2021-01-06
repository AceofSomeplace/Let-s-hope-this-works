#include <iostream>
using namespace std;
//Chapter 6 exercise 12
//Coulden't figure out how to do it with the sizeof() function though...

int main() {
    int table[5][3] = { { 2, 4, 6 }, { 3, 6, 9 }, { 4, 8 , 12 }, { 5, 10, 15 }, { 6, 12, 18 } };

    //Prints values of array "table"
    for (int i = 0; i < 3; i++) { //Loops through the collums, by looping from 0 to 3 in increments of 1
        for (int j = 0; j < 5; j++) { //Loops through the rows and adds index value to "total", by looping from 0 to 5 in increments of 1
            cout << table[i][j] << ", ";
        }
    }

    cout << "\n\nTask 12 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}