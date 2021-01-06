#include <iostream>
using namespace std;
//Chapter 7 exercise 2

int sumFunc(int a, int b, int c);

int main() {
    int a, b, c;

    //Asks user for 3 integers
    cout << "Please enter an integer: ";
    cin >> a;
    cout << "Please enter another integer: ";
    cin >> b;
    cout << "Please enter another integer: ";
    cin >> c;

    //Prints sum, by calling upon function "sumFunc"
    cout << "The sum of these integers is " << sumFunc(a, b, c) << endl;


    cout << "\n\nTask 2 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Adds 3 ints and returns sum
int sumFunc(int a, int b, int c) {
    int sum = a + b + c;
    return sum;
}