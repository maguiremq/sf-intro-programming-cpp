# M2 Introduction and Agenda
## Introduction to the Module

We will learn that variables are simply memory locations that we may reference in our programs to store and retrieve data.

C++ is strongly typed which means you must be very careful about the data types you assign your variables.  We will explore the similarities and the differences between the data types and which you should use in your projects.

## Agenda

1. Complete the Chapter 2 zyBook Reading and Interactive Activities listed in the module.
2. Once you have completed the Reading and Interactive Activities, complete the M2 Lab assignment in zyBooks.
3. Using Visual Studio, complete Project 2 and upload your .cpp file before the due date.
4. Complete the Module 2 Review Activity by the due date.

M2 Topics and Learning Objectives
Module Topics
Variables
Arithmetic expressions
Constant variables
Math functions
Module Learning Objectives (MLOs)
The following MLOs support the course learning objectives.
By the end of the module, you will be able to: 

Identify data types and explain variable scope.

### 2.1 Variables and assignments (general)

**Remembering a value**

Here's a variation on a common schoolchild riddle.

participation activity

2.1.1: People on bus.
For each step, keep track of the current number of people by typing in the numPeople box (the box is editable).

Start

You are driving a bus. 
The bus starts with 5 people. 

By the way, the real riddle's ending question is actually "What is the bus driver's name?"— the subject usually says "How should I know?" The riddler then says "I started with YOU are driving a bus."

The box above served the same purpose as a variable in a program, introduced below.

**Variables and assignments**

In a program, a **variable** is a named item, such as x or numPeople, used to hold a value.

An **assignment** assigns a variable with a value, such as x = 5. That assignment means x is assigned with 5, and x keeps that value during subsequent assignments, until x is assigned again.

An assignment's left side must be a variable. The right side can be an expression, so an assignment may be x = 5, y = x, or z = x + 2. The 5, x, and x + 2 are each an expression that evaluates to a value.

*= is not equals*

In programming, = is an assignment of a left-side variable with a right-side value. = is NOT equality as in mathematics. Thus, x = 5 is read as "x is assigned with 5", and not as "x equals 5". When one sees x = 5, one might think of a value being put into a box.

#### 2.1.3: Valid Assignments

Indicate which assignments are valid.

1. x = 1 **valid**
2. x = y **valid**
3. x = y + 2 **valid**
4. x + 1 = 3 **invalid**
5. x + y = y + x **invalid**

#### 2.1.4: Variables and assignments

Given variables x, y, and z:

1. 

`x = 9`
`y = x + 1`
What is y?

2.

`x = 9`
`y = x + 1`

What is x?

3.

`x = 9`
`y = x + 1`
`x = 5`
What is y?

**Assignments with variable on left and right**

Because in programming = means assignment, a variable may appear on both the left and right as in x = x + 1. If x was originally 6, x is assigned with 6 + 1, or 7. The assignment overwrites the original 6 in x.

Increasing a variable's value by 1, as in x = x + 1, is common, and known as incrementing the variable.

### 2.2 Variables (int)

**Variable declarations**

A **variable declaration** is a statement that declares a new variable, specifying the variable's name and type. Ex: int userAge; declares a new variable named userAge that can hold an integer value. The compiler allocates a memory location for userAge capable of storing an integer. **Allocation** is the process of determining a suitable memory location to store data like variables. Ex: In the animation below, the compiler has given userAge memory location 97, which is known as the variable's address. The choice of 97 is arbitrary and irrelevant to the programmer, but the idea that a variable corresponds to a memory location is important to understand.

When a statement that assigns a variable with a value executes, the processor writes the value into the variable's memory location. Likewise, reading a variable's value reads the value from the variable's memory location. The programmer must declare a variable before any statement that assigns or reads the variable, so that the variable's memory location is known.

Compiler optimization

Modern compilers may ignore unused variables, allocate variables on the stack, or use registers for variables. However, the conceptual view of a variable in memory helps understand many language aspects.

**Assignment statements**

An ***assignment statement*** assigns the variable on the left-side of the = with the current value of the right-side expression. Ex: numApples = 8; assigns numApples with the value of the right-side expression (in this case 8).1

An ***expression*** may be a number like 80, a variable name like numApples, or a simple calculation like numApples + 1. Simple calculations can involve standard math operators like +, -, and *, and parentheses as in 2 * (numApples - 1). An integer like 80 appearing in an expression is known as an ***integer literal***.

In the code below, litterSize is assigned with 3, and yearlyLitters is assigned with 5. Later, annualMice is assigned with the value of litterSize * yearlyLitters (3 * 5, or 15), which is then printed. Next, litterSize is assigned with 14, yearlyLitters is assigned with 10, and annualMice is assigned with their product (14 * 10, or 140), which is printed.

Figure 2.2.1: Assigning a variable.

```cpp
// 2.2.1: Assigning a variable
#include <iostream>

using namespace std;

int main () {

    int litterSize      ;
    int yearlyLitters   ;
    int annualMice      ;

    litterSize      = 3 ;
    yearlyLitters   = 5 ;

    cout << "One female mouse may give birth to: "  ;
    annualMice = litterSize * yearlyLitters         ;
    cout << annualMice << " mice," << endl          ;

    litterSize      = 14;
    yearlyLitters   = 10;

    return 0            ;

}

```

**2.2.3: Assignment Statements**

**Initializing variables**

Although not required, an integer variable is often assigned an initial value when declared. Ex: int maxScore = 100; declares an int variable named maxScore with an initial value of 100.

**Figure 2.2.2.: Variable initialization Example Program**

```cpp
// Initializing variables

#include <iostream>

using namespace std;

int main () {

    int avgLifeSpan = 70                                    ;
    int userAge                                             ;

    cout << "Enter your age: "                              ;
    cin >> userAge                                          ;
    cout << userAge << " is a great age" << endl            ;

    cout << "Average lifespan is " << avgLifeSpan << endl   ;

    return 0                                                ;

}

```

**Assignment statement with same variable on both sides**

Commonly, a variable appears on both the right and left side of the = operator. Ex: If numItems is 5, after numItems = numItems + 1; executes, numItems will be 6. The statement reads the value of numItems (5), adds 1, and assigns numItems with the result of 6, which replaces the value previously held in numItems.

```cpp

#include <iostream>

using namespace std;

int main () {

    int yourFriends                                                     ;
    int totalFriends                                                    ;

    // Input number of friends user has
    cout << "Enter the number of people you know: "                     ;
    cin >> yourFriends                                                  ;

    // Store value in `totalFriends`
    totalFriends = yourFriends                                          ;

    // Output totalFriends to terminal with text
    cout << "You know " << totalFriends << " people." << endl           ;

    // Store value of number of friends of user's friends
    totalFriends = totalFriends * yourFriends                           ;

    // Output totalFriends to terminal with text
    cout << "Those people know " << totalFriends << " people." << endl  ;

    // Store value of all friends to terminal
    totalFriends = totalFriends * yourFriends                           ;

    // Output totalFriends of all friends to terminal
    cout << "And they know " << totalFriends << " people." << endl      ;

    // Exit
    return 0;

}
```

**Common errors**

A common error is to read a variable that has not yet been assigned a value. If a variable is declared but not initialized, the variable's memory location contains some unknown value, commonly but not always 0. A program with an uninitialized variable may thus run correctly on a system that has 0 in the memory location, but then fail on a different system—a very difficult bug to fix. A programmer must ensure that a program assigns a variable with a value before reading.

A common error by new programmers is to write an assignment statement in reverse. Ex: numKids + numAdults = numPeople, or 9 = beansCount. Those statements won't compile, but writing numCats = numDogs in reverse will compile, leading to a hard-to-find bug.

**Challenge Activity - 2.2.2: Variables (int)**

```cpp

// Declare an integer variable named numMonkshoods initialized with 85. */

#include <iostream>

using namespace std;

int main () {

    int numMonkshoods = 85          ;
    cout << numMonkshoods << endl   ;

   return 0;

}

```

**2.3 Identifiers**

**Rules for identifiers**

A name created by a programmer for an item like a variable or function is called an **identifier**. An identifier must:

- be a sequence of letters (a-z, A-Z), underscores (_), and digits (0-9)
- start with a letter or underscore

Note that "_", called an underscore, is considered to be a letter.

Identifiers are **case sensitive**, meaning upper and lower case letters differ. So numCats and NumCats are different.

A **reserved word** is a word that is part of the language, like int, short, or double. A reserved word is also known as a keyword. A programmer cannot use a reserved word as an identifier. Many language editors will automatically color a program's reserved words. A list of reserved words appears at the end of this section.

**Style guidelines for identifiers**

While various (crazy-looking) identifiers may be valid, programmers may follow identifier naming conventions (style) defined by their company, team, teacher, etc. Two common conventions for naming variables are:

Camel case: Lower camel case abuts multiple words, capitalizing each word except the first, as in numApples or peopleOnBus.

Underscore separated: Words are lowercase and separated by an underscore, as in num_apples or people_on_bus.

