#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {

    // Requirement 1

    // Prompt to enter
    // Number of hours of sleep last night (double)
    // Number of cups of coffee consumed (int or double)
    // Number of assignments due this week (int)
    // Hours spent studying  (double)
    // Number of energy drinks consumed (int or double)
    // Numbers of hours worked at job (double)

    double  numHoursSleep       ;
    int     numCupsCoffee       ;
    int     numAssignments      ;
    double  numHoursStudying    ;  
    int     numEnergyDrinks     ;
    double  numHoursWorked      ;

    // Requirement 2
    // Use constants for SLEEP, COFFEE, ASSIGNMENTS, STUDY TIME, ENERGY DRINKS
    // and WORK

    const int POINTSSLEEP       = 15    ;
    const int POINTSCOFFEE      = 5     ;
    const int POINTSASSIGNMENT  = -20   ;
    const int POINSTSTUDYTIME   = 10    ;
    const int POINTSENERGYDRINK = 8     ;
    const int POINTSWORK        = -10   ;

    // Storing calculated values

    double  sleepScore      ;
    double  coffeeScore     ;
    double  assignmentScore ;
    double  studyScore      ;
    double  energyDrinkScore;
    double  workScore       ;
    double  survivalScore   ;


    // Requirement 2
    // Prompt: 
    
    // Hours sleep
    cout
        << "Please enter the number of hours you slept last night: "
        << endl
    ;

    cin >> numHoursSleep    ;

    cout
        << "Please enter the number of cups of coffee you consumed yesterday: "
        << endl
    ;

    cin >> numCupsCoffee    ;

    // Number assignments
    cout
        << "Please enter the number of assignments due for you this week: "
        << endl
    ;

    cin >> numAssignments   ;


    // Number hours spent studying
    cout
        << "Please enter the number of hours you spent studying this week: "
        << endl
    ;

    cin >> numHoursStudying;

    // Number hours spent studying
    cout
        << "Please enter the number of energy drinks you consumed this week: "
        << endl
    ;

    cin >> numEnergyDrinks;

    // Number hours spent working
    cout
        << "Please enter the number of hours you worked this week: "
        << endl
    ;

    cin >> numHoursWorked   ;

    // Requirement 3
    // Compute the following:

    // 1. sleep score          = sleep hours x 15
    // 2. coffee score         = coffee cups x 5
    // 3. assignment score     = assignments x 20
    // 4. study score          = study hours x 10
    // 5. energy drink score   = energy drinks x 8
    // 6. work score           = working hours x 10

    sleepScore          = numHoursSleep     * POINTSSLEEP       ;
    coffeeScore         = numCupsCoffee     * POINTSCOFFEE      ;
    assignmentScore     = numAssignments    * POINTSASSIGNMENT  ;
    studyScore          = numHoursStudying  * POINSTSTUDYTIME   ;
    energyDrinkScore    = numEnergyDrinks   * POINTSENERGYDRINK ;
    workScore           = numHoursWorked    * POINTSWORK        ;

    // Calculate survival score

    survivalScore = 
        sleepScore 
        + coffeeScore 
        + studyScore
        - assignmentScore
        + energyDrinkScore 
        - workScore
    ;
    
    // Format the report

    /*
        Formatting report example:

        =========== Survival Report =============
        Sleep:          6.5 hrs   Score: 97.50
        Coffee:         2 cups    Score: 10.00
        Assignments:    3         Penalty: -60.00
        Study Time:     4 hrs     Score: 40.00
        Energy Drinks:  1         Score: 8.00
        Hours Worked:   5         Penalty: -50.00        
        -----------------------------------------
        TOTAL SURVIVAL SCORE:   45.50

        Optimal results are 100 and above.

        End of results
    */

    // Begin output with formatting

    cout 
        << "=========== Survival Report ============="
        << endl
    ;

    // Sleep output

    cout
        << left
        << setw(15)
        << "Sleep:"
        << numHoursSleep
        << " hrs"
        << right
        // << setw(16)
        << setw(11)
        << "Score: "
        << fixed
        << setprecision(2)
        << sleepScore
        << endl
    ;

    // Coffee output

    cout
        << left
        << setw(15)
        << "Coffee:"
        << numCupsCoffee
        << " cups"
        << right
        // << setw(17)
        << setw(12)
        << "Score: "
        << fixed
        << setprecision(2)
        << coffeeScore
        << endl
    ;

    // Assignment output

    cout
        << left
        << setw(15)
        << "Assignments:"
        << numAssignments
        << right
        // << setw(17)
        << setw(19)
        << "Penalty: "
        << fixed
        << setprecision(2)
        << assignmentScore
        << endl
    ;

    // Study output -- found `defaultfloat` in stdlib library
    // Otherwise output was showing as 4.00?

    cout
        << left
        << setw(15)
        << defaultfloat
        << "Study Time:"
        << numHoursStudying
        << " hrs"
        << right
        // << setw(17)
        << setw(13)
        << "Score: "
        << fixed
        << setprecision(2)
        << studyScore
        << endl
    ;

    // Energy drinks output

    cout
        << left
        << setw(15)
        << "Energy Drinks:"
        << numEnergyDrinks
        << right
        // << setw(17)
        << setw(17)
        << "Score: "
        << fixed
        << setprecision(2)
        << energyDrinkScore
        << endl
    ;

    // Hours worked -- defaultfloat used again

    cout
        << left
        << setw(15)
        << defaultfloat
        << "Hours Worked:"
        << numHoursWorked
        << right
        // << setw(17)
        << setw(19)
        << "Penalty: "
        << fixed
        << setprecision(2)
        << workScore
        << endl
    ;

    // Separate output from total
    // Output results and static text

    cout 
        << "-----------------------------------------" 
        << endl
    ;

    cout 
        << "TOTAL SURVIVAL SCORE:   "
        << fixed 
        << setprecision(2) 
        << survivalScore
        << endl
    ;

    cout 
        << endl
    ;

    cout 
        << "Optimal results are 100 and above." 
        << endl
    ;

    cout 
        << endl
    ;
    cout 
        << "End of results" 
        << endl
    ;


    return 0;

}