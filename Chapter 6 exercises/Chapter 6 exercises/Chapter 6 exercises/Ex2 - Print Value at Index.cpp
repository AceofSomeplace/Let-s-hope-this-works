#include <iostream>
#include <string>
using namespace std;
//Chapter 6 exercise 2

int main() {
    string vehicles[] = { "Car", "Train", "Tractor", "Skiff", "Tank" };
    cout << vehicles[3] << endl; //Prints "Skiff"
    cout << vehicles[0] << endl; //Prints "Car"
    cout << vehicles[2] << " " << vehicles[4] << endl; //Prints "Tractor Tank"
    cout << vehicles[0] << " " << vehicles[3] << " " << vehicles[1] << endl; //Prints "Tractor Tank"

    cout << "\nTask 2 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}