Neither convention is better. The key is to be consistent so code is easier to read and maintain.

Good practice is to create meaningful identifier names that self-describe an item's purpose. Good practice minimizes use of abbreviations in identifiers except for well-known ones like num in numPassengers. Programmers must strive to find a balance. Abbreviations make programs harder to read and can lead to confusion. Long variable names, such as averageAgeOfUclaGraduateStudent may be meaningful, but can make subsequent statements too long and thus hard to read.

***Table 2.3.1: C++ Reserved words/keywords***

alignas   (since C++11)
alignof   (since C++11)
and
and_eq
asm
auto
bitand
bitor
bool
break
case
catch
char
char16_t   (since C++11)
char32_t   (since C++11)
class
compl
const
constexpr   (since C++11)
const_cast
continue	decltype   (since C++11)
default
delete
do
double
dynamic_cast
else
enum
explicit
export
extern
false
float
for
friend
goto
if
inline
int
long
mutable	namespace
new
noexcept   (since C++11)
not
not_eq
nullptr   (since C++11)
operator
or
or_eq
private
protected
public
register
reinterpret_cast
return
short
signed
sizeof
static
static_assert   (since C++11)
static_cast	struct
switch
template
this
thread_local   (since C++11)
throw
true
try
typedef
typeid
typename
union
unsigned
using
virtual
void
volatile
wchar_t
while
xor
xor_eq

**2.4 Arithmetic expressions (general)**

**Basics**

An ***expression*** is any individual item or combination of items, like variables, literals, operators, and parentheses, that evaluates to a value, like 2 * (x + 1). A common place where expressions are used is on the right side of an assignment statement, as in y = 2 * (x + 1).

A ***literal*** is a specific value in code like 2. An ***operator*** is a symbol that performs a built-in calculation, like +, which performs addition. Common programming operators are shown below.

**Evaluation of expressions**

An expression evaluates to a value, which replaces the expression. Ex: If x is 5, then x + 1 evaluates to 6, and y = x + 1 assigns y with 6.

An expression is evaluated using the order of standard mathematics, such order known in programming as precedence rules, listed below.

Table 2.4.2: Precedence rules for arithmetic operators.

Operator/Convention	Description	Explanation
( )	Items within parentheses are evaluated first	In 2 * (x + 1), the x + 1 is evaluated first, with the result then multiplied by 2.

unary -	- used for negation (unary minus) is next	In 2 * -x, the -x is computed first, with the result then multiplied by 2.

* / %	Next to be evaluated are *, /, and %, having equal precedence.	(% is discussed elsewhere)

+ -	Finally come + and - with equal precedence.	In y = 3 + 2 * x, the 2 * x is evaluated first, with the result then added to 3, because * has higher precedence than +. Spacing doesn't matter: y = 3+2 * x would still evaluate 2 * x first.

left-to-right	If more than one operator of equal precedence could be evaluated, evaluation occurs left to right.	In y = x * 2 / 3, the x * 2 is first evaluated, with the result then divided by 3.

**2.5 Arithmetic expressions (int)**

Figure 2.5.1: Expressions examples: Leasing cost

```cpp
// Compute total cost of leasing car given down payment, rate, and number months

#include <iostream>

using namespace std;

int main () {

    int downPayment                             ;
    int paymentPerMonth                         ;
    int numMonths                               ;
    int totalCost                               ;

    cout << "Enter down payment: "              ;
    cin  >> downPayment                         ;

    cout << "Enter monthly payment: "           ;
    cin  >> paymentPerMonth                     ;

    cout << "Enter number of months: "          ;
    cin  >> numMonths                           ;

    totalCost = downPayment + (
            paymentPerMonth * numMonths
        )
    ;

    cout << "Total cost: " << totalCost << endl ;

   return 0                                     ;

}
```

**Style: Single space around operators**

A good practice is to include a single space around operators for readability, as in numItems + 2, rather than numItems+2. An exception is minus used as negative, as in: xCoord = -yCoord. Minus (-) used as negative is known as unary minus.

**No commas allowed**

Commas are not allowed in an integer literal. So 1,333,555 is written as 1333555.

**Challenge Activity 2.5.2: Arithmetic Expressions (int)**

```cpp
/* 
    Assign applesQuantity with the current value of applesQuantity * 2
*/

#include <iostream>

using namespace std;

int main () {

    int applesQuantity                                              ;

    cin >> applesQuantity                                           ;

    cout << "Initial number of apples: " << applesQuantity << endl  ;

    applesQuantity *= 2                                             ;

    cout << "Updated number of apples: " << applesQuantity << endl  ;

    return 0                                                        ;

}

// Level 2

/*

Assume that dogs weigh 13 pounds each, foxes weigh 12 pounds each, 
and eagles weigh 10 pounds each. Given variables numDogs, numFoxes, and 
numEagles read from input, compute the total weight of all the dogs, foxes, 
and eagles, and assign combinedWeight with the result.

Ex: If the input is 2 12 39, then the output is:

Weight: 560

*/

#include <iostream>

using namespace std;

int main () {

    int dogWeight   = 13                        ;
	int foxWeight   = 12                        ;
	int eagleWeight = 10                        ;

	int numDogs                                 ;
	int numFoxes                                ;
	int numEagles                               ;

	int combinedWeight                          ;

	cin >> numDogs                              ;
	cin >> numFoxes                             ;        
	cin >> numEagles                            ;

    combinedWeight =   (numDogs   * dogWeight) 
                     + (numFoxes  * foxWeight) 
                     + (numEagles * eagleWeight)
    ;

   cout << "Weight: " << combinedWeight << endl ;

   return 0                                     ;

}

```

### 2.6 Example: Health data

**Calculating user's age in days**

The section presents an example program that computes various health related data based on a user's age using **incremental development**. Incremental development is the process of writing, compiling, and testing a small amount of code, then writing, compiling, and testing a small amount more (an incremental amount), and so on.

The initial program below calculates a user's age in days based on the user's age in years. The assignment statement `userAgeDays = userAgeYears * 365;` assigns userAgeDays with the product of the user's age and 365, which does not take into account leap years.

```cpp

// Figure 2.6.1. Health data: calculating user's age in days

#include <iostream>

using namespace std;

int main () {

    int userAgeYears                                            ;
    int userAgeDays                                             ;

    cout << "Enter your age in years: "                         ;
    cin  >> userAgeYears                                        ;
    
    userAgeDays = userAgeYears * 365                            ;

    cout << "You are " << userAgeDays << " days old." << endl   ;

    return 0                                                    ;

}

```

**Considering leap years and calculating age in minutes**

The program below extends the previous program by accounting for leap years when calculating the user's age in days. Since each leap year has one extra day, the statement userAgeDays = userAgeDays + (userAgeYears / 4) adds the number of leap years to userAgeDays. Note that the parentheses are not needed but are used to make the statement easier to read.

The program also computes and outputs the user's age in minutes.

```cpp

// Figure 2.6.1. Health data: calculating user's age in days

#include <iostream>

using namespace std;

int main () {

    int userAgeYears                                                    ;
    int userAgeDays                                                     ;
    int userAgeMinutes                                                  ;

    cout << "Enter your age in years: "                                 ;
    cin  >> userAgeYears                                                ;

    userAgeDays = userAgeYears * 365                                    ;
    userAgeDays = userAgeDays + (userAgeYears / 4)                      ;
    
    cout << "You are " << userAgeDays << " days old." << endl           ;

    userAgeMinutes = userAgeDays * 24 * 60                              ;

     cout << "You are " << userAgeMinutes << " minutes old." << endl    ;   

    return 0                                                            ;

}

```

**Estimating total heartbeats in user's lifetime**

The program is incrementally extended again to calculate the approximate number of times the user's heart has beat in the user's lifetime using an average heart rate of 72 beats per minute.

```cpp

#include <iostream>

using namespace std;

int main () {

    int userAgeYears            ;
    int userAgeDays             ;
    int userAgeMinutes          ;
    
    int totalHeartBeats         ;
    int avgBeatsPerMinute = 72  ;

    cout << "Enter your age in years: " ;
    cin  >> userAgeYears                ;

    userAgeDays     = userAgeYears * 365                    ;
    userAgeDays     = userAgeDays + (userAgeYears / 4)      ;
    userAgeMinutes  = userAgeDays * 24 * 60                 ;
    totalHeartbeats = userAgeMinutes * avgBeatsPerMinute    ;
    
    cout << "You are " << userAgeDays << " days old." << endl               ;
    cout << "You are " << userAgeMinutes << " minutes old." << endl         ;
    cout << "Your heart has beat " << totalHeartbeats << " times." << endl  ;

    return 0;

}

```

### 2.7 Floating-point numbers (double)

**Floating-point (double) variables**

A ***floating-point number*** is a real number containing a decimal point that can appear anywhere (or "float") in the number. Ex: 98.6, 0.0001, or -55.667. A double variable stores a floating-point number. Ex: double milesTravel; declares a double variable.

