////////////////////////////////////////////////////////////////////////////////
/// \file       main.cpp
/// \brief      Main module for Contest 2 Problem С
/// \author     Suchkov Ilya
/// \version    0.1.0
/// \date       15.02.2021
///
/// File is given. Determine how many letters in it (the Latin alphabet), words, lines. 
/// Output the three numbers found in the format given in the example. A word is a sequence of letters of the Latin alphabet.
/// To save memory, read the file character by character, that is, without saving the file or its individual lines in memory.
/// 
/// INPUT  :::: Beautiful is better than ugly.
///             Explicit is better than implicit.
///             Simple is better than complex.
///             Complex is better than complicated.
/// OUTPUT :::: Input file contains:
///             108 letters 
///             20 words 
///             4 lines 
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <fstream>

int main()
{
    const std::string INP_FILE_NAME = "input.txt";
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

        if (inLine[0] == '\0')  //  for an empty line
            --lineCounter;

        ++lineCounter;

        for (int i = 0; i < inLine.size(); ++i)
        {
            if ((inLine[i] >= char65 && inLine[i] <= char90) || (inLine[i] >= char97 && inLine[i] <= char122))
                ++letterCounter;

            if (inLine[i] == ' ')  //  general counter
                ++wordCounter;
            else if (inLine[i] == '.' && inLine[i+1] != ' ')  //  for abbreviations such as "U.S."
                ++wordCounter;
            else if (i == inLine.size() - 1)  //  for the last word in a file
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
