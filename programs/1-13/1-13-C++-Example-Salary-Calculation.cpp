/*

Author      : Michael Q. Maguire
Course      : COP 2000 - Introduction to Programming
Institution : Santa Fe College
Term        : Summer 2026 (May 2026 - June 2026)

-------------
Instructions:
-------------
zyDE 1.13.1: Modify salary calculation.
The following program calculates yearly and monthly salary given an hourly wage.
The program assumes a work-hours-per-week of 40 and work-weeks-per-year of 50.

Insert the correct number in the code below to print a monthly salary. 
Then run the program.

*/

#include <iostream>

using namespace std;

int main () {

  int hourlyWage;

  hourlyWage = 20;

  cout 
    << "Anual salary is: " 
    << hourlyWage * 40 * 50
    << endl
  ;

  cout
    << "Monthly salary is: "
    << (
        (hourlyWage * 40 * 50) / 30
        )
    << endl
  ;

  return 0;
  
}