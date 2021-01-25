///                                                             *** Details ***                                                           ///
///                                                                                                                                       ///
///                                                                                                                                       ///
///  There is N kg of metal alloy. It is used to make blanks with a mass of K kg each.                                                    ///
///  After that, details of M kg each are machined from each blank (the maximum possible number of details is milled out of each blank).  ///
///  If something remains from the blanks after this, then this material is returned to the beginning of the production cycle             ///
///  and fused with what remains in the manufacture of blanks. If the resulting amount of alloy is enough to make at least one blank,     ///
///  then blanks are made from it again, of which - details, etc. Write a program that calculates how many details can be obtained by     ///
///  this technology from the available initial N kg of alloy.                                                                            ///
///                                                                                                                                       ///
///  Input Format :::: N, K, M are entered. All numbers are natural and do not exceed 200.                                                ///
///                                                                                                                                       ///
///  Output Format :::: Print one number - the number of details that can be obtained by this technology.                                 ///
///                                                                                                                                       ///
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int wholeMass;
    int workPiece;
    int detail;
    int detailsNum;

    std::cin >> wholeMass;
    std::cin >> workPiece;
    std::cin >> detail;

    int wholePart_rem1 = wholeMass/workPiece;
    int wholePart_rem2 = workPiece/detail;
    double decimalPart_rem1 = wholeMass % workPiece;
    double decimalPart_rem2 = workPiece % detail;


    while(decimalPart_rem1 + decimalPart_rem2 >= 1)
        wholePart_rem1 = wholeMass/workPiece;
        wholePart_rem2 = workPiece/detail;
        decimalPart_rem1 = wholeMass % workPiece;
        decimalPart_rem2 = workPiece % detail;

        wholeMass -= wholePart_rem1*workPiece;
        workPiece -= wholePart_rem2*detail;

        wholeMass -= (int) (decimalPart_rem1 + decimalPart_rem2);
        detailsNum = wholePart_rem1 + wholePart_rem2 + (int) (decimalPart_rem1 + decimalPart_rem2);


    std::cout << detailsNum;

    return 0;
}
