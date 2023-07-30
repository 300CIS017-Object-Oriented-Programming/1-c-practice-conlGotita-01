#include <iostream>
#include <string>

using namespace std;


int main() {
        string numbersInLetters[] = {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    int number;

    cout << "Enter an integer (0-9): ";
    cin >> number;

    if (number >= 0 && number <= 9) {
        cout << "The number in letters is: " << numbersInLetters[number] << endl;
    } else {
        cout << "Greater than 9" << endl;
    }

    return 0;
}
