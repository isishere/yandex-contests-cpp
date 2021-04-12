#include <iostream>
#include <cstdint>
#include <iomanip>

uint8_t countOnes(uint64_t a)
{
    uint8_t counter = 0;
    while (a)
    {
        constexpr uint32_t mask = 0x1;
        if (!(a & mask))
            ++counter;
        a >>= 1;
    }
    return counter;
}

int main()
{
    uint32_t n;
    uint32_t k;
    std::cin >> n;
    std::cin >> k;

    uint8_t result = countOnes(n);
    std::cout << result;

    return 0;
}
