#include <iostream>
#include <cstdint>
#include <iomanip>

uint64_t zeroBits(uint64_t number, uint8_t nonZero)
{
    uint32_t mask = 0x0;
    for (int j = 0; j < nonZero; ++j)
    {
        mask <<= 1;
        mask |= 1;
    }

    return number & mask;
}


int main()
{
    long long n;
	  long long k;

    std::cin >> n;
    std::cin >> k;

    if(n < 0)
        n = -n;

    std::cout << zeroBits(n, k);

    return 0;
}
