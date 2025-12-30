#include <iostream>
#include <string>

using namespace std;
int main()
{
	string string1,string2,string3;
	cout << "Please enter String1 \n";
	getline(cin, string1);
	cout << "\n\n";
	cout << string1;
	cout << "\n\n";
	cout << "Please enter String2 \n";
	getline(cin, string2);
	cout << "\n\n";
	cout << string2;
	cout << "\n\n";
	cout << "Please enter String3 \n";
	getline(cin, string3);
	cout << "\n\n";
	cout << string3;
	cout << "\n\n";
	
	cout << "-----------------------------------";
	cout << "\n\n";

	cout << "The Length of String1 is " << string1.length();
	cout << "\n\n";
	cout << "Characters at 0,2,4,7  " << "are: " << string1[0]<<string1[2]<<string1[4]<<string1[7];
	cout << "\n\n";
	cout << "Concatenating String2 and String3 = " << string2 + string3 << "\n\n";
	cout << " 5 * 10 = " << stoi(string2) * stoi(string3);



}

