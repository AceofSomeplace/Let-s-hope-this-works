#include <iostream>
using namespace std;
//Chapter 7 exercise 1

void hello();
void goodbye();

int main() {

    hello();
    goodbye();

    cout << "\n\nTask 1 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}


void hello() {
    cout << "Welcome to my program" << endl;
}


void goodbye() {
    cout << "End of program" << endl;
}

