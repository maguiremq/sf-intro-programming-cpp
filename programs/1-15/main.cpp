/*

--------------------------------------------------------------------------------

Author: Michael Maguire
Course: COP 2000 - Introduction to Programming
Institution: Santa Fe College
Term: Summer 2026 (May 2026 - June 2026)

--------------------------------------------------------------------------------

Welcome to Advanced zyLabs! 

This training lab demonstrates some of the primary functionalities 
within Advanced zyLabs.

To start, click on the earmarked page icon on the upper left of the zyLabs 
editor to open the Files pane, which lists all files within the current 
workspace. Notice that main.cpp is labeled with a padlock. Files labeled 
with this padlock icon are read-only, and thus cannot be edited. main.cpp 
contains the program of this lab, but the contents of main.cpp need not be 
understood at this moment.

Next, click the plus icon at the top of the Files pane to create a new 
text file. Name the new text file hello.txt. Within the new text file, enter the 
following phrase:

`Hello, World!`

NOTE: Be sure that all capitalization and punctuation are exactly as shown!

Now, click on the green Run button above the editor window to run the main.cpp program. 

The console window just below the editor window is where program output, 
if any, will be shown. The console is also where input can be entered, 
should a program require user input. The main.cpp program is expecting the 
user to input the name of a file, then the program will output the contents 
of said file. Type the name of the file, hello.txt, in the console window 
and press Enter on your keyboard.

If the output within the console matches the phrase "Hello, World!", the 
lab is now ready to be submitted. To do so, click on the Submit for 
grading button. Three points should be awarded for proper completion 
of this lab.

--------------------------------------------------------------------------------
Change Log:
--------------------------------------------------------------------------------

   DATE     Change
   ----     ------

2026-05-17 Initial development

*/

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main () {
   string inputFile;

   // Get the name of the input file
   cin >> inputFile;

   // Open the input file
   ifstream file(inputFile);

   // Print contents of input file
   if (file.is_open()) {
      cout << file.rdbuf();
   }

   // Close the input file
   file.close();

   return 0;
}
