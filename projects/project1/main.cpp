/*

--------------------------------------------------------------------------------

Author: Michael Maguire
Course: COP 2000 - Introduction to Programming
Institution: Santa Fe College
Term: Summer 2026 (May 2026 - June 2026)
Project: Project 1
Program Name: main.cpp

--------------------------------------------------------------------------------

Project Specifications

In this project, you will use Visual Studio to output the following information 
on 4 lines of output only.  This means no additional blank lines between each 
line of output.

Display:

1. your name on one line (please make this accurate)
2. your address on one line (feel free to make up your address if you like), this 
3. includes street address, city, state, zip
4. your telephone number on one line (free free to make up your telephone 
   number if you like), follow proper formatting
5. your college major on one line (please make this accurate)

Although these items should be displayed on separate output lines, 
use only a single cout statement in your program.

Be sure to:

- only use one cout statement to display the output

- only use 4 lines of output

- use proper capitalization and spelling

- use proper punctuation in the address and proper phone number formatting as
  shown above add several blank lines at the very bottom of your program to move 
  the output from Visual Studio away from your output.  These will not count 
  toward the total number of lines used.

*/

#include <iostream>

using namespace std;

int main () {

   cout
      // your name on one line (please make this accurate)
      << "Michael Maguire\n"
      // your address on one line
      << "100 SAS Campus Drive, Cary, NC, 27513\n"
      // your telephone number on one line
      << "352-111-1111\n"
      // your college major on one line
      << "Computer Programming and Analysis"
      // Requirement 5 - only one `cout` statement
      << endl
   ;

   /* 
      add several blank lines at the very bottom of your program to move the 
      output from Visual Studio away from your output.
   */

   cout
      << endl
      << endl
      << endl
      << endl
   ;

   // End program
   return 0;

}

/* 

Verification from log:
----------------------

Michael Maguire
100 SAS Campus Drive, Cary, NC, 27513
352-111-1111
Computer Programming and Analysis




*/