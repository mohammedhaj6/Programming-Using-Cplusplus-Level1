#include <iostream>
#include <string>

using namespace std;

int main()
{
	string st1 = "43.22";
	int num1, N1 = 20,N2=33.5,N3=55.23,N4;
	num1  = stoi(st1);
	////num1 = stod(st1);
	////num1 = stof(st1);
	cout << num1;
	cout << "\n\n";
	cout << "------------------------------";
	cout << "\n\n";
	
	string str1 = to_string(N1);
	string str2 = to_string(N2);
	string str3 = to_string(N3);
	N4 = int(N3);
	cout << str1 <<" "<<str2<<" "<<str3<<" "<< N4;



}

