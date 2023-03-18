// DayofWeekpg171.cpp :
// Read day of the week, value pairs from standard input into a vector<int>.
// Write out the values of the seven day of the week vectors (assumed here to be one for each day.)
// Print out the sum of the values for each vector (day of the week).
// Ignore illegal days, but write out the number of rejected values.
// Accept common synonyms such as Mon and monday.
// Use the letter 'q' to exit from the program;

#include "std_lib_facilities.h"

int main()
{
    void vec_sum(const vector<double>, const vector<double>, const vector<double>, const vector<double>, const vector<double>, const vector<double>, const vector<double>, const vector<string>);

    string weekday = "default";
    int day = 0;  // day as an int where zero is default; and Sunday = 1
    double amt = 0; //daily revenue less expense figure

    vector<double> sun;
    vector<double> mon;
    vector<double> tue;
    vector<double> wed;
    vector<double> thu;
    vector<double> fri;
    vector<double> sat;
    vector<double> bad;
    vector<string> day_bad;
    string myline1 = "*************************************************************************\n";
    string myline2 = "* This program will accept input as the day of week and an amount       *\n";
    string myline3 = "* of revenue, less expense (profit) for each day of business operations.*\n";
    string myline4 = "* The program will accept days as spelled out with or without capital   *\n";
    string myline5 = "* letters, or as three letter abbreviations capitalized.                *\n";
    string myline6 = "* By entering the word -done- the program will sum the totals for each  *\n";
    string myline7 = "* day of the week, and the amount of errors entered.                    *\n";
    string myline8 = "* Enter quit to leave the program.                                      *\n";
    cout << myline1 << myline2 << myline3 << myline4 << myline5 << myline6 << myline7;
    cout << myline1;

    while (cin >> weekday) {
        if (weekday == "Sunday" || weekday == "Sun" || weekday == "sunday") day = 1;
        if (weekday == "Monday" || weekday == "Mon" || weekday == "monday") day = 2;
        if (weekday == "Tuesday" || weekday == "Tue" || weekday == "tuesday") day = 3;
        if (weekday == "Wednesday" || weekday == "Wed" || weekday == "wednesday") day = 4;
        if (weekday == "Thursday" || weekday == "Thu" || weekday == "thursday") day = 5;
        if (weekday == "Friday" || weekday == "Fri" || weekday == "friday") day = 6;
        if (weekday == "Saturday" || weekday == "Sat" || weekday == "saturday") day = 7;
        if (weekday == "done" || weekday == "Done");  cout << "done"; return 0;//sum the vectors then print the output;
        if (weekday == "quit") break;
        cin >> amt;
        // need an error handler for an amount not a number;
        try {
            switch (day) {
            case 1:
                //Sunday
                sun.push_back(amt);
                break;
            case 2:
                //Monday
                mon.push_back(amt);
                break;
            case 3:
                //Tuesday
                tue.push_back(amt);
                break;
            case 4:
                //Wednesday
                wed.push_back(amt);
                break;
            case 5:
                //Thursday
                thu.push_back(amt);
                break;
            case 6:
                //Friday
                fri.push_back(amt);
                break;
            case 7:
                //Saturday
                sat.push_back(amt);
                break;
            default:
                //push_back() the error into a bad_day vector or bad amount vector;
                // should the bad amount error be handled here, or above on input;
                // should the program cycle to ask for another value if a bad day or amount;
                throw runtime_error("Bad day of week or amount ");
                break;
            }
        }
        catch (runtime_error& e) {
            cerr << "try another day, amount pair" << e.what() << "\n";
        }
    }


    cout << "-Done ---> :-)";
    return 0;
}

    // function to sum vectors;
 void vec_sum(const Vector<double>sun, const Vector<double>mon, const Vector<double>tue, const Vector<double>wed, const Vector<double>thu, const Vector<double>fri, const Vector<double>sat, const Vector<string>bad) {


    }


 
 


    // 
    // function print vectors;


