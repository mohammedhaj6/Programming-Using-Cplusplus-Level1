
#include <iostream>

using namespace std;

void mySumProcedure() {
    int num1, num2;
    cout << "Please enter Number1 \n";
    cin >> num1;
    cout << "\n";
    cout << "Please enter Number2 \n";
    cin >> num2;
    cout << "\n";
    cout << "***************************** \n";
    cout << num1 + num2<<"\n";

}

int mySumFunction() {
    int num1, num2;
    cout << "Please enter Number1 \n";
    cin >> num1;
    cout << "\n";
    cout << "Please enter Number2 \n";
    cin >> num2;
    cout << "\n";
    cout << "***************************** \n";
    
    return num1 + num2;
    cout << "\n";

}

int main()
{
    mySumProcedure();
    cout << "\n";
    cout<< mySumFunction();
    cout << "\n";
}
