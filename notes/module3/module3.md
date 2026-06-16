# M3 - Introduction and Agenda

## Introduction to the Module

We are now ready to begin our journey in the second structure of programming languages - branching.

You may be already be familiar with the logic behind if/else statements, but let's explore how C++ approaches these expressions and the syntax needed to make them functional.

## Agenda

Complete the zyBook Reading and Interactive Activities listed in the module.
Once you have completed the Reading and Interactive Activities, complete the Module 3 Lab Assignment in zyBooks.
Using Visual Studio, complete Project 3.
Complete the Module 3 Review Activity by the due date.

# M3 - Topics and Learning Objectives

## Module Topics

Using if/else statements
Detecting ranges
Common errors and fixes
Order of evaluation
switch statements
Boolean data type
String operations
Character operations
Conditional expressions
Short-circuit evaluation
Floating-point comparison

## Module Learning Objectives (MLOs)

The following MLOs support the course learning objectives.
By the end of the module, you will be able to: 

Build programs using the branching and looping control structures.

## M3 Reading and Interactive Activities

### 3.1 If-else branches (general)

**Branch concept**

People familiar with restaurants may be familiar with steering people to different-sized tables based on group size.

1. A restaurant host seats patrons. The host seats a party of 1 at the counter.

2. A party of 2 is seated at a small table. Other-sized parties are seated at a large table.

3. The host mentally executes the algorithm: If party of 1, seat at counter; Else If party of 2, seat at small table; Else seat at large table.

3.1.2: Branch concept.

1. A party of 1 is sat at _____ .

- The host's algorithm starts with: If party of 1, seat at counter.

2. A party of 2 is sat at _____ .

- The host's algorithm is: If not a party of 1, but a party of 2, seat at a small table.

3. A party of 5 is sat _____ .

- In the host's algorithm, if not a party of 1, and not a party of 2, then seat at a large table. Thus, any party that is not of size 1 or 2 gets a large table, so parties of 3, 4, 5, 6, etc. (The algorithm doesn't do anything special for very large parties).

**Branch basics (If)**

In a program, a branch is a sequence of statements only executed under a certain condition. Ex: A hotel may discount a price only for people over age 65. An if branch is a branch taken only IF an expression is true.

3.1.3: Branches: Hotel rate example.

1. A decision leads to two program branches. If the expression is true, the first branch executes. Else, the second branch executes.

2. If userAge is 68, then 68 > 65 is true. So the first branch executes, which discounts hotelRate.

3. Execution rejoins the other branch, and continues with subsequent statements, outputting 135. If userAge were instead 50, the output would be 155.

3.1.4: Branches

Consider the hotel rate example above.

1.  If userAge is 20, does the true or false branch execute?

20 > 65 is false, so the false branch executes.

2. If userAge is 20, does the executed branch update hotelRate?

The false branch has no statements, and thus no update occurs.

3. If userAge is 20, what hotel rate does the program output?

hotelRate is initially 155. The false branch executes, which does not update hotelRate. The final statement thus outputs 155.
4. If userAge is 70, what hotel rate does the program output?

hotelRate is initially 155. The true branch executes because 70 > 65 is true. That branch assigns hotelRate with 155 - 20, or 135. The final statement thus outputs 135.

5. Do the last two statements always execute for any value of userAge?

The decision creates two branches, but those branches rejoin, and proceed to the final two statements. Thus, whether userAge's value causes the true or false branch to execute, in either case execution will proceed to the final two statements.

**If branch example: Absolute value**

The example below shows how an if branch can be used to compute an absolute value of a number.

3.1.6: Example if branch: absolute value

`Start`
`val = get next input`

Branch below

`val < 0`
`if val < 0 then val = -val`
`else continue`

End branch

`put val to output`
`end`

1. If the input is -6, does the branch execute?

- Yes

2.  If the input is 0, does the branch execute?

No

**If-else branches**

An if-else branch has two branches: The first branch is executed IF an expression is true, ELSE the other branch is executed.

In the example below, if a user inputs an age less than 25, the statement insurePrice = 4800 executes. Else, insurePrice = 2200 executes.

**If-elseif-else branches**

