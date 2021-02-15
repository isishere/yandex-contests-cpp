////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  \file       main.cpp                                                                                                                            ///
///  \brief      Main module for Contest 2 Problem B                                                                                                 ///
///  \author     Suchkov Ilya                                                                                                                        ///
///  \version    0.1.0                                                                                                                               ///
///  \date       16.02.2021                                                                                                                          ///
///                                                                                                                                                  ///
///                                                          *** Is the string palindrome? ***                                                       ///
///                                                                                                                                                  ///
///  A string consisting of lowercase Latin letters and spaces is given. Check whether it is a palindrome without spaces (eg, "no lemon no melon").  ///
///                                                                                                                                                  ///
///  INPUT Format ::::  A string consisting of lowercase Latin letters and spaces is given.                                                          ///
///                     Check whether it is a palindrome without spaces (eg, "no lemon no melon").                                                   ///
///                                                                                                                                                  ///
///  OUTPUT Format :::: The input is 1 line of length not more than 100, containing spaces.                                                          ///
///                     There can be an arbitrary number of spaces between words.                                                                    ///
///                                                                                                                                                  ///
///  EXAMPLE            Input1: yes  Output1: f                                                                                                      ///
///                     Input2: ok   Output2: ok                                                                                                     ///
///                                                                                                                                                  ///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <sstream>


int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::stringstream ss(str);

    std::string curr;
    std::string string = "";
    while(ss.good() && !ss.eof())
    {
        ss >> curr;
        string += curr;
    }


    for (int i = 0; i < string.size(); i++)
    {
        if (string[i] != string[string.size() - i - 1])
        {
            std::cout << "no";
            exit(0);
        }
    }

    std::cout << "yes";

    return 0;
}
