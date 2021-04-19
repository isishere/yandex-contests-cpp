#include <iostream>
#include <cstdint>
#include <iomanip>


uint64_t invertBit(uint64_t number, uint8_t bitNumber)
{
    uint32_t mask = 0x1;
    mask <<= bitNumber;
    return number ^ mask;
}


int main()
{
    unsigned long long num;
	unsigned long long bitNum;

    std::cin >> num;
    std::cin >> bitNum;

    std::cout << invertBit(num, bitNum);

    return 0;
}
