
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> parsedIntegers;
    stringstream ss(str);
    string token;

    while (getline(ss, token, ',')) {
        int num = stoi(token); // Convert the token to an integer
        parsedIntegers.push_back(num);
    }

    return parsedIntegers;
}

int main() {
    string input;
    cin >> input;

    vector<int> result = parseInts(input);

    // Print the parsed integers
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << " " << endl;
        }
    }
    cout << endl;

    return 0;
}