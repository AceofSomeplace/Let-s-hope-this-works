#include <iostream>
using namespace std;
//Chapter 7 exercise 10

double prodFunc(double a, double b);

int main() {
    double a, b;

    //Asks user for 2 doubleegers
    cout << "Please enter a number: ";
    cin >> a;
    cout << "Please enter another number: ";
    cin >> b;

    //Prdoubles product, by calling upon function "prodFunc"
    cout << "The product of these numbers is " << prodFunc(a, b) << endl;


    cout << "\n\nTask 10 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Multiplies 2 doubles and returns product
double prodFunc(double a, double b) {
    double prod = a * b;
    return prod;
}