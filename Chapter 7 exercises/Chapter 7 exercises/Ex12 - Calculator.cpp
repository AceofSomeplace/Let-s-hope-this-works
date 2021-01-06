#include <iostream>
using namespace std;
//Chapter 7 exercise 12

void add(double a, double b);
void sub(double a, double b);
void mul(double a, double b);
void div(double a, double b);

int main() {
    double a, b;
    char oppr;
    bool again = true;
    char userInp;

    //Asks user for 2 doubleegers
    while (again == true) {
        cout << "Please enter a number: ";
        cin >> a;
        cout << "Enter operation ('+' add, '-'substract, 'x' multiply, '/' divide) ";
        cin >> oppr;
        cout << "Please enter another number: ";
        cin >> b;
        if (oppr == '+') {
            add(a, b);
        }
        else if (oppr == '-') {
            sub(a, b);
        }
        else if (oppr == 'x') {
            mul(a, b);
        }
        else if (oppr == '/') {
            div(a, b);
        }
        cout << "Would you like to do another caluclation? y/n: ";
        cin >> userInp;
        if (userInp == 'n') { //If user enters 'n', set "again" to false
            again = false;
        }

        cout << endl;
    }

    cout << "\n\nTask 12 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}



//Adds 2 numbers and prints total
void add(double a, double b) {
    double total = a + b;
    cout << a << " + " << b << " = " << total << endl;
}

//Subtracts 2 numbers and prints total
void sub(double a, double b) {
    double total = a - b;
    cout << a << " - " << b << " = " << total << endl;
}

//Multiplies 2 numbers and prints total
void mul(double a, double b) {
    double total = a * b;
    cout << a << " x " << b << " = " << total << endl;
}

//Divides 2 numbers and prints total
void div(double a, double b) {
    double total = a / b;
    cout << a << " / " << b << " = " << total << endl;
}