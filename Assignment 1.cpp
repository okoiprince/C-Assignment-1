//
//NAME: OKOI, PRINCE FRANCIS

//DEPT: COMPUTER SCIENCE

//REG: PDS/2013/5902.

//ASSIGNMENT#1

#include<iostream>
using namespace std;
int main()
{
int number;
Test1:
cout << "Enter two integers: ";
cin >> number;

if (number%2==0)
cout << number << " is an EVEN Number" << endl;
else
cout << number << " is an ODD Number" << endl;
goto Test1;
system ("pause");
return 0;
}
