///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  \file       main.cpp                                                                                                                           ///
///  \brief      Main module for Contest 2 Problem A                                                                                                ///
///  \author     Suchkov Ilya                                                                                                                       ///
///  \version    0.1.0                                                                                                                              /// 
///  \date       16.02.2021                                                                                                                         ///
///                                                                                                                                                 ///
///  *** Passwords ***                                                                                                                              ///
///                                                                                                                                                 ///
///  Vasya wants to change his email password, because he is afraid that his mailbox might have been hacked.                                        ///
///  According to the rules, a new password must meet the following restrictions:                                                                   ///
///  - consist of ASCII table characters with codes from 33 to 127;                                                                                 ///
///  - be at least 8 characters and no longer than 14;                                                                                              ///
///  - from 4 classes of symbols - large letters, small letters, numbers, other symbols - at least three of any should be present in the password.  ///
///  Help Vasya to write a program that will verify that his new password is valid.                                                                 ///
///                                                                                                                                                 ///
///  Input Format ::::  At the entrance is given one line - the new Vasya's password.                                                               ///
///                                                                                                                                                 ///
///  Output Format :::: Output YES, if Vasya's password meets the requirements, and NO otherwise.                                                   ///
///                                                                                                                                                 ///
///  EXAMPLE            Input1: Vasya123  Output2: YES                                                                                              ///                                                                                                                                              
///                                                                                                                                                 ///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>


int main()
{
    std::string password;
    std::getline(std::cin, password);


    int counterLarge = 0;
    int counterSmall = 0;
    int counterNumber = 0;
    int counterSymbol = 0;

    char ch1 = 33;
    char ch2 = 127;
    char ch3 = 64;
    char ch4 = 91;
    char ch5 = 96;
    char ch6 = 123;
    char ch7 = 47;
    char ch8 = 58;

    for (int i = 0; i < password.size(); ++i)
    {
        if (password[i] < ch1)  //  consist of ASCII table characters with codes from 33 to 127
        {
            std::cout << "NO";
            exit(0);
        }

        if (password.size() < 8 || password.size() > 14)  //  be at least 8 characters and no longer than 14
        {
            std::cout << "NO";
            exit(0);
        }


        if (ch3 < password[i] && password[i] < ch4)  //  if it is a large letter [65;90]
            ++counterLarge;

        else if (ch5 < password[i] && password[i] < ch6)  //  if it is a small letter [97;122]
            ++counterSmall;

        else if (ch7 < password[i] && password[i] < ch8)  //  if it is a number [48;57]
            ++counterNumber;

        else if (ch1 < password[i] && password[i] < ch2)  //  if it is another symbol [33;126]
            ++counterSymbol;

    }

    if (counterLarge > 0 && counterSmall > 0 && counterNumber)  //  large, small + numbers
        std::cout << "YES";
    else if (counterLarge > 0 && counterSmall > 0 && counterSymbol > 0)  //  large, small + symbols
        std::cout << "YES";
    else if (counterLarge > 0 && counterNumber > 0 && counterSymbol > 0)  //  large, numbers + symbols
        std::cout << "YES";
    else if (counterNumber > 0 && counterSmall > 0 && counterSymbol > 0)  //  numbers, small + symbols
        std::cout << "YES";
    else if (counterNumber > 0 && counterSmall > 0 && counterSymbol > 0 && counterLarge > 0)  //  numbers, small + symbols + large
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}
