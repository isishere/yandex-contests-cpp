#include <iostream>
#include <cstdint>
#include <iomanip>

bool testBit(uint32_t a, uint8_t i)
{
    uint32_t mask = 0x1;
    mask <<= i;

    return (a & mask) != 0;
}

int main()
{
    uint32_t n;
    uint32_t k;
    std::cin >> n;
    std::cin >> k;

    bool result = testBit(n, k);
    std::cout << result;

    return 0;
}
