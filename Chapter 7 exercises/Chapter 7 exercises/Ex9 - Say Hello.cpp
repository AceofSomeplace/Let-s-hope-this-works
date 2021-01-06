#include <iostream>
using namespace std;
//Chapter 7 exercise 9

void say_hello(int a);

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    say_hello(a);

    cout << "\n\nTask 9 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Prints "Hello" for number that was entered
void say_hello(int a) {
    for (int i = 0; i < a; i++) { //Prints "Hello", by looping from 0 to "a" in increments of 1
        cout << "Hello" << endl;
    }
}
