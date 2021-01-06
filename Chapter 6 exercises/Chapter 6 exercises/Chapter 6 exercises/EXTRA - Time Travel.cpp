#include <iostream>
using namespace std;
//Chapter 6 extra

int main() {
    string months[] = { "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    for (int i = 0; i <= (size(months) - 1); i++) { //Loop from 0 to length of "month" array in increments of 1
        cout << months[i] << endl; //Print "month" value at index i
    }
    cout << "\nTask has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}