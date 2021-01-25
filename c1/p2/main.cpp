///                                                          *** Sum of digits ***                ///
///                                                                                               ///
///                                                                                               ///
/// You need to calculate the sum of digits of a nonnegative integer.                             ///
///                                                                                               ///
/// Input Format :::: The only line in the input file contains exactly one integer: 0 ≤ n ≤ 10^9  ///
///                                                                                               ///
/// Output Format :::: Output the sum of the digits of this number.                               ///
///                                                                                               ///
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{
    int sum = 0;
    int index;
    std::cin >> index;

    while (index != 0)
    {
        sum += index % 10;
        index /= 10;
    }

    std::cout << sum;

    return 0;
}
