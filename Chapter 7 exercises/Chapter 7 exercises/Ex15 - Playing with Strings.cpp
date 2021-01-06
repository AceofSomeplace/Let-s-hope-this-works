#include <iostream>
#include <String>
#include <algorithm>
using namespace std;
//Chapter 7 exercise 15

string fullNameFunc(string first, string sur);
string vowlReplaceFunc(string fullName);
string reverseFunc(string fullName);

int main() {
    string first, sur;

    //Asks user for their first and surname
    cout << "Please enter your first name: ";
    cin >> first;
    cout << "Please enter your surname name: ";
    cin >> sur;

    //Prints full name, by calling upon function "fullNameFunc"
    string fullName = fullNameFunc(first, sur);
    cout << "Full name: " << fullName << endl;

    //Prints full name with vowls replaced with "z", by calling upon function "VowlReplaceFunc"
    cout << "Full name(vowls replaced): " << vowlReplaceFunc(fullName) << endl;

    //Prints full name in reverse, by calling upon function "reverseFunc"
    cout << "Full name(reversed): " << reverseFunc(fullName) << endl;


    cout << "\n\nTask 15 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}


//Calculates the number entered to the exponent entered is, and returns the value
string fullNameFunc(string first, string sur) {
    string fullName = first + " " + sur;
    return fullName;
}

//Replaces the vowls of string entered, and returns the value
string vowlReplaceFunc(string fullName) {
    for (int i = 0; i < fullName.length(); i++) { //Finds and replaces vowls with 'z', by looping from 0 to length of "fullName" in incremember of 1
        if (fullName[i] == 'a' || fullName[i] == 'e' || fullName[i] == 'i' || fullName[i] == 'o' || fullName[i] == 'u') {
            fullName[i] = 'z';
        }
    }
    return fullName;
}

//Reverses the string entered, and returns the value
string reverseFunc(string fullName) {
    string reverse = fullName;
    int j = 0;
    for (int i = fullName.length() - 1; i >= 0; i--) { //Sets "reverse" string to reverse of fullname, by looping from length of "fullName" -1 to 0 in incremembers of -1
        reverse[j] = fullName[i];
        j++;
    }
    return reverse;
}