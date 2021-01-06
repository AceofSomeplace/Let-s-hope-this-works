#include <iostream>
using namespace std;
//Chapter 7 exercise 3

double avgFunc(double a, double b, double c);

int main() {
    double a, b, c;

    //Asks user for 3 numbers
    cout << "Please enter a number: ";
    cin >> a;
    cout << "Please enter another numbers: ";
    cin >> b;
    cout << "Please enter another numbers: ";
    cin >> c;

    //Prints average, by calling upon function "avgFunc"
    cout << "The average of these numbers is " << avgFunc(a, b, c) << endl;

    cout << "\n\nTask 3 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Calculates average of 3 ints and returns value
double avgFunc(double a, double b, double c) {
    double avg = (a + b + c) / 3;
    return avg;
}