A ***floating-point literal*** is a number with a fractional part, even if the fraction is 0, as in 1.0, 0.0, or 99.573. Good practice is to always have a digit before the decimal point, as in 0.5, since .5 might mistakenly be viewed as 5.

```cpp

#include <iostream>

using namespace std;

int main () {

    // Initialize variables for calculations and input
    double milesTravel  ;
    double hoursFly     ;
    double hoursDrive   ;

    // User input
    cout << "Enter miles to travel: "   ;
    cin  >> milesTravel                 ;


    // Calculations
    hoursFly    = milesTravel   / 500.0     ;
    hoursDrive  = milesTravel   / 60.0      ;

    // Output to terminal
    cout << milesTravel << " miles would take: " << endl        ;
    cout << "   " << hoursFly << " hours to fly" << endl        ;
    cout << "   " << hoursDrive << " hours to drive" << endl    ;

    // Exit program
    return 0;

}

```

**Scientific notation**

Very large and very small floating-point values may be printed using scientific notation. Ex: If a floating variable holds the value 299792458.0 (the speed of light in m/s), the value will be printed as 2.99792e+08.

**Choosing a variable type (double vs. int)**

A programmer should choose a variable's type based on the type of value held.

Integer variables are typically used for values that are counted, like 42 cars, 10 pizzas, or -95 days.

Floating-point variables are typically used for measurements, like 98.6 degrees, 0.00001 meters, or -55.667 degrees.

Floating-point variables are also used when dealing with fractions of countable items, such as the average number of cars per household.

Floating-point for money

Some programmers warn against using floating-point for money, as in 14.53 representing 14 dollars and 53 cents, because money is a countable item (reasons are discussed further in another section). int may be used to represent cents or to represent dollars when cents are not included as for an annual salary, as in 40000 dollars, which are countable.

**Floating-point division by zero**

Dividing a nonzero floating-point number by zero is undefined in regular arithmetic. Many programming languages produce an error when performing floating-point division by 0, but C++ does not. C++ handles this operation by producing infinity or -infinity, depending on the signs of the operands. Printing a floating-point variable that holds infinity or -infinity outputs inf or -inf.

If the dividend and divisor in floating-point division are both 0, the division results in a "not a number". ***Not a number (NaN)*** indicates an unrepresentable or undefined value. Printing a floating-point variable that is not a number outputs nan.

```cpp
// Figure 2.7.2: Floating point division by zero example

#include <iostream>

using namespace std;

int main () {

    // Initialization
    double gasVolume;
    double oilVolume;
    double mixRatio ;

    // User input
    cout << "Enter gas volume: "        ;
    cin  >> gasVolume                   ;

    cout << "Enter oil volume: "        ;
    cin  >> oilVolume                   ;

    // Calculation of mixRatio
    mixRatio = gasVolume / oilVolume    ;

    // Output
    cout << "Gas to oil mix ratio is "
         << mixRatio
         << ":1"
         << endl
    ;

}
```

Manipulating floating-point output

Some floating-point numbers have many digits after the decimal point. Ex: Irrational numbers (Ex: 3.14159265359...) and repeating decimals (Ex: 4.33333333...) have an infinite number of digits after the decimal. By default, most programming languages output at least 5 digits after the decimal point. But for many simple programs, this level of detail is not necessary. A common approach is to output floating-point numbers with a specific number of digits after the decimal to reduce complexity or produce a certain numerical type (Ex: Representing currency with two digits after the decimal). The syntax for outputting the double myFloat with two digits after the decimal point is

`cout << fixed << setprecision(2) << myFloat;`

When outputting a certain number of digits after the decimal using cout, C++ rounds the last output digit, but the floating-point value remains the same. Manipulating how numbers are output is discussed in detail elsewhere.

Note: setprecision() is found in the iomanip library. fixed and setprecision() are manipulators that need only be written once if the desired number of digits after the decimal point is the same for multiple floating-point numbers. Ex:

`cout << fixed << setprecision(3) << 3.1244 << endl;`
`cout << 2.1 << endl;`

**Challenge Activity 2.7.1: Sphere Volume**

```cpp
/*

Given sphereRadius, compute the volume of a sphere and assign sphereVolume 
with the result. Use (4.0 / 3.0) to perform floating-point division, 
instead of (4 / 3) which performs integer division.

Volume of sphere = (4.0 / 3.0) π r3 (Hint: r3 can be computed using *. 
Use the constant M_PI for the value of pi.)

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
    

int main () {

    // Initialize
    double sphereVolume;
    double sphereRadius;

    // User input
    cin >> sphereRadius;

    // Calculation
    sphereVolume = ((4.0 / 3.0) * M_PI) * (sphereRadius * sphereRadius * sphereRadius);

    // Output to terminal
    cout
        << fixed
        << setprecision(2)
        << sphereVolume
        << endl
    ;

    // Exit program
    return 0;

}

```

**Challenge Activity 2.7.2: Floating point numbers (double)**

```cpp
/*

The reciprocal of currentInput is 1 / currentInput. The following program 
intends to read a floating-point value from input, compute the reciprocal of 
the value, and output the reciprocal, but the code contains errors. Find and 
fix the errors.

Ex: If the input is 0.900, then the output is:

The reciprocal of current = 1 / 0.900 = 1.111

*/

// Level 1
#include <iomanip>
#include <iostream>

using namespace std;

int main () {

    double lengthSecs       ;
    double  lengthMins      ;

    cin >> lengthSecs       ;

    lengthMins = lengthSecs / 60;

    cout
        << fixed
        << setprecision(3)
        << lengthMins
        << " minutes"
        << endl
    ;

    return 0;

}

// Level 3

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
   double volOunces;
   double volPints;
   
   cin >> volOunces;
   
   volPints = volOunces / 16;

   cout
      << "16 fluid ounces = 1 pint"
      << endl
      << fixed
      << setprecision(1)
      << volOunces
      << " fluid ounces = "
      << setprecision(5)
      << volPints
      << " pints"
      << endl
   ;
   
   return 0;
}
```

**2.8 Scientific notation for floating-point literals**

Scientific notation is useful for representing floating-point numbers that are much greater than or much less than 0, such as 6.02 x 1023. A floating-point literal using scientific notation is written using an e preceding the power-of-10 exponent, as in 6.02e23 to represent 6.02 x 1023. The e stands for exponent. Likewise, 0.001 is 1 x 10-3 and can be written as 1.0e-3. For a floating-point literal, good practice is to make the leading digit non-zero.

```cpp
// Figure 2.8.1: Calculating atoms of gold.

int main () {

    double avogadrosNumber  = 6.02e23   ;
    double gramsPerMole     = 196.9665  ;

    double gramsGold;
    double atomsGold;

    cout << "Enter grams of gold: " ;
    cin  >> gramsGold               ;

    atomsGold = gramsGold / gramsPerMoleGold * avogadrosNumber;

    cout 
        << gramsGold 
        << " grams of gold contains "
    ;
    
    cout 
        << atomsGold 
        << " atoms" 
        << endl
    ;

    return 0;

}
```

participation activity
2.8.1: Scientific notation.
1)
Type 1.0e-4 as a floating-point literal with a single digit before and four digits after the decimal point. Note: Do not use scientific notation.
0.0001

Check

Show answer
Correct
0.0001
The e-4 shifts the decimal point four places to the left.
2)
Type 7.2e-4 as a floating-point literal with a single digit before and five digits after the decimal point. Note: Do not use scientific notation.
0.00072

Check

Show answer
Correct
0.00072
The e-4 shifts the decimal point four places to the left.
3)
Type 540,000,000 as a floating-point literal using scientific notation with a single digit before and after the decimal point.
5.4e8

Check

Show answer
Correct
5.4e8
Represents 5.4x108.
4)
Type 0.000001 as a floating-point literal using scientific notation with a single digit before and after the decimal point.
1.0e-6

Check

Show answer
Correct
1.0e-6
Represents 1.0x10-6. Note: Although 0.1e-5 is also correct, good practice is to start with a non-zero digit.
5)
Type 623.596 as a floating-point literal using scientific notation with a single digit before and five digits after the decimal point.
6.23596e2

Check

Show answer
Correct
6.23596e2
The e2 shifts the decimal two places to the right, thus adjusting 6.23596 into the desired 623.596.

```cpp
/*

2.8.2: Acceleration of gravity.

Compute the acceleration of gravity for a given distance from the earth's 
center, distCenter, assigning the result to accelGravity. The expression for 
the acceleration of gravity is: (G * M) / (d2), where G is the gravitational 
constant 6.673 x 10-11, M is the mass of the earth 5.98 x 1024 (in kg) and d 
is the distance in meters from the earth's center (stored in variable 
distCenter). Note: Assume distance is at least the radius of the earth.

*/

#include <iostream>

using namespace std;

int main () {

   double G = 6.673e-11;
   double M = 5.98e24;

   double accelGravity;
   double distCenter;

   cin >> distCenter;

   // (G * M) / (d^2) 
    accelGravity = 
        ( G * M ) 
        / ( distCenter * distCenter )
    ;

   cout << accelGravity << endl;

   return 0;

}

```

