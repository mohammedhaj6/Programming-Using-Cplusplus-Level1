#include <iostream>
using namespace std;


void readGradesFromUser(float grades[3]) {
	cout << "Please Enter Grade1 ? \n";
	cin >> grades[0];
	cout << "Please Enter Grade2 ? \n";
	cin >> grades[1];
	cout << "Please Enter Grade3 ? \n";
	cin >> grades[2];
	cout << "\n";
}

void printAverageOfGrades(float grades[3]) {
	      cout<<"The average of grades is = "<< (grades[0] + grades[1] + grades[2]) / 3;
}


int main()
{
	float grades[3];
	readGradesFromUser(grades);
	printAverageOfGrades(grades);



}

