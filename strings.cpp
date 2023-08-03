#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    getline(cin, a); // Read the first string
    getline(cin, b); // Read the second string

    // Calculate and print the lengths of a and b
    cout << a.length() << " " << b.length() << endl;

    // Concatenate and print the strings a and b
    cout << a + b << endl;

    // Swap the first characters of a and b and print them
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << endl;

    return 0;
}
