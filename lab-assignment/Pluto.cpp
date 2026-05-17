/*

--------------------------------------------------------------------------------

Author: Michael Maguire
Course: COP 2000 - Introduction to Programming
Institution: Santa Fe College
Term: Summer 2026 (May 2026 - June 2026)
Program Name: Pluto.cpp
Lab Assignment: Output format errors in Pluto.cpp

--------------------------------------------------------------------------------

In zyLabs, program correctness is not limited to producing program output 
containing the correct content. Program correctness also includes 
producing program output in the correct format. A program introducing 
an extra space or a missing newline character in an output is considered 
as not being precise.

The program in the default template is expected to produce the following 
output:

Is Pluto a planet?
Some people think so, but others don't.
    The Moon's mass is 6 times Pluto's.
    Not much of a planet, is it?

(1) Click the Run program button to run the program and examine the output. 
The program produces an output containing the correct words as expected 
but in a different format.

(2) Click the Submit for grading button. The submitted program has failed 
the compare output test. In the image below, the auto-grader highlights 
the differences between the submitted program's output and the expected 
program's output.

Any highlighted characters in the Your Output box represent the extraneous 
characters the submitted program has introduced. 

Any highlighted characters in the Expected output box represent missing 
characters that the submitted program has failed to output. 

Click the Special character legend link (indicated in the compare 
output test result image above) to understand the meaning of different 
highlighted characters.


(3) In your output box, a highlighted space is highlighted in between 
"but" and "others". Locate the output statement containing this error in 
the program and remove the extra space. Submit the program and notice 
that the highlighted space is removed from the result of the compare output 
test.

(4) In the expected output box, a tab character is highlighted before "Not". 
Locate the output statement containing this error in the program and add 
the missing tab. Submit the program again and notice that the highlighted 
tab is removed from the result of the compare output test.

(5) Repeat the process to add the two remaining missing characters (a space 
and a newline character) in the program output. Submit the program again 
and notice that all highlighted characters are now removed from the result 
of the compare output test. A total score of 5/5 is awarded for a correct 
compare output test.

--------------------------------------------------------------------------------
Change Log:
--------------------------------------------------------------------------------

2026-05-17 Initial development

*/

#include <iostream>
using namespace std;

int main () {

   int proportion = 6;

   cout 
     << "Is Pluto a planet?" 
     << endl
   ;

   cout 
      << "Some people think so, but others don't." 
      << endl
   ;

   cout 
      << "\tThe Moon's mass is " 
      << proportion << " times Pluto's." 
      << endl
    ;

   cout 
      << "\tNot much of a planet, is it?" 
      << endl
    ;
   
   return 0;

}