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

int main() {

    int N;
    int M;
    std::string tab = "    ";

    std::cin >> N;
    std::cin >> M;

    int numOfRem = 0;
    std::cout << " " + tab;
    while (numOfRem != N % M)
    {
        std::cout << numOfRem+1 << tab;
        ++numOfRem;
    }
    std::cout << std::endl;

    int numOfRem1 = 0;
    while (numOfRem1 != N % M)
    {
        std::cout << numOfRem1+1 << tab;
        int numOfRem2 = 0;
        while(numOfRem2 != N % M)
        {
            ++numOfRem2;
            std::cout << ((numOfRem1+1)*numOfRem2) % M << tab;
        }
        std::cout << std::endl;
        ++numOfRem1;
    }

    return 0;
}
