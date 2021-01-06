#include <iostream>
using namespace std;
//Chapter 6 exercise 14
//Coulden't figure out how to do it with the sizeof() function though...

int main() {
    double table[5][3];

    //Assigns values to array "table" and adds value to "total". Then prints "total"/5 to get the collum average.
    for (int i = 0; i < 3; i++) { //Loops through the collums, by looping from 0 to 3 in increments of 1
        double total = 0;
        for (int j = 0; j < 5; j++) { //Loops through the rows and adds index value to "total", by looping from 0 to 5 in increments of 1
            table[i][j] = (i + 1) * (j + 2);
            total += table[i][j];
        }
        cout << "The average of collum " << (i + 1) << " is " << total / 5 << endl;
    }


    cout << "\n\nTask 14 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}