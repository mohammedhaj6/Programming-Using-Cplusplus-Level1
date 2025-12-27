#include <iostream>
#include <string>
using namespace std;

struct userContact {
    string phone;
    string email;
};

struct User {
    string name;
    short age;
    string city;
    string country;
    double monthlySalary;
    double yearlySalary;
    char gender;
    bool isMarried;
    userContact contact;
};

int main()
{
    User user1;

    cout << "Enter Your Name: ";
    getline(cin, user1.name);

    cout << "Enter Your Age: ";
    cin >> user1.age;
    cin.ignore();

    cout << "Enter Your City: ";
    getline(cin, user1.city);

    cout << "Enter Your Country: ";
    getline(cin, user1.country);

    cout << "Enter Your Monthly Salary: ";
    cin >> user1.monthlySalary;

    user1.yearlySalary = user1.monthlySalary * 12;

    cout << "Enter Your Gender (m/f): ";
    cin >> user1.gender;

    cout << "Are you married? (1 = Yes, 0 = No): ";
    cin >> user1.isMarried;

    cout << "Enter Your Phone: ";
    cin >> user1.contact.phone;

    cout << "Enter Your Email: ";
    cin >> user1.contact.email;

    cout << "\n*************************************\n";
    cout << "Name: " << user1.name << endl;
    cout << "Age: " << user1.age << " Years" << endl;
    cout << "City: " << user1.city << endl;
    cout << "Country: " << user1.country << endl;
    cout << "Monthly Salary: " << user1.monthlySalary << endl;
    cout << "Yearly Salary: " << user1.yearlySalary << endl;
    cout << "Gender: " << user1.gender << endl;
    cout << "Married: " << (user1.isMarried ? "Yes" : "No") << endl;
    cout << "Phone: " << user1.contact.phone << endl;
    cout << "Email: " << user1.contact.email << endl;
    cout << "*************************************\n";

    return 0;
}
