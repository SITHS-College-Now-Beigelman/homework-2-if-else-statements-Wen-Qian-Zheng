// Wen Qian Zheng
// Homework 2 Part 1
// October 1st, 2024

#include <iostream>
using namespace std;

int main()
{
    int month, day; // declares as integer
    
    cout << "\nEnter a VALID numeric month (1-12) and day (1-31) in this format (MM DD):\n> "; // prompts for user to input date
    cin >> month >> day; // takes user input

    if ((month == 3 and day >= 21) or (month > 3 and month < 6) or (month == 6 and day <= 20)) // from month 3 (march) including day 21, including month 3 to month 6 (june) to month 6 including day 20
    {
        cout << "\nIt is now Spring!\n" << endl; // it is spring
    }
    else if ((month == 6 and day >= 21) or (month > 6 and month < 9) or (month == 9 and day <= 22))  // from month 6 (june) including day 21, including month 6 to month 9 (september) to month 9 including day 22
    {
        cout << "\nIt is now Summer!\n" << endl; // it is summer
    }
    else if ((month == 9 and day >= 23) or (month > 9 and month < 12) or (month == 12 and day <= 21))  // from month 9 (september) including day 23, including month 9 to month 12 (december) to month 12 including day 21
    {
        cout << "\nIt is now Fall!\n" << endl; // it is fall
    }
    else // for all other dates on the calendar
    {
        cout << "\nIt is now Winter!\n" << endl; // it is winter
    }

    return 0;
}

/*

Enter a VALID numeric month (1-12) and day (1-31) in this format (MM DD):
> 04 07

It is now Spring!

*/
