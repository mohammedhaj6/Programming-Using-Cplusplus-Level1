#include <iostream>
using namespace std;

struct stInfo {
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readInfo(stInfo &info) {
	cout << "Please Enter Your First Name ? \n";
	cin >> info.firstName;
	cout << "Please Enter Your Last Name ? \n";
	cin >> info.lastName;
	cout << "Please Enter Your Age ? \n";
	cin >> info.age;
	cout << "Please Enter Your Phone ? \n";
	cin >> info.phone;
	cout << "\n";
}

void printInfo(stInfo& info) {
	cout << "**********************************\n";
	cout << "FirstName: " << info.firstName <<"\n";
	cout << "LastName: " << info.lastName << "\n";
	cout << "Age: " << info.age << "\n";
	cout << "Phone: " << info.phone << "\n";
	cout << "**********************************\n";
	
}

void readPersonsInfo(stInfo persons[2]) {
	readInfo(persons[0]);
	readInfo(persons[1]);

}

void printPersonsInfo(stInfo persons[2]) {
	printInfo(persons[0]);
	
	printInfo(persons[1]);
}

int main()
{
	stInfo persons[2];
	readPersonsInfo(persons);
	printPersonsInfo(persons);


}