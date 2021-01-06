#include <iostream>
using namespace std;
//Chapter 7 exercise 6

bool compare(string str1, string str2);

int main() {
    string str1;
    string str2;

    //Asks user 2 string values
    cout << "Enter a string value: ";
    cin >> str1;
    cout << "Enter another string value: ";
    cin >> str2;


    //Prints if string are equal or not, by calling upon function "compare"
    if (compare(str1, str2) == true) { //If function "compare" returned true
        cout << "These strings are the same.";
    }
    else { //If function "compare" returned false
        cout << "These strings are not the same.";
    }

    cout << "\n\nTask 6 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Compares the 2 entered strings and returns a boolean
bool compare(string str1, string str2) {
    bool equal;
    if (str1 == str2) { //If string 1 and string 2 are equal, set boolean to true
        equal = true;
    }
    else { //Else, set boolean to false
        equal = false;
    }
    return equal;
}