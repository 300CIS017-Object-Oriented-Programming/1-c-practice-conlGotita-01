#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    // Constructor to initialize the data members
    Student(int age, const string& first_name, const string& last_name, int standard) {
        this->age = age;
        this->first_name = first_name;
        this->last_name = last_name;
        this->standard = standard;
    }

    // Getter functions
    int get_age() const {
        return age;
    }

    string get_first_name() const {
        return first_name;
    }

    string get_last_name() const {
        return last_name;
    }

    int get_standard() const {
        return standard;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age;
    cin.ignore(); // Ignore the newline character
    getline(cin, first_name);
    getline(cin, last_name);
    cin >> standard;

    // Create a Student object with the given inputs
    Student student(age, first_name, last_name, standard);

    // Use getter functions to print the student information
    cout << student.get_age() << endl;
    cout << student.get_last_name() << ", " << student.get_first_name() << endl;
    cout << student.get_standard() << endl << endl;

    // Print the information in the required format
    cout << student.get_age() << ","
         << student.get_first_name() << ","
         << student.get_last_name() << ","
         << student.get_standard() << endl;

    return 0;
}

