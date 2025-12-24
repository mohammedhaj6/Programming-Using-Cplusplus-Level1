#include <iostream>
using namespace std;
int main()
{

 bool result1 =  ((5 > 6) && (7 == 7) || (1 || 0));
 cout << result1<<"\n";
 bool  result2 = !((5 > 6) && (7 == 7) || (1 || 0));
 cout << result2 << "\n";
 bool  result3 = !((5 > 6) && (7 == 7) || !(1 || 0));
 cout << result3 << "\n";
 bool  result4 = !((5 > 6) || (7 == 7) && !(1 || 0));
 cout << result4 << "\n";
 bool result5 = (((5 > 6) && (7 <= 8) || (8 > 1) && (4 <= 3)) && true);
 cout << result5 << "\n";
 bool result6 = (((5 > 6) && !(7 <= 8)) && ((8 > 1) || (4 <= 3)) || true);
 cout << result6 << "\n";
}