**2.9 Constant variables**

A good practice is to minimize the use of literal numbers in code. One reason 
is to improve code readability. newPrice = origPrice - 5 is less clear than 
newPrice = origPrice - priceDiscount. When a variable represents a literal, 
the variable's value should not be changed in the code. If the programmer 
precedes the variable declaration with the keyword const, then the compiler 
will report an error if a later statement tries to change that variable's value. 
An initialized variable whose value cannot change is called a constant variable. 
A common convention, or good practice, is to name constant variables using upper
case letters with words separated by underscores, to make constant variables
clearly visible in code.

```cpp
// Figure 2.9.1: Constant variable example: lightning distance

#include <iostream>

using namespace std;

int main () {

    const double SPEED_OF_SOUND     = 761.207   ;
    const double SECONDS_PER_HOUR   = 3600.0    ;

    double secondsBetween   ;
    double timeInHours      ;
    double distInMiles      ;

    cout << "Enter seconds between lightning and thunder: " ;
    cin  >> secondsBetween                                  ;

    timeInHours = secondsBetween / SECONDS_PER_HOUR ;
    distInMiles = SPEED_OF_SOUND * timeInHours      ;

    cout 
        << "Lightning strike was approximately"
        << endl
    ;

    cout
        << distInMiles
        << " miles away."
        << endl
    ;

    return 0;

}

```

Participation Activity - 2.9.1: Constant variables

int STEP_SIZE = 5;
Correct
Declares and initializes an int variable, but the variable is not a constant.
2)
const int STEP_SIZE = 14;
Correct
Declares a constant int variable STEP_SIZE and initializes the constant with the value 14.
3)
totalStepHeight = numSteps * STEP_SIZE;
Correct
Constant variables can be used in expressions just like other variables.
4)
STEP_SIZE = STEP_SIZE + 1;
Correct
Results in a compilation error. Constant variables cannot be changed within assignment statements.

**2.10 Using math functions**

**Basics**

Some programs require math operations beyond +, -, *, /, like computing a square root. A standard math library has about 20 math operations, known as functions. A programmer can include the library and then use those math functions.

A function is a list of statements executed by invoking the function's name, such invoking is known as a function call. Any function input values, or arguments, appear within ( ), separated by commas if more than one. Below, function sqrt is called with one argument, areaSquare. The function call evaluates to a value, as in sqrt(areaSquare) below evaluating to 7.0, which is assigned to sideSquare.

Table 2.10.1: A few common math functions from the math library.
Function	Behavior	Example
sqrt(x)	Square root of x	sqrt(9.0) evaluates to 3.0.
pow(x, y)	Power: 
pow(6.0, 2.0) evaluates to 36.0.
fabs(x)	Absolute value of x	fabs(-99.5) evaluates to 99.5.

**Example: Mass growth**

The example below computes the growth of a biological mass, such as a tree. If the growth rate is 5% per year, the program computes 1.05 raised to the number of years. A similar program could calculate growth of money given an interest rate.

```cpp
// Figure 2.10.1: Math function example: Mass growth.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double initMass;   // Initial mass of a substance
   double growthRate; // Annual growth rate
   double yearsGrow;  // Years of growth
   double finalMass;  // Final mass after those years

   cout << "Enter initial mass: ";
   cin  >> initMass;

   cout << "Enter growth rate (Ex: 0.05 is 5%/year): ";
   cin  >> growthRate;

   cout << "Enter years of growth: ";
   cin  >> yearsGrow;

   finalMass = initMass * pow(1.0 + growthRate, yearsGrow);
   // Ex: Rate of 0.05 yields initMass * 1.05^yearsGrow

   cout << "Final mass after " << yearsGrow
        << " years is: " << finalMass << endl;

   return 0;
}
```

Enter initial mass: 10000
Enter growth rate (Ex: 0.05 is 5%/year): 0.06
Enter years of growth: 20
Final mass after 20 years is: 32071.4

**Calls in arguments**

Commonly a function call's argument itself includes a function call. Below, 
 is computed via pow(x, y). The result is used in an expression that is an argument to another call, in this case to pow() again: pow(2.0, pow(x, y) + 1).

```cpp
Upon execution, if x = 3.0 and y = 2.0, then pow(x, y) is called and evaluates to 9.0. Next, pow(2.0, 9.0+1) is called, yielding 1024.0. 
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
   double x;
   double y;
   double z;
 
   x = 3.0;
   y = 2.0;
   z = pow(2.0, pow(x, y) + 1);
 
   return 0;
}
```

**cmath and cstdlib**

The "c" in cmath indicates that the library comes from a C language library.

Some math functions for integers are in a library named cstdlib, requiring: #include <cstdlib>. Ex: abs() computes the absolute value of an integer.

**Division: Divide by 0**

For integer division, the second operand of / or % must never be 0, because division by 0 is mathematically undefined. A **divide-by-zero error** occurs at runtime if a divisor is 0, causing a program to terminate. A divide-by-zero error is an example of a runtime error, a severe error that occurs at runtime and causes a program to terminate early. In the example below, the program terminates and outputs the error message "Floating point exception" when the program attempts to divide by daysPerYear, which is 0.

**Modulo (%)**

The basic arithmetic operators include not just +, -, *, /, but also %. The modulo operator (%) evaluates the remainder of the division of two integer operands. Ex: 23 % 10 is 3.

Examples:

9 % 5 is 4. Reason: Since 9 = 5 * 1 + 4, the integer division 9 / 5 results in 1, and the remainder is 4.
70 % 7 is 0. Reason: 70 / 7 is 10 with remainder 0.
1 % 2 is 1. Reason: 1 / 2 is 0 with remainder 1.
10 % 4.0 is not valid. "Remainder" only makes sense for integer operands.

Modulo examples
Modulo has several useful applications. Below are just a few.

**Example 2.11.1: Random number in range.**

Given a random number randNum, % can generate a random number within a range:

randNum % 10
Yields 0 - 9: Possible remainders are 0, 1, ..., 8, 9. Remainder 10 is not possible: Ex: 19 % 10 is 9, but 20 % 10 is 0.
randNum % 51
Yields 0 - 50: Note that % 50 would yield 0 - 49.
(randNum % 9) + 1
Yields 1 - 9: The % 9 yields 9 possible values 0 - 8, so the + 1 yields 1 - 9.
(randNum % 11) + 20
Yields 20 - 30: The % 11 yields 11 possible values 0 - 10, so the + 20 yields 20 - 30.

**Example 2.11.2: Getting digits.**

Given a number, % and / can be used to get each digit. For a 3-digit number userVal like 927:

onesDigit     = userVal % 10;    // Ex: 927 % 10 is 7. 
tmpVal        = userVal / 10;

tensDigit     = tmpVal % 10;     // Ex: tmpVal = 927 / 10 is 92. Then 92 % 10 is 2.
tmpVal        = tmpVal / 10;

hundredsDigit = tmpVal % 10;     // Ex: tmpVal = 92 / 10 = 9. Then 9 % 10 is 9.


**Example 2.11.3: Get prefix of a phone number.**

Given a 10-digit phone number stored as an integer, % and / can be used to get any part, such as the prefix. For phoneNum = 1365551212 (whose prefix is 555):

tmpVal = phoneNum / 10000; // / 10000 shifts right by 4, so 136555. 
prefixNum = tmpVal % 1000; // % 1000 gets the right 3 digits, so 555.
Dividing by a power of 10 shifts a value right. 321 / 10 is 32. 321 / 100 is 3.

% by a power of 10 gets the rightmost digits. 321 % 10 is 1. 321 % 100 is 21.

**2.12 - Type Conversions**

**Type conversions**

A calculation sometimes must mix integer and floating-point numbers. For example, given that about 50.4% of human births are males, then 0.504 * numBirths calculates the number of expected males in numBirths births. If numBirths is an int variable (int because the number of births is countable), then the expression combines a floating-point and integer.

A type conversion is a conversion of one data type to another, such as an int to a double. The compiler automatically performs several common conversions between int and double types, such automatic conversions are known as implicit conversion.

For an arithmetic operator like + or *, if either operand is a double, the other is automatically converted to double, and then a floating-point operation is performed.
For assignments, the right side type is converted to the left side type.
int-to-double conversion is straightforward: 25 becomes 25.0.

double-to-int conversion just drops the fraction: 4.9 becomes 4.

**Assigning doubles with integer literals**

Because of implicit conversion, statements like double someDoubleVar = 0; or someDoubleVar = 5; are allowed, but discouraged. Using 0.0 or 5.0 is preferable.

**Type casting**

A programmer sometimes needs to explicitly convert an item's type. Ex: If a program needs a floating-point result from dividing two integers, then at least one of the integers needs to be converted to double so floating-point division is performed. Otherwise, integer division is performed, evaluating to only the quotient and ignoring the remainder. A **type cast** explicitly converts a value of one type to another type.

