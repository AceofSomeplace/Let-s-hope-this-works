#include <iostream>
using namespace std;
//Chapter 7 exercise 7

double max_two(int num, int num2);

int main() {
    double num;
    double num2;

    //Asks user 2 numbers
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter another number: ";
    cin >> num2;

    //Prints value of highest number, by calling upon function "max_two"
    cout << "The higher value is " << max_two(num, num2);

    cout << "\n\nTask 7 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Compares the 2 values, and returns the value of the highest one
double max_two(int num, int num2) {
    double higher;
    if (num >= num2) {
        higher = num;
    }
    else {
        higher = num2;
    }
    return higher;
}