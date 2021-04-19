#include <iostream>
#include <vector>
#include <algorithm>
#include "math.h"


bool comp(uint16_t a, uint16_t b)
{
    return a > b;
}

std::vector<uint16_t> fillVecPermut(uint16_t number, std::vector<uint16_t> vec)
{
    vec.push_back(number);
    int border = ceil(log2(number));

    uint16_t mask = 0x1;
    mask <<= border - 1;

    for (int i = 0; i < border - 1; ++i)
    {
        if (number & mask)
        {
            number &= ~mask;
            number <<= 1;
            number |= 1;
        }
        else
            number <<= 1;

        vec.push_back(number);
    }

    return vec;
}


int main()
{
    uint16_t a;
    std::cin >> a;

    if (a == 0)
        std::cout << 0;
    else
    {
        std::vector<uint16_t> vecInt;
        vecInt = fillVecPermut(a, vecInt);

        std::sort(vecInt.begin(), vecInt.end(), comp);

        std::cout << vecInt[0];
    }

    return 0;
}
