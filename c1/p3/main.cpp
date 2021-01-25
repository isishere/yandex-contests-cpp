///                                                          *** MKAD ***                                                                  ///
///                                                                                                                                        ///
///                                                                                                                                        ///
/// The length of the MKAD is 109 kilometers.                                                                                              ///
/// Biker Vasya starts from the zero kilometer of the MKAD and travels at a speed of v kilometers per hour.                                ///
/// At which mark will he stop after t hours?                                                                                              ///
///                                                                                                                                        ///
/// Input Format ::::  The program takes the input value v and t. If v> 0, then Vasya moves in the positive direction along the MKAD,      ///
///                    if the value of v <0, then in the negative direction.                                                               ///
///                    (It is guaranteed that the original numbers are integers and are in the range from -1000 to +1000).                 ///
///                                                                                                                                        ///
/// Output Format :::: The program should output an integer from 0 to 108 - the number of the mark on which Vasya stops.                   ///
///                                                                                                                                        ///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int velocity;
    int time;

    std::cin >> velocity >> time;

    std::cout << ((velocity * time) % 109 + 109) % 109;

    return 0;
}
