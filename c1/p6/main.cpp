///                                                     *** Multiplication table ***                                                       ///
///                                                                                                                                        ///
///                                                                                                                                        ///
///  Peter decided to print the multiplication table for the first n natural numbers. Since their work may turn out to be very large,      ///
///  Peter decided to replace the result with his remainder when dividing by the m integer.                                                ///
///  Mathematicians would say here that the multiplication table is in the Zm ring.                                                        ///
///                                                                                                                                        ///
///  Input Format :::: Given the natural numbers n and m, not exceeding 1000.                                                              ///
///                                                                                                                                        ///
///  Output Format :::: Print a table in which the remainder of dividing ij by m will be located at the intersection of the i-th line      ///
///                     and the j th column. Separate the adjacent elements in the line with a tab character.                              ///
///                     In the initial line and the initial column their numbers should be recorded (see the example below).               ///
///                     Note that the first column of the output shouldn't contain a space or an extra tab character for padding.          ///
///                     Tab characters adjust their width automatically.                                                                   ///
///                                                                                                                                        ///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

///  USING WHILE  ///

int main() {

    int N;
    int M;
    std::string tab = "\t";

    std::cin >> N;
    std::cin >> M;

    int firstRawNums = 0;
    std::cout << tab;
    while (firstRawNums != N % M)
    {
        std::cout << firstRawNums + 1 << tab;  //  output the first raw
        ++firstRawNums;
    }
    std::cout << std::endl;


    int columnNums = 0;
    while (columnNums != N % M)
    {
        std::cout << columnNums + 1 << tab;
        int eachRawNums = 0;
        while(eachRawNums != N % M)
        {
            ++eachRawNums;
            std::cout << ((columnNums + 1) * eachRawNums) % M << tab;  //  output each reminder of a multiplication into the raw
        }
        std::cout << std::endl;  //  output each reminder into the first column
        ++columnNums;
    }

    return 0;
}

///  USING FOR  ///

int main()
{
    int N;
    int M;
    std::string tab = "\t";

    std::cin >> N;
    std::cin >> M;

    std::cout << tab;

    for (int colNum=0; colNum <= N; ++colNum)
    {
        for (int rawNum = 1; rawNum <= N; ++rawNum)
        {
            if (colNum == 0)                                    //  The body of the table
                std::cout << rawNum << tab;                     //  The body of the table
            else                                                //  The body of the table
                std::cout << (colNum * rawNum) % M << tab;      //  The body of the table
        }
        std::cout << std::endl;

        if (colNum + 1 <= N)
            std::cout << colNum + 1 << tab;  //  output the 2nd column
    }

    return 0;
}

