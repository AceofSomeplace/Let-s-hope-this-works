#include <iostream>
#include <string>
using namespace std;
//Chapter 6 exercise 1

int main() {
    //Part 1
    char charVar[26];
    int intVar[10];
    string stringVar[4];
    float floatVar[18];

    //Part 2
    int intVar2[8];
    for (int i = 0; i < sizeof(intVar2) / sizeof(intVar2[0]); i++) { //Loop from 0 to (size(intVar2) - 1) in increments of 1
        intVar2[i] = i + 1; //Assign to index i, i + 1
    }

    string stringVar2[2];
    stringVar2[0] = "Hello";
    stringVar2[1] = "Bye";

    char charVar2[3];
    charVar2[0] = 'A';
    charVar2[1] = 'B';
    charVar2[2] = 'C';

    float floatVar2[5];
    float j = 0.0;
    for (int i = 0; i < sizeof(floatVar2) / sizeof(floatVar2[0]); i++) { //Loop from 0 to (size(floatVar2) - 1) in increments of 1
        floatVar2[i] = j + 1; //Assign to index i, j + 1
        j++;
    }

    int intVar3[6];
    int k = 10;
    for (int i = 0; i < sizeof(intVar3) / sizeof(intVar3[0]); i++) { //Loop from 0 to (size(intVar3) - 1) in increments of 1
        intVar3[i] = k; //Assign to index i, k
        k = k + 10;
    }

    //Part 3
    string stringVar3[] = { "","a","aa","aaa" };
    int intVar4[] = { 1,10,100,1000,10000 };
    bool boolVar[] = { true, false, false, true };
    float floatVar3[] = { 5.6, 1.8, 4.34, 7.65 };

    cout << "\nTask 1 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}