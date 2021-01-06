#include <iostream>
using namespace std;
//Chapter 6 exercise 10

int main() {
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int b[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    int c[20];

    //Prints values of array "a"
    cout << "Values of array a: ";
    for (int i = 0; i < 10; i++) { //Print values of "a", by looping from 0 to 10 in increments of 1
        cout << a[i] << ", ";
    }

    //Prints values of array "b"
    cout << "\nValues of array b: ";
    for (int i = 0; i < 10; i++) { //Print values of "b", by looping from 0 to 10 in increments of 1
        cout << b[i] << ", ";
    }

    //Assigns values to array "c"
    for (int i = 0; i < 10; i++) { //Assignes values to "c", by looping from 0 to 10 in increments of 1
        c[i] = a[i];
    }
    for (int i = 0; i < 10; i++) { //Assignes values to "c", by looping from 0 to 10 in increments of 1
        c[i + 10] = b[i];
    }

    //Prints values of array "c"
    cout << "\nValues of array b: ";
    for (int i = 0; i < 20; i++) { //Print values of "c", by looping from 0 to 10 in increments of 1
        cout << c[i] << ", ";
    }

    cout << "\n\nTask 10 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}