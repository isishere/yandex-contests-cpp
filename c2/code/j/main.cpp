////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  \file       main.cpp                                                                                                ///
///  \brief      Main module for Contest 2 Problem J                                                                     ///
///  \author     Suchkov Ilya                                                                                            ///
///  \version    0.1.0                                                                                                   ///
///  \date       17.02.2021                                                                                              ///
///  \verdict    OK                                                                                                      ///
///                                                                                                                      ///
///  *** Join ***                                                                                                        ///
///                                                                                                                      ///
///  You need to write a join function in C++ with the following header:                                                 ///
///  std::string join (const std::vector <std :: string> & tokens, char delimiter);                                      ///
///  The function should return the string obtained by joining the elements of the vector with the specified separator.  ///
///                                                                                                                      ///
///  Note that in the task you just need to write a separate function                                                    ///
///  (and you do not need to write the function main and input-output).                                                  ///
///  Your function will be tested with our program. I/O examples are for illustration purposes only.                     ///
///                                                                                                                      ///
///  Your program should not have a main function, but only the ExtractDigits function.                                  ///
///  We will compile your code with our main function when checking.                                                     ///
///  I/O examples are for demonstration purposes only: you do not need to enter data and print the result yourself.      ///
///                                                                                                                      ///
///  EXAMPLE            Input1: 4      Output1: What_is_your_name?                                                       ///
///                             What                                                                                     ///
///                             is                                                                                       ///
///                             your                                                                                     ///
///                             name?                                                                                    ///
///                             _                                                                                        ///
///                                                                                                                      ///
///                     Input2: 5      Output2: 13-24-08-11-2014                                                         ///
///                             13                                                                                       ///
///                             24                                                                                       ///
///                             08                                                                                       ///
///                             11                                                                                       ///
///                             2014                                                                                     ///
///                             -                                                                                        ///
///                                                                                                                      ///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// FOR CONTEST (SAFTISFYING REQUIRMENTS, WITHOUT MAIN FUNC.) ///

#include <sstream>
#include <vector>
std::string join(const std::vector<std::string>& tokens, char delimiter)
{
    std::string newLine = "";
    std::stringstream ss;

    for (int i = 0; i < tokens.size(); ++i)
    {
        if (i != tokens.size() - 1)
            ss << tokens[i] + delimiter;
        else if (tokens[i] != "\0")
            ss << tokens[i];
    }

    newLine = ss.str();

    return newLine;
}

/// (NOT)WORKING PROGRAMM (MAIN FUNC. & HEADER FILES) ///

#include <iostream>
#include <string>
#include <sstream>
#include <vector>



std::string join(const std::vector<std::string>& tokens, char delimiter)
{
    std::string newLine = "";
    std::stringstream ss;

    for (int i = 0; i < tokens.size(); ++i)
    {
        if (i != tokens.size() - 1)
            ss << tokens[i] + delimiter;
        else if (tokens[i] != "\0")
            ss << tokens[i];
    }

    newLine = ss.str();

    return newLine;
}



int main()  // trying to implement here an input of strings (using keyword) and adding them to the vector
{
    std::vector<std::string> vector;
    char del;

    std::string string;
    std::stringstream stringStream;


    std::cin >> del;

    std::cout << join(vector, del);

    return 0;
}

//do
//{
//    std::cin >> string;
//    vector.push_back(string);
//}
//while (string == "1");
