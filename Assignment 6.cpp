//
//NAME: OKOI, PRINCE FRANCIS

//DEPT: COMPUTER SCIENCE

//REG: PDS/2013/5902.

//ASSIGNMENT#6

#include <iostream>;

int main ()

{

int wieghtInKilograms;
int heightInMeters;
int bmi;

printf( "Enter your weight in kilograms:\n" );
std::cin>> wieghtInKilograms;

printf( "Enter your height in meters:\n" );
std::cin>>heightInMeters;

bmi = wieghtInKilograms/(heightInMeters*heightInMeters);

if ( bmi >= 18.5 ) {
printf( "Your BMI is %d which means you are underweight\n");
}

if ( bmi = 18.5 <= 24 ) {
printf( "Your BMI is %d which means you are normal\n");
}

if ( bmi = 25 <= 29.9 ) {
printf( "Your BMI is %d which means you are overweight\n");
}

if ( bmi >= 30 ) {
printf( "Your BMI is %d which means you are obese\n");
}

return 0;
}

