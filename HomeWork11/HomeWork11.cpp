#include <iostream>
using namespace std;

enum Status {
    Single=0,Married=1
};
enum Gender {
    Male=0,Female=1
};

enum Color {
    red,blue,yellow,green,black,white
};

int main()
{

    string name;
    short age;
    string city;
    string country;
    float monthSalary;
    float yearSalary;
    Gender gender;
    Status isMarried;
    Color color;

    cout << "Enter Your Name : \n";
    cin >> name;
    cout << "Enter Your Age : \n";
    cin >> age;
    cout << "Enter Your City : \n";
    cin >> city;
    cout << "Enter Your Country : \n";
    cin >> country;
    cout << "Enter Your Monthly Salary : \n";
    cin >> monthSalary;
    cout << "\n\n\n";
    gender = Gender::Male;
    isMarried = Status::Single;
    color = Color::black;

    cout << "*************************************" << "\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << " Years" << "\n";
    cout << "City: " << city << "\n";
    cout << "Country: " << country << "\n";
    cout << "Monthly Salary: " << monthSalary << "\n";
    cout << "Yearly Salary: " << monthSalary * 12 << "\n";
    cout << "Gender: " << gender  << "\n";
    cout << "Married: " << isMarried << "\n";
    cout << "Color: " << color << "\n";
    cout << "***********************************" << "\n\n";
    cout << "-----------------------------------------------------" << "\n" << "\n";

}
