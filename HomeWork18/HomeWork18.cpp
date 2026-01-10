#include <iostream>

using namespace std;

struct User {
    string name;
    short age;
    string city;
    string country;
    double monthlySalary;
    double yearlySalary;
    char gender;
    bool isMarried;
   
};

void readInfoForUser(User &userInfo){

    cout << "Enter Your Name : \n";
    cin >> userInfo.name;
    cout << "Enter Your Age : \n";
    cin >> userInfo.age;
    cout << "Enter Your City : \n";
    cin >> userInfo.city;
    cout << "Enter Your Country : \n";
    cin >> userInfo.country;
    cout << "Enter Your Monthly Salary : \n";
    cin >> userInfo.monthlySalary;
    cout << "Enter Your Gender >> please enter \"m or f\" ? : \n";
    cin >> userInfo.gender;
    cout << "Are you married >> please enter \"1 or 0\" ? : \n";
    cin >> userInfo.isMarried;
   

}

void printInfoForUser(User userInfo) {
    cout << "*************************************" << "\n";
    cout << "Name: " << userInfo.name << "\n";
    cout << "Age: " << userInfo.age << " Years" << "\n";
    cout << "City: " << userInfo.city << "\n";
    cout << "Country: " << userInfo.country << "\n";
    cout << "Monthly Salary: " << userInfo.monthlySalary << "\n";
    cout << "Yearly Salary: " << userInfo.monthlySalary * 12 << "\n";
    cout << "Gender: " << userInfo.gender << "\n";
    cout << "Married: " << userInfo.isMarried << "\n";
    cout << "***********************************" << "\n\n";
    
}


int main()
{
    User user1;
    readInfoForUser(user1);
    printInfoForUser(user1);
}

