//

//NAME: OKOI, PRINCE FRANCIS

//DEPT: COMPUTER SCIENCE

//REG: PDS/2013/5902.

//ASSIGNMENT#2

// Twointegers.cpp
// reads two integers, determines and print
// if the first is the multiple of the second

#include<iostream>
using namespace std;
int main()
{
int Number1;
int Number2;
std::cout << "Enter two (a & b) integer= ";
std::cin >>Number1 >> Number2;

if ( Number1%Number2==0 )
std::cout<< Number1 << " is a MULTIPLE of " << Number2 << endl;

if ( Number1%Number2!=0 )
std::cout<< Number1 << " is not a MULTIPLE of " << Number2 << endl;system ("pause");
return 0;
}
