#include <iostream>
using namespace std;
int main()
{

    string name;
    int age;
    string city;
    string country;
    float monthSalary;
    int yearSalary;
    char gender;
    bool isMarried;

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
    cout << "Enter Your Gender : \n";
    cin >> gender;
    cout << "Are you married ? : \n";
    cin >> isMarried;
    cout << "\n\n\n";


    cout << "*************************************" << "\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << " Years" << "\n";
    cout << "City: " << city << "\n";
    cout << "Country: " << country << "\n";
    cout << "Monthly Salary: " << monthSalary << "\n";
    cout << "Yearly Salary: " << monthSalary * 12 << "\n";
    cout << "Gender: " << gender << "\n";
    cout << "Married: " << isMarried << "\n";
    cout << "***********************************" << "\n\n";
    cout << "-----------------------------------------------------" << "\n" << "\n";

    int x , y , z ;

    cout << "Enter the number 1 :\n";
    cin >> x;
    cout << "Enter the number 2 :\n";
    cin >> y;
    cout << "Enter the number 3 :\n";
    cin >> z;



    cout << x << "+" << "\n";
    cout << y << "+" << "\n";
    cout << z << "\n";
    cout << "---------------------------------" << "\n";
    cout << "Total = " << x+y+z << "\n";
}
