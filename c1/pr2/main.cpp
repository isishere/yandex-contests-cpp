///                                                          *** Queen's Move ***                                                          ///
///                                                                                                                                        ///
///                                                                                                                                        ///
/// Chess queen walks diagonally, horizontally or vertically.                                                                              ///
/// Two different checkerboard cells are given. Determine if the queen can get from the first square to the second in one move.            ///
///                                                                                                                                        ///
/// Input Format ::::  The program receives at the input four numbers from 1 to 8 each,                                                    ///
/// specifying the column number and the row number, first for the first cell, then for the second cell.                                   ///
///                                                                                                                                        ///
/// Output Format :::: The program should print YES, if from the first square you can get into the second by queen move, or NO otherwise.  ///
///                                                                                                                                        ///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a;
    int b;
    int c;
    int d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if (a == c || b == d || (a == b && c == d))
        cout << "YES";
        
    else if (a+1 == c && (b+1 == d || b-1 == d))
        cout << "YES";
        
    else if (a-1 == c && (b+1 == d || b-1 == d))
        cout << "YES";
        
    else
        cout << "NO";
        
    return 0;
}
