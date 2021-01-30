
///                                         *** Day after tomorrow ***                                   ///
///                                                                                                      ///
///                                                                                                      ///
///  For a given date you need to determine what number will be the day after tomorrow.                  ///
///                                                                                                      ///
///  Input Format :::: Given the day, month and year (year number in the range from 1 to 10,000):        ///
///                    Sample 1: 1 8 2009                                                                ///
///                    Sample 2: 30 12 2009                                                              ///
///                    Sample 3: 28 2 2008                                                               ///
///                                                                                                      ///
///  Output Format :::: Display what number will be the day after tomorrow in the format of input data.  ///
///                                                                                                      ///
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int day;
    int month;
    int year;

    std::cin >> day >> month >> year;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))    // if it's a leap year
    {
        int counter = 0;
        while (counter != 2)
        {
            if ((day == 31) && (month % 2 != 0) && (month < 8))    // if the month of the 1st half of a year is odd
            {
                day = 1;
                month++;
                counter++;
            }
            else if ((day == 31) && (month % 2 == 0) && (month >= 8) && (month != 12))    // if the month of the 2nd half of a year is even
            {
                day = 1;
                month++;
                counter++;
            }
            else if ((day == 30) && (month % 2 == 0) && (month < 8) && (month != 2))    // if the month of the 1st half of a year is even
            {
                day = 1;
                month++;
                counter++;
            }
            else if ((day == 29) && (month == 2))    // if it's February 
            {
                day = 1;
                month++;
                counter++;
            }
            else if ((day == 30) && (month % 2 != 0) && (month >= 8) && (month != 12))    // if the month of the 2nd half of a year is odd
            {
                day = 1;
                month++;
                counter++;
            }
            else if (((day == 31) && (month % 2 == 0) && (month >= 8) && (month == 12)))
            {
                day = 1;
                month = 1;
                year++;
                counter++;
            }
            else
            {
                counter++;
                day++;
            }
        }
    }
    else
    {
        int counter = 0;
        while (counter != 2)
        {
            if ((day == 31) && (month % 2 != 0) && (month < 8))    // if the month of the 1st half of a year is odd
            {
                day = 1;
                month++;
                counter++;
            }
            else if ((day == 31) && (month % 2 == 0) && (month >= 8) && (month != 12))    // if the month of the 2nd half of a year is even
            {
                day = 1;
                month++;
                counter++;
            }
            else if ((day == 30) && (month % 2 == 0) && (month < 8) && (month != 2))    // if the month of the 1st half of a year is even
            {
                day = 1;
                month++;
                counter++;
            }
            else if ((day == 28) && (month == 2))    // если месяц февраль
            {
                day = 1;
                month++;
                counter++;
            }
            else if ((day == 30) && (month % 2 != 0) && (month >= 8) && (month != 12))    // if the month of the 2nd half of a year is odd
            {
                day = 1;
                month++;
                counter++;
            }
            else if (((day == 31) && (month % 2 == 0) && (month >= 8) && (month == 12)))
            {
                day = 1;
                month = 1;
                year++;
                counter++;
            }
            else
            {
                counter++;
                day++;
            }
        }
    }

    std::cout << day << ' ' << month << ' ' << year;
    return 0;
}