Commonly a programmer wishes to take one of multiple (three or more) branches. An if-else can be extended to an if-elseif-else structure. Each branch's expression is checked in sequence; as soon as one branch's expression is found to be true, that branch is taken. If no expression is found true, execution will reach the else branch, which then executes.

Note: The else part is optional. If omitted, then if none of the previous expressions are true, no branch executes.

3.1.12: If-elseif-else

```cpp
// Consider the if-elseif-else structure below:

if x equals -1
     Put "Disagrees" to output
else if x equals 0
     Put "Neutral" to output
else if x equals 1
     Put "Agrees" to output
else
     Put "Invalid entry" to output
```

1. If x is 1, what is output?

When executing, the program first checks if x equals -1, which is false. So the program next checks if x equals 0, which is false. So the program next checks if x equals 1, which is true, so the branch is taken.

2. If x is -2, what is output?

x equals -1 is false, so the first branch is skipped. x equals 0 is false, so the second branch is skipped. x equals 1 is false, so the third branch is skipped. Thus, the else branch is reached, which executes regardless of x's value.

3. Could the programmer have written the three branches in the order x equals 1, x equals 0, and x equals -1, and achieved the same results?

For those particular expressions, the order doesn't matter; only one branch can have a true expression, so that one branch whose expression is true will execute, or the else branch will execute.

4. In the code above, suppose a programmer, after the third branch (x equals 1), inserts a new branch: Else If x equals -1 ... When might that new branch execute?

That branch could never execute, because if x is -1, the first branch will execute, and the latter branches will not be considered. The programmer is making a logic error by inserting such a branch.

5. In the code above, suppose a programmer removed the Else part entirely. If x is 2, which is correct?

A branch only executes if the branch's expression is reached and is true. Each expression is reached, but none is true, so none will execute. Execution will simply proceed to the next statement following the if-elseif structure.

## 3.2 Detecting equal values with branches

**Detecting if two items are equal using an if statement**

A program commonly needs to determine if two items are equal. Ex: If a hotel gives a discount for guests on their 50th wedding anniversary, a program to calculate the discount can check if a variable numYears is equal to the value 50. A programmer can use an if statement to check if two values are equal.

An if statement executes a group of statements if an expression is true. Braces surround the if branch's statements. Braces { }, sometimes redundantly called curly braces, represent a grouping, such as a grouping of statements. Note: { } are braces, [ ] are brackets.

The example below uses ==. The equality operator (==) evaluates to true if the left and right sides are equal. Ex: If numYears is 50, then numYears == 50 evaluates to true. Note the equality operator is ==, not =.

Good practice is to indent a branch's statements, using a consistent number of spaces. This material indents 3 spaces.

```cpp
#include <iostream>

using namespace std;

int main () {

    int hotelRate   ;
    int numYears    ;

    hotelRate = 150;

    cout 
        << "Enter number of years married: "
    ;

    cin 
        >> numYears
    ;

    if (numYears == 50) {

        cout
            << "Congratulations on 50 years "
            << "of marriage!"
            << endl
        ;

        hotelRate = hotelRate / 2;

    }

    cout 
        << "Your hotel rate: "
    ;

    cout 
        << hotelRate
        << endl
    ;

    return 0;

}
```

**Equality and inequality operators**

Whereas the equality operator checks whether two values are equal, the inequality operator (!=) evaluates to true if the left and right sides are not equal, or different.

An expression involving the equality or inequality operators evaluates to a Boolean value. A Boolean is a type that has just two values: true or false.

Table 3.2.1: Equality and inequality operators.
Operator	Description	                        Example (assume x is 3)
==	        a == b means a is equal to b	    x == 3 is true
                                                x == 4 is false
!=	        a != b means a is not equal to b	x != 3 is false
                                                x != 4 is true

**If-else statement**

An if-else statement executes one group of statements when an expression is true, and another group of statements when the expression is false. In the example below, the if-else statement outputs if a number entered by the user is even or odd. The if statement executes if divRemainder is equal to 0, and the else statement executes if divRemainder is not equal to 0.

