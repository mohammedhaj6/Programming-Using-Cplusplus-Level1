#include <iostream>
using namespace std;

void Swap(int &A, int &B) {
    int temp;
    temp = A;
    A = B;
    B = temp;
    cout << "inside the function" << " A = " << A << " B = " << B <<"\n";

}

int main()
{
    int A, B;

     cout<< "Enter A ? \n";
     cin >> A;
     cout << "\n";
     cout << "Enter B ? \n";
     cin >> B;
     cout << "\n";
     cout << "Before Swap " << "A = " << A << " B = " << B;
     cout << "\n";
     Swap(A, B);
     cout << "After Swap " << "A = " << A << " B = " << B;


}

