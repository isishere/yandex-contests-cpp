#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

std::string itobs(unsigned long int numberX10)
{
    std::string strNumberX2;

    do
    {
        unsigned long int i = numberX10 % 2;

        std::stringstream ss;
        ss << i;
        std::string cur = ss.str();

        strNumberX2 = cur + strNumberX2;
        numberX10 /= 2;
    } 	while (numberX10 > 0);

    return strNumberX2;
}

int main()
{
    unsigned long long int number;
    std::cin >> number;

    std::string binaryNumber = itobs(number);

    int counter = 0;
    for (int i = 0; i != binaryNumber.size(); ++i)
        if (binaryNumber[i] == '1')
            ++counter;

    std::cout << counter;

    return 0;
}

//  4000000000000000000 (4*10^18) x10 = 11011110000010110110101100111010011101100100000000000000000000 x2; 24 ones
//  1000000000000000000 x10 = 110111100000101101101011001110100111011001000000000000000000 x2; 24 ones
//  10000000000 (10 bil) x2 = 1001010100000010111110010000000000; 11 ones
