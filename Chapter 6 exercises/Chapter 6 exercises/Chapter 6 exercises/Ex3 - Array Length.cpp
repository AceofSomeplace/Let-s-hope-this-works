#include <iostream>
#include <string>
using namespace std;
//Chapter 6 exercise 3

int main() {
    int var1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    string var2[] = { "Hello", "Bye" };
    char var3[] = { 'A', 'B', 'C' };
    cout << sizeof(var1) / sizeof(var1[0]) << endl;
    cout << sizeof(var2) / sizeof(var2[0]) << endl;
    cout << sizeof(var3) / sizeof(var3[0]) << endl;

    cout << "\nTask 3 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}