/*

--------------------------------------------------------------------------------

Author: Michael Maguire
Course: COP 2000 - Introduction to Programming
Institution: Santa Fe College
Term: Summer 2026 (May 2026 - June 2026)

--------------------------------------------------------------------------------

In Advanced zyLabs, the console window located below the editor enables 
users to interact with the program during execution. Any output produced 
by the program will be displayed in the console. Users can also enter any 
input required by the program in the console. A prompt is commonly used 
to notify users to enter input into the console.

(1) The program provided in this lab prompts the user to input a value of x 
and outputs the double of the input value. Click the Run button to run 
the program, enter 5 as the value of x in the console, and press Enter 
(or Return on a Mac). The console should display the prompt and the result 
as shown in the image below:

A console window displaying the program input and output during a program run: 
Enter x: 5 newline x doubled is: 10"



(2) Click the Submit for grading button to submit the code. 
The auto-grader will run three tests against the submitted code. 
The submission will pass the first test (Compare output test 1), 
while failing the last two tests as the code will be completed in 
the next step of this lab.

The result of the first test is shown in the image below:

Result of a compare output test showing that the program's output is 
the same as the expected output: "Enter x: x doubled is:10"

Notice the content of the test result is different from what is displayed 
in the console during the program run. The user-input value (5) and 
the newline (produced by pressing the Enter/Return key) that follows 
are missing from the test result.

Since the console serves as an interactive medium between the user and the 
program, the console displays both the user-input and the program output. 
Only the program output is tested in Compare output test 1, so the user 
input and newline are not displayed in the test results.



(3) Complete the program to prompt the user to enter a value of y and output 
the sum of x and y.

Ex: If the values of x and y are 5 and 3, the console will display:

--------------------------------------------------------------------------------
Change Log:
--------------------------------------------------------------------------------

2026-05-17 Initial development

*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout << "Enter x: ";
    cin >> x;
    cout << "x doubled is: " << 2 * x << endl;

    // TODO: Prompt the user to enter a value of y and output the sum of x and y

    cout << "Enter y: ";
    cin >> y;
    cout << "The sum of x and y is: " << x + y << endl;

    return 0;
    
}
