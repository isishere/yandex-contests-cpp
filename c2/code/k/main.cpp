//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  \file       main.cpp                                                                                              ///
///  \brief      Main module for Contest 2 Problem K                                                                   ///
///  \author     Suchkov Ilya                                                                                          ///
///  \version    0.1.0                                                                                                 ///
///  \date       17.02.2021                                                                                            ///
///  \verdict    OK                                                                                                    ///
///                                                                                                                    ///
///  *** Extract numbers ***                                                                                           ///
///                                                                                                                    ///
///  Given a string with spaces(possibly). Extract all numbers from this string and make up a new line.                ///
///  Submit solution as function: std::string ExtractDigits (const std::string & s).                                   ///
///                                                                                                                    ///
///  Your program should not have a main function, but only the ExtractDigits function.                                ///
///  We will compile your code with our main function when checking.                                                   ///
///  I/O examples are for demonstration purposes only: you do not need to enter data and print the result yourself.    ///
///                                                                                                                    ///
///  EXAMPLE            Input1: 2+2=4                             Output1: 224                                         ///
///                     Input2: 0123456789 less then 9876543210   Output2: 01234567899876543210                        ///
///                     Input3: This is a number: 809!            Output3: 809                                         ///
///                                                                                                                    ///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// FOR CONTEST (SAFTISFYING REQUIRMENTS) ///

#include <sstream>
std::string ExtractDigits(const std::string& string)
{
    char char47 = 47;  //  next char is 48: '1'
    char char58 = 58;  //  previous char is 57: '9'

    std::string numString = "";
    std::stringstream ss;


    for (int i = 0; i < string.size(); ++i)
    {
        if (string[i] > char47 && string[i] < char58)
            ss << string[i];
    }

    numString = ss.str();

    return numString;
}

/// WORKING PROGRAMM (WITH IOSTREAM & MAIN FUNC. & HEADER FILES) ///

#include <iostream>
#include <string>
#include <sstream>



std::string ExtractDigits(const std::string& string)
{
    char char47 = 47;  //  next char is 48: '1'
    char char58 = 58;  //  previous char is 57: '9'

    std::string numString = "";
    std::stringstream ss;


    for (int i = 0; i < string.size(); ++i)
    {
        if (string[i] > char47 && string[i] < char58)
            ss << string[i];
    }

    numString = ss.str();

    return numString;
}



int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::stringstream stringStream(str);

    std::cout << ExtractDigits(str);

    return 0;
}
