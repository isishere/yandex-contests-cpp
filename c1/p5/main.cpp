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
    int MWorkPiece;
    int MDetails;

    std::cin >> wholeMass;
    std::cin >> MWorkPiece;
    std::cin >> MDetails;

    int NDetails = 0;
    int temporary;

    while (wholeMass >= MWorkPiece)
    {
        temporary = wholeMass / MWorkPiece;
        NDetails += temporary*(MWorkPiece/MDetails);
        wholeMass -= temporary*(MWorkPiece/MDetails+1)*MDetails;
    }
    std::cout << NDetails;
    return 0;
}