The **static_cast** operator (static_cast<type>(expression)) converts the expression's value to the indicated type. Ex: If myIntVar is 7, then static_cast<double>(myIntVar) converts int 7 to double 7.0.

The program below casts the numerator and denominator each to double so floating-point division is performed (actually, converting only one would have worked).

```cpp

// Figure 2.12.1: Using type casting to obtain floating-point division

#include <iostream>

using namespace std;

int main () {

    int kidsInFamily1   ;
    int kidsInFamily2   ;
    int numFamilies     ;

    double avgKidsPerFamily;

    kidsInFamily1 = 3   ;
    kidsInFamily2 = 4   ;
    numFamilies   = 2   ;

    avgKidsPerFamily = static_cast<double>(kidsInFamily1 + kidsInFamily2)
                        / static_cast<double>(numFamilies)
    ;

    cout << 
        "Average kids per family: " 
        << avgKidsPerFamily 
        << endl
    ;

    return 0;

}

```

**Common errors**

A **common error** is to accidentally perform integer division when floating-point division was intended. The program below undesirably performs integer division rather than floating-point division.

```cpp

// Figure 2.12.2: Common error: Forgetting cast results in integer division

#include <iostream>

using namespace std;

int main () {

    int kidsInFamily1   ;
    int kidsInFamily2   ;
    int numFamilies     ;

    double avgKidsPerFamily;

    kidsInFamily1 = 3   ;
    kidsInFamily2 = 4   ;
    numFamilies   = 2   ;

    avgKidsPerFamily = (
            kidsInFamily1 
            + kidsInFamily2
        )
        / 
        numFamilies
    ;

    cout << 
        "Average kids per family: " 
        << avgKidsPerFamily 
        << endl
    ;

    return 0;

}

```

***Another common error is to cast the entire result of integer division, rather than the operands, thus not obtaining the desired floating-point division.***


Q: What doesn't yield 3.75?

`static_cast<double>(15/4);`


**Challenge Activity: 2.12.2: Type conversions.**

```cpp

#include <iostream>
using namespace std;

int main() {
   const int TABLESPOONS_PER_CUP = 16;
   double numCups;
   int numTablespoons;

   cin >> numCups;

   numTablespoons = static_cast<double>(numCups) * TABLESPOONS_PER_CUP;

   cout << numTablespoons << " tablespoons" << endl;

   return 0;
}

// Type conversions challenge 3
/*

    Integers artGrade, mathGrade, musicGrade, and numGrades are read 
    from input. Compute the average grade using floating-point division 
    and assign the result to averageGrade.

    Ex: If the input is 54 57 77 3, then the output is:

    62.67

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int artGrade;
	int mathGrade;
	int musicGrade;
    int numGrades;

    double averageGrade;

    cin >> artGrade;
    cin >> mathGrade;
	cin >> musicGrade;
    cin >> numGrades;

   averageGrade = (artGrade + mathGrade + musicGrade) / static_cast<double>(numGrades);

   cout << fixed << setprecision(2) << averageGrade << endl;

   return 0;

}

```

## 2.13 Binary

Normally, a programmer can think in terms of base ten numbers. However, a compiler must allocate some finite quantity of bits (e.g., 32 bits) for a variable, and that quantity of bits limits the range of numbers that the variable can represent. Thus, some background on how the quantity of bits influences a variable's number range is helpful.

Because each memory location is composed of bits (0s and 1s), a processor stores a number using base 2, known as a ***binary number***.

For a number in the more familiar base 10, known as a ***decimal number***, each digit must be 0-9 and each digit's place is weighed by increasing powers of 10.

In **base 2**, each digit must be 0-1 and each digit's place is weighed by increasing powers of 2.

The compiler translates decimal numbers into binary numbers before storing the number into a memory location. The compiler would convert the decimal number 212 to the binary number 11010100, meaning 1*128 + 1*64 + 0*32 + 1*16 + 0*8 + 1*4 + 0*2 + 0*1 = 212, and then store that binary number in memory.

```
Convert binary 00001111 to a decimal number

00001111

0 * 128
0 * 64
0 * 32
0 * 16
1 * 8
1 * 4
1 * 2
1 * 1
  = 15

10001000

1 * 128
0 * 64
0 * 32
0 * 16
1 * 8
0 * 4
0 * 2
0 * 1
  = 136

number 17 to the binary number

0000 0000
0001 0001

51 to binary

0 * 128
0 * 64
1 * 32
1 * 16
0 * 8
0 * 4
1 * 2
1 * 1
  = 51

```

## 2.14 Characters

Basics
A variable of char type, as in char myChar;, can store a single character like the letter m. A character literal is surrounded with single quotes, as in myChar = 'm';.

```cpp

// Figure 2.14.1: Simple char example: Arrow.

#include <iostream>

using namespace std;

int main () {

    char arrowBody;
    char arrowHead;

    arrowBody = "-";
    arrowHead = ">";

    cout
        << arrowBody
        << arrowBody
        << arrowhead
        << endl
    ;

    arrowBody = 'o';

    cout
        << arrowBody
        << arrowBody
        << arrowBody
        << arrowhead
        << endl
    ;

    return 0;

}

```

**Getting a character from input**

`cin` can be used to get one character from input. Ex:  cin >> myChar;.

```cpp

#include <iostream>

using namespace std;

int main () {

    char bodyChar;
    char headChar;

    cout << "Type two characters: " ;
    cin  >> bodyChar                ;
    cin  >> headChar                ;

    cout
        << bodyChar
        << bodyChar
        << bodyChar
    ;

    cout
        << headChar
        << endl
    ;

    return 0;

}
```

**A character is internally stored as a number**

Under the hood, a char variable stores a number. Ex: 'a' is stored as 97. In an output statement, the compiler outputs the number's corresponding character.

**ASCII** is an early standard for encoding characters as numbers. The following table shows the ASCII encoding as a decimal number (Dec) for common printable characters (for readers who have studied binary numbers, the table shows the binary encoding also). Other characters such as control characters (e.g., a "line feed" character) or extended characters (e.g., the letter "n" with a tilde above it as used in Spanish) are not shown. Source: http://www.asciitable.com/.

**Image of ASCII Conversions**

![alt text](image-1.png)

**Escape sequences**

