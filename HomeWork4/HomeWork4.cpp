#include <iostream>
using namespace std;


int main()
{
    
    string name = "mohammed alhaj mohammed";
    short age = 23;
    string city = "gaza";
    string country = "palestine";
    float monthSalary = 5000;
    float yearSalary = monthSalary * 12;
    char gender = 'M';
    bool married = 1;

    cout <<"*************************************" << "\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age <<" Years" << "\n";
    cout << "City: " << city << "\n";
    cout << "Country: " << country << "\n";
    cout << "Monthly Salary: " << monthSalary << "\n";
    cout << "Yearly Salary: " << yearSalary << "\n";
    cout << "Gender: " << gender << "\n";
    cout << "Married: " << married<<"\n";
    cout << "***********************************" << "\n" << "\n";
    cout << "-----------------------------------------------------" << "\n" << "\n";

    short x = 20, y = 30, z = 10;
    short total = x + y + z;

    cout << x << "+"<<"\n";
    cout << y << "+" << "\n";
    cout << z << "\n";
    cout << "---------------------------------" << "\n";

    cout<<"Total = " << total <<"\n";


}