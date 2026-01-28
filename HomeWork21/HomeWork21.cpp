#include <iostream>
using namespace std;

struct stInfo {
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readInfo(stInfo info[100], int& length) {
    cout << "How many persons do you want to enter ? 1 to 100 ?\n";
    cin >> length;

    for (int i = 0; i < length; i++) {
        cout << "Please Enter First Name for person " << i + 1 << "\n";
        cin >> info[i].firstName;

        cout << "Please Enter Last Name for person " << i + 1 << "\n";
        cin >> info[i].lastName;

        cout << "Please Enter Age for person " << i + 1 << "\n";
        cin >> info[i].age;

        cout << "Please Enter Phone for person " << i + 1 << "\n";
        cin >> info[i].phone;

        cout << "\n";
    }
}

void printInfo(stInfo info[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << "**********************************\n";
        cout << "Person " << i + 1 << "\n";
        cout << "First Name: " << info[i].firstName << "\n";
        cout << "Last Name: " << info[i].lastName << "\n";
        cout << "Age: " << info[i].age << "\n";
        cout << "Phone: " << info[i].phone << "\n";
        cout << "**********************************\n";
    }
}

int main() {
    stInfo persons[100];
    int length = 0;

    readInfo(persons, length);
    printInfo(persons, length);

    return 0;
}