In addition to regular characters like Z, $, or 5, character encoding includes numbers for several special characters. Ex: A newline character is encoded as 10. Because no visible character exists for a newline, the language uses an **escape sequence**: A two-character sequence starting with \ that represents a special character. Ex: '\n' represents a newline character. Escape sequences also enable representing characters like ', ", or \. Ex: myChar = '\'' assigns myChar with a single-quote character. myChar = '\\' assigns myChar with \ (just '\' would yield a compiler error, since \' is the escape sequence for ', and then a closing ' is missing).

Table 2.14.2: Common escape sequences

![alt text](image-2.png)

**Common errors**

A common error is to use double quotes rather than single quotes around a character literal, as in myChar = "x", yielding a compiler error.

Similarly, a common error is to forget the quotes around a character literal, as in myChar = x, usually yielding a compiler error (unless x is also a declared variable, then perhaps yielding a logic error).

challenge activity - 2.14.1: Outputting all combinations

```cpp

#include <iostream>

using namespace std;

int main () {

    char let1;
    char let2;
    char let3;

    // let1 = a
    cin >> let1;
    // let2 = b
    cin >> let2;
    // let3 = c
    cin >> let3;

    // ABC
    cout 
        << let1 
        << let2 
        << let3
        ;
    
    // ACB
    cout
        << " "
        << let1
        << let3
        << let2
    ;

    cout
        << " "
        << let2
        << let1
        << let3
    ;

    cout
        << " "
        << let2
        << let3
        << let1
    ;

    cout
        << " "
        << let3
        << let1
        << let2
    ;

    cout 
        << " "
        << let3
        << let2
        << let1
    ;

    cout 
        << endl
    ;

    return 0;

}

```

**Challenge Activity 2.14.2: Printing message with ints and chars**

```cpp

/*
Print a message telling a user to press the letterToQuit key numPresses times 
to quit. End with newline. Ex: If letterToQuit = 'q' and numPresses = 2, print:
*/

#include <iostream>

using namespace std;

int main () {

    char letterToQuit   ;
    int  numPresses     ;

    cin >> letterToQuit                         ;
    cin >> numPresses                           ;

    

    return 0;

}


```

## 2.15 Strings

**Strings and string literals**

A string is a sequence of characters. A string literal surrounds a character sequence with double quotes, as in "Hello", "52 Main St.", or "42", vs. an integer literal like 42 or character literal like 'a'. Various characters may be in a string, such as letters, numbers, spaces, or symbols like $ or %, as in "$100 for Julia!!". Earlier sections showed string literals being output, as in: cout << "Hello";.

**String variables and assignments**

Some variables should hold a string. A string data type isn't built into C++ like char, int, or double, but is available in the standard library and can be used after adding: #include <string>. A programmer can then declare a string variable as: string firstName;.

A programmer can assign a string just as for other types. Ex: str1 = "Hello", or str1 = str2. The string type automatically reallocates memory for str1 if the right-side string is larger or smaller, and then copies the characters into str1.

A programmer can initialize a string variable during declaration: string firstMonth = "January";. Otherwise, a string variable is automatically initialized to an empty string "".

```cpp
// Figure 2.15.1: Declaring and assigning a string.
#include <iostream>
#include <string>
using namespace std;
 
int main() {

   string sentenceSubject;
   string sentenceVerb;
   string sentenceObject = "an apple";

   sentenceSubject = "boy";
   sentenceVerb = "ate";

   cout << "A ";
   cout << sentenceSubject << " ";
   cout << sentenceVerb << " ";
   cout << sentenceObject << "." << endl;
 
   return 0;
}
```

**Getting a string without whitespaces from input**

A whitespace character is a character used to represent horizontal and vertical spaces in text, and includes spaces, tabs, and newline characters. Ex: "Oh my goodness!" has two whitespace characters, one between h and m, the other between y and g.

Below shows the basic approach to get a string from input into variable userString. The approach automatically skips initial whitespace, then gets characters until the next whitespace is seen.

**Example: Word game**

The following example illustrates getting strings from input and putting strings to output.

Figure 2.15.2: Strings example: Word game.

```cpp
#include <iostream>
#include <string>     // Supports use of "string" data type
using namespace std;

/* A game inspired by "Mad Libs" where user enters nouns,
 * verbs, etc., and then a story using those words is output.
 */

int main() {
   string wordRelative;
   string wordFood;
   string wordAdjective;
   string wordTimePeriod;

   // Get user's words
   cout << "Type input without spaces." << endl;

   cout << "Enter a kind of relative: " << endl;
   cin  >> wordRelative;

   cout << "Enter a kind of food: " << endl;
   cin  >> wordFood;

   cout << "Enter an adjective: "   << endl;
   cin  >> wordAdjective;

   cout << "Enter a time period: "  << endl;
   cin  >> wordTimePeriod;

   // Tell the story
   cout << endl;
   cout << "My " << wordRelative << " says eating " << wordFood << endl;
   cout << "will make me more " << wordAdjective << "," << endl;
   cout << "so now I eat it every " << wordTimePeriod << "." << endl;

   return 0;
}
```

**Getting a string with whitespace from input**

Sometimes a programmer wishes to get whitespace characters into a string, such as getting a user's input of the name "Franklin D. Roosevelt" into a string variable presidentName.

For such cases, the language supports getting an entire line into a string. The function **getline**(cin, stringVar) gets all remaining text on the current input line, up to the next newline character (which is removed from input but not put in stringVar).

It will get leading spaces as well.

**Example: Getting multi-word names**

```cpp
//Figure 2.15.3: Reading an input string containing spaces using getline.
#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName;
   string lastName;

   cout << "Enter first name:" << endl;
   getline(cin, firstName); // Gets entire line up to ENTER

   cout << "Enter last name:" << endl;
   getline(cin, lastName); // Gets entire line up to ENTER

   cout << endl;
   cout << "Welcome " << firstName << " " << lastName << "!" << endl;
   cout << "May I call you " << firstName << "?" << endl;

   return 0;
}
```
Results;

```

Welcome Michael Maguire!
May I call you Michael?
```

**Mixing cin and getline**

Mixing cin >> and getline() can be tricky, because cin >> leaves the newline in the input, while getline() does not skip leading whitespace.

![Mixing cin and getline()](image-3.png)

![Activity 2.15.8 - Getting strings without and with whitespace](image-4.png)

![Activity 2.15.8 - Getting strings without and with whitespace](image-5.png)

```cpp

// challenge activity
// 2.15.2: Strings.

// String variables myName and locationName are read from input. Use variables myName, locationName, and verbDescription to output the following. End with a newline.

// Ex: If the input is Dax Latvia, then the output is:

// Dax wants to go to Latvia.

#include <iostream>
#include <string>

using namespace std;

int main() {

   string myName                            ;
   string locationName                      ;
   string verbDescription = "wants to go to";

   cin >> myName        ;
   cin >> locationName  ;

   getline(
        cin
        , myName
        )
    ;
   
   cout <<
        verbDescription
    ;

    getline(
        cin,
        locationName
        )
    ;

   return 0;

}

```

![How cline can work](image-6.png)

```cpp

// Challenge Activity - 2.15.2 - Strings

// Level 1
#include <iostream>
#include <string>

using namespace std;

int main() {

    string myName       ;
    string locationName ;

    cin >> myName       ;
    cin >> locationName ;

    cout 
        << myName
        << " has been to "
        << locationName
        << "."
        << endl
    ;

return 0;

}

// Level 2

#include <iostream>
#include <string>
using namespace std;

int main() {

   string favoriteColor1;
   string favoriteColor2;

   cin >> favoriteColor1    ;
   cin >> favoriteColor2    ;

   cout << "Favorite colors: " << favoriteColor1 << ", " << favoriteColor2 << endl;

   return 0;

}

// Level 3

#include <iostream>
#include <string>
using namespace std;

int main() {

    string userName     ;
    string birthPlace   ;

    getline(cin, userName)  ;
    getline(cin, birthPlace);

    cout << userName << endl;
    cout << birthPlace << endl;

   return 0;

}

```

## 2.16 Integer overflow

An integer variable cannot store a number larger than the maximum supported by the variable's data type. An **overflow** occurs when the value being assigned to a variable is greater than the maximum value the variable can store.

A common error is to try to store a value greater than about 2 billion into an int variable. For example, the decimal number 4,294,967,297 requires 33 bits in binary, namely 100000000000000000000000000000001 (we chose the decimal number for easy binary viewing). Trying to assign that number into an int results in overflow. The 33rd bit is lost and only the lower 32 bits are stored, namely 00000000000000000000000000000001, which is decimal number 1.

hrsUploadedTotal is a variable of type int.

Assigning a value greater than the maximum value the variable can store results in overflow. The leftmost bit is lost, so hrsUploadedTotal actually stores a value of 1.

Declaring the variable of type long long, (described in another section) which uses at least 64 bits, would solve the above problem. But even that variable could overflow if assigned a large enough value.

Most compilers detect when a statement assigns to a variable a literal constant so large as to cause overflow. The compiler may not report a syntax error (the syntax is correct), but may output a compiler warning message that indicates a potential problem. A GNU compiler outputs the message "warning: overflow in implicit constant conversion", and a Microsoft compiler outputs "warning: '=': truncation of constant value". Generally, good practice is for a programmer to not ignore compiler warnings.

A common source of overflow involves intermediate calculations. Given int variables num1, num2, num3 each with values near 1 billion, (num1 + num2 + num3) / 3 will encounter overflow in the numerator, which will reach about 3 billion (max int is around 2 billion), even though the final result after dividing by 3 would have been only 1 billion. Dividing earlier can sometimes solve the problem, as in (num1 / 3) + (num2 / 3) + (num3 / 3), but programmers should pay careful attention to possible implicit type conversions.

**zyDE 2.16.1: long long variables.**

Run the program and observe that the output is as expected. Replicate the multiplication and printing three more times, and observe incorrect output due to overflow. Change num's type to long long, and observe the corrected output.

```cpp

#include <iostream>
using namespace std;

int main() {
   // int num;
   long num;

   num = 100;
   num = num * 100;
   cout << "num: " << num << endl;

   num = num * 100;
   cout << "num: " << num << endl;

   num = num * 100;
   cout << "num: " << num << endl;

   return 0;
}


```

![Participation Activity 2.16.2: Overflow](image-7.png)

## 2.17 Numeric data types

int and double are the most common numeric data types. However, several other numeric types exist. The following table summarizes available integer numeric data types.

The size of integer numeric data types can vary between compilers, for reasons beyond our scope. The following table lists the sizes for numeric integer data types used in this material along with the minimum size for those data types defined by the language standard.

![Table 2.17.1: Integer numeric data types](image-8.png)

int is the most commonly used integer type. Although the language-defined standard for int is 16 bits, some systems use 32 bits. Likewise, although the language-defined standard for long is 32 bits, some systems use 64 bits.

**long long** is used for integers expected to exceed about 2 billion. That is not a typo; the word appears twice.

In case the reader is wondering, the language does not have a simple way to print numbers with commas. So if x is 8000000, printing 8,000,000 is not trivial.

A common error made by a program's user is to input the wrong type, such as inputting a string like twenty (rather than 20) when the input statement was cin >> myInt; where myInt is an int, which can cause strange program behavior.

short is rarely used. One situation is to save memory when storing many (e.g., tens of thousands) of smaller numbers, which might occur for arrays (another section). Another situation is in embedded computing systems having a tiny processor with little memory, as in a hearing aid or TV remote control. Similarly, char, while technically a number, is rarely used to directly store a number, except as noted for short.

![Participation Activity 2.17.1: Integer types](image-9.png)

![Table 2.17.2: Floating-point numeric data types.](image-10.png)

The compiler uses one bit for sign, some bits for the mantissa, and some for the exponent. Details are beyond our scope. The language (unfortunately) does not actually define the number of bits for float and double types, but the above sizes are very common.

float is typically only used in memory-saving situations, as discussed above for short.

Due to the fixed sizes of the internal representations, the mantissa (e.g, the 6.02 in 6.02e23) is limited to about 7 significant digits for float and about 16 significant digits for double. So for a variable declared as double pi, the assignment pi = 3.14159265 is OK, but pi = 3.14159265358979323846 will be truncated.

A variable cannot store a value larger than the maximum supported by the variable's data type. An overflow occurs when the value being assigned to a variable is greater than the maximum value the variable can store. Overflow with floating-point results in infinity. Overflow with integer is discussed elsewhere.

![Participation activity 2.17.2: Representation of 32-bit floating-point values.](image-11.png)

On some processors, especially low-cost processors intended for "embedded" computing, like systems in an automobile or medical device, floating-point calculations may run slower than integer calculations, such as 100 times slower. Floating-point types are typically only used when really necessary. On more powerful processors like those in desktops, servers, smartphones, etc., special floating-point hardware nearly or entirely eliminates the speed difference.

Floating-point numbers are sometimes used when an integer exceeds the range of the largest integer type.

![2.17.3: Floating-point numeric types.](image-12.png)

## 2.18 Unsigned

Sometimes a programmer knows that a variable's numbers will always be positive (0 or greater), such as when the variable stores a person's age or weight. The programmer can prepend the word "unsigned" to inform the compiler that the integers will always be positive. Because the integer's sign need not be stored, the integer range reaches slightly higher numbers, as follows:

![Table 2.18.1: Unsigned integer data types](image-13.png)

Signed numbers use the leftmost bit to store a number's sign, and thus the largest magnitude of a positive or negative integer is half the magnitude for an unsigned integer. Signed numbers actually use a more complicated representation called two's complement, but that's beyond our scope.

The following example demonstrates the use of unsigned long and unsigned long long variables to convert memory size.

```cpp

// Example use of unsigned

#include <iostream>
using namespace std;

int main() {

   unsigned long memSizeGiB;
   unsigned long long memSizeBytes;
   unsigned long long memSizeBits;
   
   cout << "Enter memory size in GiBs: ";
   cin >> memSizeGiB;
   
   // 1 GiB = 1024 MiB, 1 MiB = 1024 KiB, 1 KiB = 1024 bytes
   memSizeBytes = memSizeGiB * (1024 * 1024 * 1024);
   // 1 byte = 8 bits
   memSizeBits = memSizeBytes * 8;
   
   cout << "Memory size in bytes: " << memSizeBytes << endl;
   cout << "Memory size in bits: " << memSizeBits << endl;
   
   return 0;

}

```

```cpp

#include "testcode.h"  // For code testing purpose
#include <iostream>
using namespace std;

int main() {

   /* Your code goes here */
   unsigned long long ;

   // Assign emailCount with various values. Each unsigned value ends with u
   cout << "Emails exchanged each day: " << endl;

   emailCount = 30050000000100;
   cout << emailCount << endl;

   emailCount = 8300000006500000000u;
   cout << emailCount << endl;

   emailCount = 600000000000u;
   cout << emailCount << endl;

   emailCount = 18446744073709551615u;
   cout << emailCount << endl;

   RunTests();  // Testing code

   return 0;
}

```

## 2.19 Random Numbers

**Generating a random number**

Some programs need to use a random number. Ex: A game program may need to roll dice, or a website program may generate a random initial password.

The rand() function, in the C standard library, returns a random integer each time the function is called, in the range 0 to RAND_MAX.

Figure 2.19.1: Outputting three random integers.

```cpp

#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    cout << "(RAND_MAX: " << RAND_MAX << ")" << endl;

    return 0;

}

```

Line 2 includes the C standard library, which defines the rand() function and RAND_MAX.

RAND_MAX is a machine-dependent value, but is at least 32,767. Above, RAND_MAX is about 2 billion.

Usually, a programmer wants a random integer restricted to a specific number of possible values. The modulo operator % can be used. Ex: integer % 10 has 10 possible remainders: 0, 1, 2, ..., 8, 9.

Each call to rand() returns a random integer between 0 and a large number RAND_MAX.

A programmer usually wants a smaller number of possible values, for which % can be used. % (modulo) means remainder. rand() % 3 has possible remainders of 0, 1, and 2.

Thus, rand() % 3 yields 3 possible values: 0, 1, and 2. Generally, rand() % N yields N possible values, from 0 to N-1.

![Random number basics](image-14.png)

**Specific ranges**

The technique above generates random integers with N possible values ranging from 0 to N-1, like 6 values from 0 to 5. Commonly, a programmer wants a specific range that starts with some value x that isn't 0, like 10 to 15, or -20 to 20. The programmer should first determine the number of values in the range, generate a random integer with that number of possible values, and then add x to adjust the range to start with x.

![2.19.3: Generating random integers in a specific range not starting from 0.](image-15.png)

![Generating random integers in a specific range](image-16.png)

![Generating random integers in a specific range](image-17.png)

![2.19.5: Specific range](image-18.png)

```cpp
// Figure 2.19.2: Randomly moving a student from one seat to another

#include <iostream>
#include <cstdlib>
using namespace std;

// Switch a student
// from a random seat on the left  (cols  1 to 15)
//   to a random seat on the right (cols 16 to 30)
// Seat rows are 1 to 20

int main() {
   int rowNumL;
   int colNumL;
   int rowNumR;
   int colNumR;

   rowNumL = (rand() % 20) + 1;  // 1 to 20
   colNumL = (rand() % 15) + 1;  // 1 to 15

   rowNumR = (rand() % 20) + 1;  // 1 to 20
   colNumR = (rand() % 15) + 16; // 16 to 30

   cout << "Move from ";
   cout << "row " << rowNumL << " col " << colNumL;
   cout << " to " ;
   cout << "row " << rowNumR << " col " << colNumR;
   cout << endl;

   return 0;
}
```

random number library

The <random> number library provides greater control of the random-number generation. Using the library, a programmer may specify the engine used to produce the numbers and the distribution of the numbers. Trivial random-number sequences may still be generated using <cstdlib> library functions srand() and rand().

![2.19.1: Generate a random integer](image-19.png)

```cpp
// 2.19.2: Random numbers
/*
Integer seedVal is read from input. srand() is called with seedVal as the seed. Use rand() to assign variables dataPoint1, dataPoint2, dataPoint3, dataPoint4, and dataPoint5 each with a random number generated between 0 and 26, both inclusive.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   int seedVal;
	int dataPoint1;
	int dataPoint2;
	int dataPoint3;
	int dataPoint4;
	int dataPoint5;
   int sum;

   cin >> seedVal;

   srand(seedVal);

   dataPoint1 = (rand() % 27);
   dataPoint2 = (rand() % 27);
   dataPoint3 = (rand() % 27);
   dataPoint4 = (rand() % 27);
   dataPoint5 = (rand() % 27);

	sum = dataPoint1 + dataPoint2 + dataPoint3 + dataPoint4 + dataPoint5;

	cout << dataPoint1 << endl;
	cout << dataPoint2 << endl;
	cout << dataPoint3 << endl;
	cout << dataPoint4 << endl;
	cout << dataPoint5 << endl;
	cout << "Sum: " << sum << endl;

   return 0;
}

```

**2.20 Debugging**

Debugging is the process of determining and fixing the cause of a problem in a computer program. Troubleshooting is another word for debugging. Far from being an occasional nuisance, debugging is a core programmer task, like diagnosing is a core medical doctor task. Skill in carrying out a methodical debugging process can improve a programmer's productivity.

A common error among new programmers is to try to debug without a methodical process, instead staring at the program, or making random changes to see if the output is improved.

Consider a program that, given a circle's circumference, computes the circle's area. Below, the output area is clearly too large. In particular, if circumference is 10, then radius is 10 / (2 * PI_VAL), so about 1.6. The area is then PI_VAL * 1.6 * 1.6, or about 8, but the program outputs about 775.

```cpp

#include <iostream>
using namespace std;

int main() {
   const double PI_VAL = 3.14159265;

   double circleRadius;
   double circleCircumference;
   double circleArea;
   
   cout << "Enter circumference: ";
   cin  >> circleCircumference;
   
   circleRadius = circleCircumference / 2 * PI_VAL;
   circleArea = PI_VAL * circleRadius * circleRadius;
   
   cout << "Circle area is: " << circleArea << endl;
   
   return 0;
}

```

First, a programmer may predict that the problem is a bad output statement. This prediction can be tested by adding the statement circleArea = 999;. The output statement is OK, and the predicted problem is invalidated. Note that a temporary statement commonly has a "FIXME" comment to remind the programmer to delete this statement.

```cpp
// Figure 2.20.3: Circle area program: Predict problem is bad output.
#include <iostream>
using namespace std;

int main() {
   const double PI_VAL = 3.14159265;

   double circleRadius;
   double circleCircumference;
   double circleArea;
   
   cout << "Enter circumference: ";
   cin  >> circleCircumference;
   
   circleRadius = circleCircumference / 2 * PI_VAL;
   circleArea = PI_VAL * circleRadius * circleRadius;
   
   circleArea = 999; // FIXME delete
   cout << "Circle area is: " << circleArea << endl;
   
   return 0;
}
```

Next, the programmer predicts the problem is a bad area computation. This prediction is tested by assigning the value 0.5 to radius and checking to see if the output is 0.7855 (which was computed by hand). The area computation is OK, and the predicted problem is invalidated. Note that the statement is again marked with a "FIXME" comment to make clear it is temporary.

```cpp
#include <iostream>
using namespace std;

int main() {
   const double PI_VAL = 3.14159265;

   double circleRadius;
   double circleCircumference;
   double circleArea;
   
   cout << "Enter circumference: ";
   cin  >> circleCircumference;
   
   circleRadius = circleCircumference / 2 * PI_VAL;
   
   circleRadius = 0.5; // FIXME delete
   circleArea = PI_VAL * circleRadius * circleRadius;
   
   cout << "Circle area is: " << circleArea << endl;
   
   return 0;
}
```

The programmer then predicts the problem is a bad radius computation. This prediction is tested by assigning PI_VAL to the circumference, and checking to see if the radius is 0.5. The radius computation fails, and the prediction is likely validated. Note that unused code was temporarily commented out.

```cpp
// Figure 2.20.5: Circle area program: Predict problem is bad radius computation.

#include <iostream>
using namespace std;

int main() {
   const double PI_VAL = 3.14159265;

   double circleRadius;
   double circleCircumference;
   double circleArea;
   
   cout << "Enter circumference: ";
   cin  >> circleCircumference;
   
   circleCircumference = PI_VAL;               // FIXME delete
   circleRadius = circleCircumference / 2 * PI_VAL;
   cout << "Radius: " << circleRadius << endl; // FIXME delete

   /*
    circleArea = PI_VAL * circleRadius * circleRadius;
    
    cout << "Circle area is: " << circleArea << endl;
    */
   
   return 0;
}

```

The last test seems to validate that the problem is a bad radius computation. The programmer visually examines the expression for a circle's radius given the circumference, which looks fine at first glance. However, the programmer notices that radius = circumference / 2 * PI_VAL; should have been radius = circumference / (2 * PI_VAL);. The parentheses around the product in the denominator are necessary and represent the desired order of operations. Changing to radius = circumference / (2 * PI_VAL); solves the problem.

The above example illustrates several common techniques used while testing to validate a predicted problem:

Manually set a variable to a value.
Insert print statements to observe variable values.
Comment out unused code.
Visually inspect the code (not every test requires modifying/running the code).
Statements inserted for debugging must be created and removed with care. A common error is to forget to remove a debug statement, such as a temporary statement that manually sets a variable to a value. Including a FIXME comment can help the programmer remember. Another common error is to use /* */ to comment out code that itself contains /* */ characters. The first */ ends the comment before intended, which usually yields a syntax error when the second */ is reached or sooner.

The predicted problem is commonly vague, such as "Something is wrong with the input values." Conducting a general test (like printing all input values) may give the programmer new ideas as to a more-specific predicted problems. The process is highly iterative—new tests may lead to new predicted problems. A programmer typically has a few initial predictions, and tests the most likely ones first.

```cpp

// zyDE 2.20.1: Debugging using a repeated two-step process.
// Use the above repeating two-step process (predict problem, test to validate)
// to find the problem in the following code for the provided input.

#include <iostream>
using namespace std;

int main() {
   int sideLength;
   int cubeVolume;
   
   cout << "Enter cube's side length: " << endl;
   cin >> sideLength;
   
   cubeVolume = sideLength * sideLength * sideLength;
   
   cout << "Cube's volume is: " << cubeVolume << endl;
   
   return 0;
} 

```

![alt text](image-20.png)

**2.21 Auto (since C++11)**

Using the auto specifier

The keyword auto tells the compiler to determine the variable's type using the initial value given. The auto specifier has been supported in all versions of C++ since the release of C++11. Using auto can make variable declaration easier for the programmer when working with complicated data types.

![alt text](image-21.png)

![alt text](image-22.png)

**Printing the type of an auto variable**

During debugging, a programmer may want to see if the compiler has correctly determined an auto variable's type. The typeid operator reports a variable's type. typeid's name() function returns a string describing the variable's type. The type description is implementation-dependent. The g++ compiler uses "d" for double (or const double), "c" for char (or const char), and "i" for integer (or const int). Ex: If variable x is of type int or const int, then typeid(x).name() returns "i".

![2.21.2: typeid reports the type of an auto variable.](image-23.png)

![2.21.3: More about typeid.](image-24.png)

**2.22 Style guidelines**

Each programming team, whether a company, open source project, or a classroom, may have style guidelines for writing code. Below are the style guidelines followed by most code in this material. That style is not necessarily better than any other style. The key is to be consistent in style so that code within a team is easily understandable and maintainable.

You may not have learned all of the constructs discussed below; you may wish to revisit this section after covering new constructs.

![Table 2.22.1: Sample style guide (whitespace)](image-25.png)

![Table 2.22.1: Sample style guide (braces)](image-26.png)

![Table 2.22.1: Sample style guide (naming & miscellaneous)](image-27.png)

**2.23 C++ example: Salary calculation with variables**

Using variables in expressions, rather than numbers like 40, makes a program more general and makes expressions more meaningful when read too.

zyDE 2.23.1: Calculate salary: Generalize a program with variables and input.

The following program uses a variable workHoursPerWeek rather than directly using 40 in the salary calculation expression.

Run the program, observe the output. Change 40 to 35 (France's work week), and run again.
Generalize the program further by using a variable workWeeksPerYear. Run the program. Change 50 to 52, and run again.
Introduce a variable monthlySalary, used similarly to annualSalary, to further improve program readability.

```cpp
#include <iostream>
using namespace std;

int main() {
   int hourlyWage;
   int workHoursPerWeek;
   int annualSalary;

   // TODO: Declare and initialize variable workWeeksPerYear, then replace the 50's below
   int workWeeksPerYear;

   hourlyWage = 20;
   workHoursPerWeek = 40;

   annualSalary = hourlyWage * workHoursPerWeek * 50;
   cout << "Annual salary is: ";
   cout << annualSalary << endl;

   cout << "Monthly salary is: ";
   cout << (hourlyWage * workHoursPerWeek * 50) / 12 << endl;

   return 0;
}
```

```cpp
/*

lab activity
29.4.1: LAB: Warm up: Variables, input, and casting

Full screen
0 / 5
This zyLab activity prepares a student for a larger programming assignment 
(LAB*: Program: Painting a wall).

Program Specifications Write a program that reads and outputs 
variables of different data types. 

Note: This program is designed for incremental development. Complete 
each step and submit for grading before starting the next step. Only a 
portion of tests pass after each step but confirm progress.

Step 1 (2 pts): Read and verify user input.
Prompt the user to input an integer, a double, a character, and a string. 
Store each value into separate variables. Then, output the four values on a 
single line separated by a space. End each prompt with a newline. Submit for 
grading to confirm 2 tests pass.

Ex: If the four values are 99, 3.77, z, and Howdy, the input is:

#include <iostream>
#include <string>      // Supports use of "string" data type
using namespace std;

int main() {
   int    userInt;
   double userDouble;
   // FIXME: Define char and string variables
   
   cout << "Enter integer:" << endl;
   cin  >> userInt;
   
   // FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
   
   // FIXME (2): Output the four values in reverse
   
   // FIXME (3): Cast the double to an integer, and output that integer
   
   return 0;
}

*/

#include <iostream>
#include <string>      // Supports use of "string" data type

using namespace std;

int main() {
   int      userInt         ;
   double   userDouble      ;
    // FIXME: Define char and string variables
   char     userCharacter   ;
   string   userString      ;
   int      userDoubleToInt ;
   

   
   cout << "Enter integer:"             
        << endl
    ;
   cin  >> userInt                      ;
   
   // FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
   
    cout    << "Enter double:"             << endl;
    cin     >> userDouble                  ;

    cout    << "Enter character:"       << endl;
    cin     >> userCharacter            ;

    cout    << "Enter string:"          << endl;
    cin     >> userString               ;

       cout
        << userInt
        << " "
        << userDouble
        << " "
        << userCharacter
        << " "
        << userString
        << endl
    ;

   // FIXME (2): Output the four values in reverse

   cout
        << userString
        << " "
        << userCharacter
        << " "
        << userDouble
        << " "
        << userInt
        << endl
    ;
        
   
   // FIXME (3): Cast the double to an integer, and output that integer
   userDoubleToInt = static_cast<int>(userDouble);
   
    cout
        << userDouble
        << " cast to an integer is "
        << userDoubleToInt
        << endl
    ;

   return 0;

}
```