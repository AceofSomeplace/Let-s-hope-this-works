#include <iostream>
using namespace std;
//Chapter 6 exercise 5

int main() {
    int heartRates[] = { 54, 60, 71, 59, 62, 63, 60, 58 };

    for (int i = 0; i < sizeof(heartRates) / sizeof(heartRates[0]); i++) {
        cout << heartRates[i] << endl;
    }

    cout << "\nTask 5 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}