#include <iostream>
using namespace std;

int main()
{ // homework 1
	//short A,B;

	//    cout << "Please enter the first number A? \n";
	//    cin >> A;
	//	cout << "Please enter the first number B? \n";
	//	cin >> B;
	//	cout << "\n\n";
	//	cout << A << " + " << B << " = " << A + B<<"\n";
	//	cout << A << " - " << B << " = " << A - B << "\n";
	//	cout << A << " * " << B << " = " << A * B << "\n";
	//	cout << A << " / " << B << " = " << A / B << "\n";
	//	cout << A << " % " << B << " = " << A % B << "\n";
	//	cout << "-----------------------------------------------";

		// problem 7
		//short num;
		//cout << "Enter your number ? \n";
		//cin >> num;
		//cout << "\n";
		//cout << "Half of the " << num << " is " << num/2 <<"\n";
		//cout << "-----------------------------------------------";
		
	 //problem 9

	/*short num1, num2, num3;
	cout << "Enter your number 1 \n";
	cin >> num1;
	cout << "Enter your number 2 \n";
	cin >> num2;
	cout << "Enter your number 3 \n";
	cin >> num3;
	cout << "\n";
	cout << "The sum of enterd numbers >>> " << num1 + num2 + num3;*/
	     
	//propblem 10
	/*short mark1, mark2, mark3;
	cout << "Enter your mark 1 \n";
	cin >> mark1;
	cout << "Enter your mark 2 \n";
	cin >> mark2;
	cout << "Enter your mark 3 \n";
	cin >> mark3;
	cout << "\n";
	cout << "The average of enterd numbers >>> " << (mark1 + mark2 + mark3)/3;*/
    //problem 14 
	/*short num1, num2 ,temp;
	cout << "Enter your number 1 \n";
	cin >> num1;
	cout << "Enter your number 2 \n";
	cin >> num2;
	cout << "\n";
	cout << num1<<"\n";
	cout << num2 << "\n";
	cout << "\n\n";
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << "\n";
	cout << num2 << "\n";*/
	//problem 15
	/*short num1, num2;
	cout << "Enter your number 1 \n";
	cin >> num1;
	cout << "Enter your number 2 \n";
	cin >> num2;
	cout << "\n";
	cout << "The rectangle area >>> " << num1 * num2;*/
	//problem 17
	/*short a, h;
	cout << "Enter your number 1 \n";
	cin >> a;
	cout << "Enter your number 2 \n";
	cin >> h;
	cout << "\n";
	cout << "The triangle area >>> " << (0.5*a) * h;*/

	//problem 19
	/*short D;
    const double PI = 3.14;

	cout << "Enter your diameter \n";
	cin >> D;
	
	cout << "\n";
	cout << "The rectangle area >>> " << (PI * D * D)/4;*/

	//problem 20
	/*short A;
	const double PI = 3.14;

	cout << "Enter  Side length of the square  \n";
	cin >> A;

	cout << "\n";
	cout << "The circle area >>> " << PI*(A*A)/4;*/

	//problem 21
	/*short L;
	const double PI = 3.14;

	cout << "Enter your circumference \n";
	cin >> L;

	cout << "\n";
	cout << "The circle area >>> " << (L*L)/(4*PI);*/
	//problem 22
  /* short a,b;
  const double PI = 3.14;

   cout << "Enter a : \n";
  cin >> a;
  cout << "Enter b : \n";
  cin >> b;

  cout << "\n";
   cout << "The circle area >>> " << PI*((b*b)/4)*(2*a-b)/(2*a+b)*/;
   //problem 31

   /*short num;
   cout << "Enter your number ? \n";
   cin >> num;
;
   cout << "\n";
   cout << num<<"^2 >>> " << num * num;
   cout << "\n";
   cout << num << "^3 >>> " << num*num*num;
   cout << "\n";
   cout << num << "^4 >>> " << num * num * num*num;
   cout << "\n";*/


   //problem 35

   
 /*  short penny=1, nickel=5, dime=10, quater=25, dollar=100;
   short pennies, nickels, dimes, quaters, dollars ;
   cout << "Enter your pennies \n";
   cin >> pennies;
   pennies = penny * pennies;
   cout << "Enter your nickels \n";
   cin >> nickels;
   nickels = nickel * nickels;
   cout << "Enter your dimes \n";
   cin >> dimes;
   dimes = dime * dimes;
   cout << "Enter your quaters \n";
   cin >> quaters;
   quaters = quater * quaters;
   cout << "Enter your dollars \n";
   cin >> dollars;
   dollars = dollar * dollars;
   cout << "\n";
   cout << "Total pennies >>> " << pennies+nickels+dimes+quaters+dollars<<"Pennies";
   cout << "\n";
   cout << "Total dollars >>> " << (pennies + nickels + dimes + quaters + dollars)/dollar<<"Dollars";*/

   //problem 39

   /*short totalBill,cashPaid;
   cout << "Enter your Total Bill ? \n";
   cin >> totalBill;
   cout << "Enter your Cash Paid ? \n";
   cin >> cashPaid;
   
   cout << "\n";
   cout <<"The Paid Back is : "<<cashPaid- totalBill;*/

   //problem 40
      
   
  
   /*short billValue;
   cout << "Enter your Bill Value ? \n";
   cin >> billValue;
   cout << "\n\n";
   cout << "The Total Bill is : " << (billValue * 1.1) * 1.16;*/

   //problem 42

  /* short days,hours,minutes,seconds;
   cout << "Enter your days ? \n";
   cin >> days;
   cout << "Enter your hours ? \n";
   cin >> hours;
   cout << "Enter your minutes ? \n";
   cin >> minutes;
   cout << "Enter your seconds ? \n";
   cin >> seconds;
   cout << "\n\n";
   cout << "The task duration in seconds : " << (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds<<" Seconds";*/
   int numOfSeconds,secoundsPerDay=24*60*60,secoundsPerHour = 60*60,secoundsPerMinute=60;
   cout << "Enter your seconds ?\n";
   cin >> numOfSeconds;
  
   int numberOfDays = floor(numOfSeconds / secoundsPerDay);
   int remainder = numOfSeconds % secoundsPerDay;



        
}