```cpp
// 3.2.5: If-else statement: determining even or odd
#include <iostream>

using namespace std;

int main () {

    int userNum         ;
    int divRemainder    ;

    cout
        << "Enter a number: "
    ;

    cin
        >> userNum
    ;

    divRemainder = userNum % 2;

    if (divRemainder == 0) {

        cout
            << userNum
            << " is even."
            << endl
        ;

    }
    else {

        cout
            << userNum
            << " is odd."
            << endl
        ;

    }

    return 0;

}
```

**3.2.7: Writing an if-else statement.**

Translate each description to an if-else statement as directly as possible. Use { }. (Not checked, but please indent a branch's statements some consistent number of spaces, such as 3 spaces).

1. If userAge equals 62, assign itemDiscount with 15. Else, assign itemDiscount with 0.

```cpp
if (userAge == 62) {
    itemDiscount = 15;
} else {
    itemDiscount = 0;
}
```

2. If numPeople equals 10, execute groupSize = 2 * groupSize. Otherwise, execute groupSize = 3 * groupSize and numPeople = numPeople - 1.

```cpp
if (numPeople == 10) {
    groupSize = 2 * groupSize   ;
} else {
    groupSize = 3 * groupSize   ;
    numPeople = numPeople -1    ;
}
```

Show answer
3. If numPlayers does not equal 11, execute teamSize = 11. Otherwise, execute teamSize = numPlayers. Then, no matter the value of numPlayers, execute teamSize = 2 * teamSize.

```cpp
if (numPlayers != 11) {
    teamSize = 11           ;
} else {
    teamSize = numPlayers   ;
}
teamSize = 2 * teamSize ;
```

Challenge Activity: Basic if-else

```cpp
// Write an if-else statement for the following:

// If userTickets is not equal to 8, execute awardPoints = 10. Else, execute awardPoints = userTickets.

// Ex: If userTickets is 14, then awardPoints = 10.

#include <iostream>

using namespace std;

int main () {

    int awardPoints;
    int userTickets;

    cin
        >> userTickets
    ;

    if (userTickets != 8) {

        awardPoints = 10;

    } else {

        awardPoints = userTickets;

    }

    cout
        << awardPoints
        << endl
    ;

    return 0;

}

// Write an if-else statement for the following:

// If numDifference is equal to -15, execute totalDifference = -25. Else, execute totalDifference = numDifference.

int main () {

    int totalDifference ;
    int numDifference   ;

    cin
        >> numDifference
    ;

    if ( numDifference == -15 ) {

        totalDifference = -25;

    } else {

        totalDifference = numDifference;

    }

    cout
        << totalDifference
        << endl
    ;

    return 0;

}

```

**Multi-branch if-else statements**

Commonly, a program may need to detect several specific values of a variable. An If-else statement can be extended to have three (or more) branches. Each branch's expression is checked in sequence. As soon as one branch's expression is found to be true, that branch's statements execute (and no subsequent branch is considered). If no expression is true, the else branch executes. The example below detects values of 1, 10, 25, or 50 for variable numYears.

```cpp

// Figure 3.2.1: Multi-branch if-else statement. Only 1 branch will execute.

if (expression1) {
   // Statements that execute when expression1 is true
   // (first branch)
}
else if (expression2) {
   // Statements that execute when expression1 is false and expression2 is true
   // (second branch)
}
else {
   // Statements that execute when expression1 is false and expression2 is false
   // (third branch)
}

```

```cpp

// Figure 3.2.2: Multi-branch if-else example: Anniversaries.

#include <iostream>

using namespace std;

int main () {

   int numYears;

   cout << "Enter number years married: ";
   cin  >> numYears;

   if (numYears == 1) {
      cout << "Your first year -- great!" << endl;
   }
   else if (numYears == 10) {
      cout << "A whole decade -- impressive." << endl;
   }
   else if (numYears == 25) {
      cout << "Your silver anniversary -- enjoy." << endl;
   }
   else if (numYears == 50) {
      cout << "Your golden anniversary -- amazing." << endl;
   }
   else {
      cout << "Nothing special." << endl;
   }

   return 0;

}

```

**Comparing characters, strings, and floating-point types**

The relational and equality operators work for integer, character, and floating-point built-in types.

Comparing characters compares their ASCII numerical encoding.

Floating-point types should not be compared using the equality operators, due to the imprecise representation of floating-point numbers, as discussed in a later section.

The operators can also be used for the string type. Strings are equal if they have the same number of characters and corresponding characters are identical. If string myStr = "Tuesday", then (myStr == "Tuesday") is true, while (myStr == "tuesday") is false because T differs from t.

```cpp
// Challenge activity | 3.2.3: Detect specific values.

// If integer temperatureCelsius is 37, output "Average body temperature". Otherwise, output "Not the average body temperature". End with a newline.

#include <iostream>

using namespace std;

int main () {

    int temperatureCelsius;

    cin
        >> temperatureCelsius
    ;

    if ( temperatureCelsius == 37 ) {

       cout
            << "Average body temperature"
            << endl
        ;

    } else {

        cout
            << "Not the average body temperature"
            << endl
        ;

    }  

    return 0;

}

// If integer numPlayers is:
// 2, output "Duo".
// 3, output "Trio".
// Otherwise, output "Another number of musicians". End with a newline.

int main () {

    int numPlayers;

    cin
        >> numPlayers
    ;

    if ( numPlayers == 2 ) {

       cout
            << "Duo"
            << endl
        ;

    } else if ( numPlayers == 3 ) {

        cout
            << "Trio"
            << endl
        ;

    } else { 

        cout 
            << "Another number of musicians"
            << endl
        ;

    }

    return 0;

}

// If integer numParts is:

// 1, output "Monad".
// 2, output "Dyad".
// 4, output "Tetrad".
// Otherwise, output "Another count of parts". End with a newline.

int main () {

    int numParts;

    cin
        >> numParts
    ;

    if ( numParts == 1 ) {

       cout
            << "Monad"
            << endl
        ;

    } else if ( numParts == 2 ) {

        cout
            << "Dyad"
            << endl
        ;

    } else if ( numParts == 4 ) {

        cout
            << "Tetrad"
            << endl
        ;

    }  
    else { 

        cout 
            << "Another count of parts"
            << endl
        ;

    }

    return 0;

}

```

## 3.3 Detecting ranges with branches (general)**

**Detecting ranges using if-elseif-else**

A common programming task is to detect if a value lies within a certain range and then perform an action depending on where the value lies. Ex: If Timmy is less than 6, he can play pee-wee soccer. If Timmy is between 6 and 17, he can play junior league soccer, and if he's older than 17, he can play professional soccer.

An if-elseif-else structure can detect number ranges with each branch performing a different action for each range. Each expression only needs to indicate the upper range part; if execution reaches an expression, the lower range part is implicit from the previous expressions being false.

participation activity
3.3.3: More ranges with if-elseif-else.
Indicate the range detected by the expression, assuming each question continues a single if-elseif-else structure. Type ranges as: 25 - 29

1. If x > 100 : Branch 1

101 - infinity

The expression detects x greater than 100, so the next larger integer is 101.

2. Else If x > 50 : Branch 2
51 - 100

If execution reaches here, the previous expression x > 100 must be false, meaning x is 100 or less. Coupled with x > 50 (meaning x is at least 51), then the range is 51 - 100.

3. Else
infinity - 50

The previous expression of x > 50 evaluated to false, meaning x is 50 or less. Because x is any integer, the low range end is -infinity, and the high range end is 50. Note that an if-elseif-else structure can be used not just for increasing ranges, but also for decreasing ranges as for this structure.

**Using multi-branch if-else to detect ranges**

The sequential nature of multi-branch if-else statements is useful to detect ranges of numbers. In the following example, the second branch expression is only reached if the first expression is false. So the second branch is taken if userAge < 16 is false (so 16 or greater) AND userAge is < 25, meaning userAge is between 16 - 24 (inclusive).

## 3.4 Detecting ranges with branches

**Relational operators**

A relational operator checks how one operand's value relates to another, like being greater than.

Some operators, like >=, involve two characters. A programmer cannot arbitrarily combine the >, =, and < symbols; only the shown two-character sequences represent valid operators.

![Table 3.4.1: Relational operators](image.png)

**Detecting ranges with if-else statements**

Programmers commonly use the sequential nature of the multi-branch if-else arrangement to detect ranges of numbers. In the following example, the second branch expression is only reached if the first expression is false. So the second branch is taken if userAge < 16 is false (so 16 or greater) AND userAge is < 25, meaning userAge is between 16 - 24 (inclusive).

```cpp
// 3.4.3: Using the sequential nature of multi-branch if-else for ranges: Insurance prices.
#include <iostream>

using namespace std;

int main () {

    int userAge         ;
    int insurancePrice  ;

    cout
        << "Enter your age: "
        << endl
    ;

    cin
        >> userAge
    ;

    if ( userAge < 16 ) {
        
        cout
            << "Too young."
            << endl
        ;

        insurancePrice = 0;

    }
    else if ( userAge < 25 ) { 

        insurancePrice = 4800;

    }
    else if ( userAge < 40 ) {

        insurancePrice = 2350; 

    }
    else { 

        insurancePrice = 2100;
    
    }

    return 0;

}
```

```cpp
// 3.4.2: Basic if-else expressions.

// The second branch outputs "Fewer than or equal to 70" when 
// the value of inVal is less than or equal to 70. Fill in the 
// expression for the first branch that outputs "More than 70".

// Ex: If the input is 72, then the output is: More than 70

#include <iostream>

using namespace std;

int main () {

    int inputVal;

    cin
        >> inputVal
    ;

    if ( inputVal > 70 ) {

        cout
            << "More than 70"
            << endl
        ;

    } else {

        cout 
            << "Fewer than or equal to 70"
            << endl
        ;

    }

    return 0;

}

// Write an if-else statement to output "A foot or more" 
// if the value of measurementInches is greater than or equal to 12. 
// Otherwise, output "Less than a foot". End each output with a newline.

// Ex: If the input is 13, then the output is:

int main () {

    int measurementInches;

    cin
        >> measurementInches
    ;

    if ( measurementInches >= 12 ) {

        cout 
            << "A foot or more"
            << endl
        ;

    } else { 

        cout
            << "Less than a foot"
            << endl
        ;

    }

    return 0;

}

// 3.4.3: Working with branches.
// Integer visitorCount is read from input. 
// If visitorCount is less than 17, then output visitorCount, followed by 
// ": Not enough visitors". 
// End the output with a newline.

int main () {

   int visitorCount;

   cin 
        >> visitorCount
    ;

   if ( visitorCount < 17 ) {
        
        cout
            << visitorCount
            << ": Not enough visitors"
            << endl
        ;

   } 

   return 0;

}

// Integers numItems and boxCapacity are read from input. 
// If numItems is less than or equal to 100, then assign boxCapacity 
// with boxCapacity minus 100.

int main () {

   int numItems;
   int boxCapacity;

   cin 
        >> numItems
    ;

   cin 
        >> boxCapacity
    ;

    if ( numItems <= 100 ) {

        boxCapacity = boxCapacity - 100;

    }

   cout << boxCapacity << endl;

   return 0;

}

// 3.4.3: Working with branches
// Integer visitorCount is read from input. If visitorCount is greater than 
// 13, then output visitorCount, followed by ": Way too many visitors". 
// End the output with a newline.

#include <iostream>

using namespace std;

int main () {

    int visitorCount;

    cin
        >> visitorCount;

    if ( visitorCount > 13 ) {

        cout
            << visitorCount 
            << ": Way too many visitors"
            << endl
        ;

    }

    return 0;

}

// Integers userSalary and companyBudget are read from input. 
// If userSalary is less than or equal to 100000, then assign companyBudget 
// with companyBudget minus 100000.

int main () {

    int userSalary      ; 
    int companyBudget   ;

    cin
        >> userSalary
    ;

    cin
        >> companyBudget
    ;

    if ( userSalary <= 100000 ) {

        companyBudget = companyBudget - 100000;

    }

    cout
        << "companyBudget: "
        << companyBudget
        << endl
    ;


    return 0;

}

// 3.4.4: Working with ranges
// When the input integer variable beverageSize is:
// less than 6, output "Too small".
// between 6 inclusive and 15 exclusive, output "Fine".
// greater than or equal to 15, output "Too large".

int main() {

   int beverageSize;

   cin >> beverageSize;

   if ( beverageSize < 6 ) {

        cout
            << "Too small"
            << endl
        ;

   } else if ( beverageSize <= 15 ) {

        cout
            << "Fine"
            << endl
        ;

   } else {

        cout
            << "Too large"
            << endl
        ;

   }

   return 0;

}

int main() {

   int numPassengers;

    cin 
        >> numPassengers
    ;

   if       ( numPassengers >= 14 ) {

        cout
            << "Group too large"
            << endl
        ;

   } 
   else if  ( numPassengers >= 7 ) {

        cout
            << "Giant van"
            << endl
        ;

   } 
   else if  ( numPassengers > 0 ) {

        cout
            << "Compact van"
            << endl
        ;

   } 
   else {

        cout
            << "Bad input"
            << endl
        ;

   }

   return 0;

}

```

## 3.5 Detecting ranges using logical operators 

**Logical AND, OR, and NOT (general)**

A logical operator treats operands as being true or false, and evaluates to true or false. Logical operators include AND, OR, and NOT. Programming languages typically use various symbols for those operators, but below the words AND, OR, and NOT are used for introductory purposes.

**Detecting ranges with logical operators (general)**

A common use of logical operators is to detect if a value is within a range.

**Logical operators**

Special symbols are used to represent the AND, OR, and NOT logical operators. Logical operators are commonly used in expressions of if-else statements.

Logical operator	Description

- a && b - Logical AND (&&): true when both of its operands are true

- a || b - Logical OR (||): true when at least one of its two operands are true

- !a - Logical NOT (!): true when its one operand is false, and vice-versa.

**Example: TV channels**

A cable TV provider may have regular channels numbered 2-499, and high-definition channels numbered 1002-1499. A program may set a character variable to 's' for standard, 'h' for high-definition, and 'e' for error.

```cpp
// Figure 3.5.1: Detecting ranges: Cable TV channels.
if ((userChannel >= 2) && (userChannel <= 499)) {
   channelType = 's';
}
else if ((userChannel >= 1002) && (userChannel <= 1499)) {
   channelType = 'h';
}
else {
   channelType = 'e';
}
```

**zyDE 3.5.1: Detecting ranges: Cable TV channels.**

Run the program and observe the output. Change the input box value from 3 to another number, and run again.

```cpp
#include <iostream>
using namespace std;

int main() {
   int userChannel;
   char channelType;
   
   cin >> userChannel;
   
   if ((userChannel >= 2) && (userChannel <= 499)) {
      channelType = 's';
   }
   else if ((userChannel >= 1002) && (userChannel <= 1499)) {
      channelType = 'h';
   }
   else {
      channelType = 'e';
   }

   cout << "Channel type: " << channelType << endl;
   
   return 0;

}
```

**Detecting ranges implicitly vs. explicitly**

A programmer often uses logical operators to detect a range by explicitly specifying the high-end and low-end of the range. However, if a program should detect increasing ranges without gaps, a multi-branch if-else statement can be used without logical operators; the low-end of the range is implicitly known upon reaching an expression. Likewise, a decreasing range without gaps has implicitly-known high-ends.

```cpp
// Challenge activity - 3.5.1: Detecting ranges using logical operators
// Modify the given if statement so that "Not a small town" is output if 
// inputSize is outside the range 1200 - 5000 inclusive. Otherwise, 
// "Small town" is output.

#include <iostream>

using namespace std;

int main () {

   int inputSize;

   cin >> inputSize;

   // Modify the following line
   if ( ( inputSize < 1200 ) || ( inputSize > 5000 ) ) {

        cout 
            << "Not a small town" 
            << endl
        ;

   } else {

        cout 
            << "Small town" 
            << endl
        ;

   }

   return 0;

}

// The 29% tax bracket applies to earningsInput in the range 54000 - 76000 
// inclusive. Write an if statement that outputs "Different tax bracket" 
// if the input earningsInput is not in this range. Otherwise, output 
// "29% tax bracket". End each output with a newline.

int main () {

   int earningsInput;

   cin >> earningsInput;

   if ( ( earningsInput >= 54000 ) && ( earningsInput <= 76000 ) ) {
    
        cout
            << "29% tax bracket"
            << endl
        ;

   } else {

        cout
            << "Different tax bracket"
            << endl
        ;

   }

   return 0;

}

// The temperature of tin in degrees Fahrenheit is read from input into 
// integer variable inputTemp. If inputTemp is:

// < 451 degrees Fahrenheit, output "New state: solid".
// ≥ 451 degrees Fahrenheit and < 4533 degrees Fahrenheit, output "New state: liquid".
// Otherwise, output "New state: gas". End each output with a newline.

#include <iostream>

using namespace std;

int main () {

   int inputTemp;

   cin 
        >> inputTemp
    ;

    if ( inputTemp < 451 ) { 

        cout
            << "New state: solid"
            << endl
        ;

    } else if ( ( inputTemp >= 451 ) && ( inputTemp < 4533 ) ) { 

        cout 
            << "New state: liquid"
            << endl
        ;

    } else { 

        cout
            << "New state: gas"
            << endl
        ;

    }

   /* Your code goes here */

   return 0;

}

// If integer yearInput is in the inclusive range:

// 701 - 800, output "The 8th century".
// 801 - 900, output "The 9th century".
// 901 - 1000, output "The 10th century".
// Otherwise, output "Records not available for this input". 
// End each output with a newline.

int main () {

   int yearInput;

   cin 
        >> yearInput
    ;

    if ( ( yearInput >= 701 ) && ( yearInput <= 800 ) ) { 

        cout
            << "The 8th century"
            << endl
        ;

    } else if ( ( yearInput >= 801 ) && ( yearInput <= 900 ) ) { 

        cout 
            << "The 9th century"
            << endl
        ;

    } else if ( ( yearInput >= 901 ) && ( yearInput <= 1000 ) ) { 

        cout 
            << "The 10th century"
            << endl
        ;

    }  else { 

        cout
            << "Records not available for this input"
            << endl
        ;

    }

   return 0;

}

```

**3.6 Detecting ranges with gaps**

**Basic ranges with gaps**

Oftentimes, ranges contain gaps. Ex: Movie theaters often give ticket discounts to children (anyone 12 and under) and seniors (anyone 65 and older). The gap is the group of people aged 13 to 64. An if-else statement can be used to detect such ranges with gaps.

**Ranges with gaps using logical operators**

Programmers often use logical operators to explicitly detect ranges with an upper and lower bound, including ranges with gaps that may have intermediate bounds. Ex: If a valid office number is within the ranges of 100 to 150 or 200 to 250, the logical AND operator can be used to identify the lower and upper bounds of the two ranges. Further, the ranges can be combined into a single branch using the logical OR operator.

```cpp

// 3.6.2: Ranges with gaps.

#include <iostream>

using namespace std;

int main() {

   int ownedApples;

   cin 
        >> ownedApples
    ;  

   if ( ( ownedApples < 11 ) || ( ownedApples > 26 ) ) { 

        cout
            << "Unsatisfactory batch"
            << endl
        ;

   }

   return 0;

}

// Double volumeInMilliliters is read from input representing a volume 
// in milliliters. If the volume is smaller than 15.5 milliliters or 
// bigger than 100.5 milliliters, output "Abandon". Otherwise, output 
// "Authorize". End each output with a newline.

int main() {

   double volumeInMilliliters;
   
   cin >> volumeInMilliliters;

   /* Your code goes here */
   if ( ( volumeInMilliliters < 15.5 ) || ( volumeInMilliliters > 100.5 ) ) { 

        cout
            << "Abandon"
            << endl
        ;

   } else {

        cout
            << "Authorize"
            << endl
        ;

    }

   return 0;

}

// Integer spoonsOrdered is read from input representing 
// the number of spoons. Output:
// "Small bin", if there are 60 - 100 spoons inclusive.
// "Medium bin", if there are 160 - 190 spoons inclusive.
// End each output with a newline.

int main () {

   int spoonsOrdered;

   cin 
        >> spoonsOrdered
    ;  

   if ( ( spoonsOrdered >= 60 ) && ( spoonsOrdered <= 100 ) ) { 

        cout
            << "Small bin"
            << endl
        ;

   } else if ( ( spoonsOrdered >= 160 ) && ( spoonsOrdered <= 190 ) ) {

        cout
            << "Medium bin"
            << endl
        ;

    }
   

   return 0;

}

// Integer napkinsCount is read from input representing the number of napkins. Output:

// "Full carton", if the number of napkins is greater than or equal to 60 and less than 105.
// "Jumbo carton", if the number of napkins is greater than or equal to 135 and less than 185.
// "Select another amount", otherwise.
// End each output with a newline.

int main () {

   int napkinsCount;

   cin >> napkinsCount;  

    if ( ( napkinsCount >= 60 ) && ( napkinsCount < 105 ) ) { 

        cout 
            << "Full carton"
            << endl
        ;

    } else if ( ( napkinsCount >= 135 ) && ( napkinsCount < 185 ) ) { 

        cout 
            << "Jumbo carton"
            << endl
        ;

    }  else { 

        cout
            << "Select another amount"
            << endl
        ;

    }

   return 0;

}

```

**3.7 Detecting multiple features with branches**

**Multiple distinct if statements**

A programmer can use multiple if statements in sequence to detect multiple features with independent actions. Multiple sequential if statements looks similar to a multi-branch if-else statement but has a very different meaning. Each if-statement is independent, and thus more than one branch can execute, in contrast to the multi-branch if-else arrangement.

**Nested if-else statements**

A branch's statements can include any valid statements, including another if-else statement, which are known as nested if-else statements. Nested if statements are commonly used to make decisions that are based on multiple features. Ex: To calculate a discount based on both the number of items purchased and the total cost of those items, one if statement checks the number of items purchased and a nested if statement can check the total cost.

```cpp
// 3.7.2: Detecting multiple features with branches.

// Integer dollars is read from input. Write multiple if statements:
// If dollars is greater than or equal to 13, then output "Buy a hat."
// If dollars is greater than or equal to 30, then output "Buy a new coat."
// If dollars is less than 2, then output "Save money."
// End each output with a newline.

#include <iostream>

using namespace std;

int main () {

   int dollars;

   cin 
        >> dollars
    ;

    if ( dollars >= 13 ) { 

        cout
            << "Buy a hat."
            << endl
        ;

    } 
    
    if ( dollars >= 30 ) { 

        cout
            << "Buy a new coat."
            << endl
        ;

    } 
    
    if ( dollars < 2 ) {

        cout
            << "Save money."
            << endl
        ;

    }

   return 0;

}

/*

Integers numScore1 and numScore2 are read from input. 
Write one if statement and one if-else statement:

If numScore1 is less than 15, then output "numScore1 is less than 15."
If numScore2 is less than or equal to 25, then assign numScore2 with 6.
Otherwise, output "numScore2 is greater than 25."
End each output with a newline.

*/

int main() {

   int numScore1;
   int numScore2;

   cin >> numScore1;
   cin >> numScore2;

    if ( numScore1 < 15 ) {
        
        cout 
            << "numScore1 is less than 15."
            << endl
        ;

    }

    if ( numScore2 <= 25 ) {
        
        numScore2 = 6;

    } else {

        cout
            << "numScore2 is greater than 25."
            << endl
        ;

    }

   cout << "numScore2 is " << numScore2 << "." << endl;

   return 0;
}

/*

Integers numCheesecakes and myMoney are read from input. Each cheesecake costs 9 dollars.

Write the following if-else statement. Within the else branch, write the following assignment and nested if-else statement:

If numCheesecakes is less than 5, output "Please purchase at least 5 cheesecakes".
Otherwise:
Assign variable totalCost with the product of numCheesecakes and 9.
If totalCost is less than or equal to myMoney, then output "Successful purchase".
Otherwise, output "Need more money to purchase all".
End each output with a newline.

*/ 

#include <iostream>
using namespace std;

int main() {
   int numCheesecakes;
   int myMoney;
   int totalCost;

   cin >> numCheesecakes;
   cin >> myMoney;

   if ( numCheesecakes < 5 ) {
    
        cout 
            << "Please purchase at least 5 cheesecakes"
            << endl
        ;

   } else {

        totalCost = numCheesecakes * 9;

        if ( totalCost <= myMoney ) {

            cout
                << "Successful purchase"
                << endl
            ;

        } else {

            cout
                << "Need more money to purchase all"
                << endl
            ;

        }

   }

   return 0;

}


```