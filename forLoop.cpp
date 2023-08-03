#include <iostream>
#include <string>

using namespace std;

int main() {
    int start, end;

    cout << "Enter two positive integers separated by a newline: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (i >= 1 && i <= 9) {
            string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            cout << numbers[i - 1] << endl;
        } else if (i % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}
