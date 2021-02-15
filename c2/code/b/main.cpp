////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest X Problem Y
/// \author     Student's Name
/// \version    0.1.0
/// \date       25.01.2021
///
/// Copy the task description here.
///
////////////////////////////////////////////////////////////////////////////////

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
