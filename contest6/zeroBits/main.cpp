#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

std::string itobs(unsigned int numberX10)
{
    std::string strNumberX2;

    do
    {
        int i = '0' + (numberX10 % 2) - 48;

        std::stringstream ss;
        ss << i;
        std::string cur = ss.str();

        strNumberX2 = cur + strNumberX2;
        numberX10 /= 2;
    } 	while (numberX10 > 0);

    return strNumberX2;
}

unsigned int bstoi(std::string numberX2)
{
    std::reverse(numberX2.begin(), numberX2.end());

    unsigned int numberX10 = 0;

    for (int i = 0; i != numberX2.size(); ++i)
        if (numberX2[i] == '1')
            numberX10 += std::pow(2, i);

    return numberX10;
}


int main()
{
    int number;
    int numberOfBits;

    std::cin >> number;
    std::cin >> numberOfBits;

    std::string binaryNumber = itobs(number);

    if (numberOfBits < binaryNumber.size())
        for (int i = 0; i != binaryNumber.size() - numberOfBits; ++i)
            binaryNumber[i] = '0';

    std::cout << bstoi(binaryNumber);
    return 0;
}
