#include <iostream>
#include <string>
using namespace std;
//Chapter 7 exercise 4

string greetings(string name, string greeting);

int main() {
    string name, greeting;

    //Asks user for a name and greeting
    cout << "Please enter a name: ";
    cin >> name;
    cout << "Please enter a greeting: ";
    cin >> greeting;


    //Prints greeting with name, by calling upon function "greetings"
    cout << greetings(name, greeting) << endl;

    cout << "\n\nTask 4 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}

//Concatenates a greeting with name
string greetings(string name, string greeting) {
    string greetings = greeting + ", " + name + "!";
    return greetings;
}