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
#include <fstream>

int main()
{
    const std::string INP_FILE_NAME = "/Users/ilyasuchkov/Proga/cpp/contests/c2/c/input.txt";
    std::ifstream inputFile;
    inputFile.open(INP_FILE_NAME);

    if (!inputFile.is_open())
    {
        std::cerr << "Can't open a file for reading";
        return 1;
    }

    int lineCounter = 0;
    int wordCounter = 0;
    int letterCounter = 0;

    char char65 = 65;
    char char90 = 90;
    char char97 = 97;
    char char122 = 122;


    while (inputFile && !inputFile.eof())
    {
        std::string inLine;
        std::getline(inputFile, inLine);
        ++lineCounter;

        for (int i = 0; i < inLine.size(); ++i)
        {
            if ((inLine[i] >= char65 && inLine[i] <= char90) || (inLine[i] >= char97 && inLine[i] <= char122))
                ++letterCounter;

            if (inLine[i] == ' ')
                ++wordCounter;
            else if (inLine[i] == '.' && inLine[i+1] != ' ')
                ++wordCounter;
            else if (i == inLine.size() - 1)
                ++wordCounter;
        }
    }

    std::cout << "Input file contains:\n" << letterCounter << " letters\n" << wordCounter << " words\n" << lineCounter
              << " lines";
}



//if ((inLine[i] >= char65 && inLine[i] <= char90) || (inLine[i] >= char97 && inLine[i] <= char122))
//++letterCounter;
//
//else if (inLine[i] == ' ')
//++wordCounter;
//
//else if ((((inLine[i + 1] >= char65 && inLine[i + 1] <= char90) || (inLine[i + 1] >= char97 && inLine[i + 1] <= char122)) && inLine[i] == '.') ||
//(inLine[i] == '\n') ||
//(i == inLine.size() - 1))
//++wordCounter;
//
//else if ((((inLine[i] >= char65 && inLine[i] <= char90) || (inLine[i] >= char97 && inLine[i] <= char122)) && inLine[i+1] == '.' && inLine[i+2] == ' '))
//{
//wordCounter++;
//i++;
