#include <iostream>
using namespace std;
//Chapter 7 exercise 8

double mean(double a, double b) { //void type changed to double for function and perameter type
    return (a + b) / 2.0;
}
int main() {
    double numberA = 5;
    double numberB = 6;
    double result = mean(numberA, numberB);
    cout << "a is " << numberA;
    cout << "b is " << numberB;
    cout << "The mean of a and b is " << result;
    return 0;
}