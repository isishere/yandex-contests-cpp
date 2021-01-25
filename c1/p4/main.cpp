///                                     *** In 2 ***                                        ///
///                                                                                         ///
///                                                                                         ///
/// By given n compute: 1 - 1/2 + 1/3 - 1/4 + ... + ((-1)^n+1)/n.                           ///
/// Dont user power function. Complexity should be O(n). Also try to avoid if instruction   ///
///                                                                                         ///
/// Input Format :::: Integer n                                                             ///
///                                                                                         ///
/// Output Format :::: Correct number                                                       ///
///                                                                                         ///
///////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int number;
    double counter = 0;
    double tamporary = -1;
    double sum = 0;

    std::cin >> number;

    while (counter < number)
    {
        counter += 1;
        tamporary *= -1;
        sum += tamporary/counter;
    }

    std::cout << sum;

    return 0;
}
