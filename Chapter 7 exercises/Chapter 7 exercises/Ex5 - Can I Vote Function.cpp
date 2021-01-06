#include <iostream>
using namespace std;
//Chapter 7 exercise 5

string check(int age);

int main() {
    int age;

    //Asks user for age
    cout << "Please enter your age: ";
    cin >> age;

    //Prints either "xxx can vote." or "Too young to vote" by using function "check"
    cout << check(age) << endl;

    cout << "\n\nTask 5 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Checks age and returns appropriate message
string check(int age) {
    string message;
    if (age >= 18) { //If age is equal or greater than 18, ask for name
        string name;
        cout << "What is your name? ";
        cin >> name;
        message = name + " can vote.";
    }
    else { //Else, too young to vote
        message = "Too young to vote.";
    }
    return message;
}