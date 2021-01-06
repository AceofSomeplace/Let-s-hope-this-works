#include <iostream>
using namespace std;
//Chapter 6 exercise 8

int main() {
    /*Adapted for if data base changes, can accomodate printing multiple indexes in instances where the same value is stored multiple times
    Not adapted for different data base sizes though.*/
    string database[] = { "Lee", "John", "Sam", "Coral", "Ron", "Jake", };
    string userInput;
    int index[6] = { -1, -1, -1, -1, -1, -1, }; //For instances where search item is found(-1 = empty index)
    int found = 0; //Acts a boolean for item found, as well as a counter for if multiple instances are found

    //Printing contence of database
    cout << "database contains: " << endl;
    for (int i = 0; i < sizeof(database) / sizeof(database[0]); i++) { //Print "database", by looping from 0 to size of "database" in increments of 1
        cout << database[i] << ", ";
    }

    //Asking user for item to locate, scans databse for item
    cout << "\nEnter the item you want to locate: ";
    cin >> userInput;
    for (int i = 0; i < sizeof(database) / sizeof(database[0]); i++) { //Searches "database" for instance of "userInput", by looping from 0 to size of "database" in increments of 1
        if (database[i] == userInput) { //If "database" at index i equals "userInput", increase "found" by 1 and assign index to "index"
            found++;
            index[found] = i; //Assigns index value of instance in "database" to "index", to the next available space according to "found" value
        }
    }

    //Printing index of item, or no item found
    if (found >= 1) { //If found is equal or more than 1, print item has been found
        cout << "Item found at index: ";
        for (int i = 0; i < sizeof(database) / sizeof(database[0]); i++) { //Scans and prints "index" values, by looping from 0 to size of "database" in increments of 1 
            if (index[i] > -1) { //If "index" is more than -1 (our null value assigned at the beginning), print "index" at index i
                cout << index[i] << ", ";
            }
        }
    }else { //Else if found still equals 0, print item has not been found
        cout << "Item not found.";
    }

    cout << "\nTask 8 has finished running." << endl; //displays message if code runs successfully without syntax
    return 0;
}