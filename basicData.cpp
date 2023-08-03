#include <iostream>

using namespace std; 

int main() {
    int integer;
    long lon;
    char character;
    float flot;
    double dobl;

    cout << "Enter an integer, a long, a character, a floating point number, and a double precision number (separated by spaces): ";
    cin >> integer >> lon >> character >> flot >> dobl;

    // We print each element on a new line without using setprecision or fixed.
    cout << "Integer: " << integer << endl;
    cout << "Long: " << lon << endl;
    cout << "Character: " << character << endl;
    cout.precision(3);
    cout << "Floating point number: " << fixed << flot << endl;
    cout.precision(9);
    cout << "Double precision number: " << fixed << dobl << endl;

    return 0;
}
