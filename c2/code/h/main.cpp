////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest X Problem Y
/// \author     Student's Name
/// \version    0.1.0
/// \date       25.01.2021
///
/// Copy the task description here.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>

std::string common_suffix(const std::string& a, const std::string& b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;

    std::string current = "";
    std::string result = "";
    int size = 0;

    while ((i + 1 > 0) && (j + 1 > 0))
    {
        if(a[i] == b[j])
        {
            current += a[i];
            --i;
            --j;
            size++;
        }
        else
        {
            if (current.size() > size)
            {
                size = 0;
                result = current;
                current = "";
            }
            --i;
            --j;
        }
    }

    i = current.size() - 1;
    j = 0;

    while (i != j)
    {
        char t = current[j];
        current[j] = current[i];
        current[i] = t;

        --i;
        ++j;
    }

    if (current.size() == 0)
        current = " ";

    return result;
}

//VecOfChars& revSubstr(VecOfChars& vec, const std::string& patternStr)
//{
//    int pos = ifString(vec, patternStr);
//
//    if (pos == -1)
//        return vec;
//
//    // if we reach this line, we need to reverse
//    for (size_t i = 0; i < patternStr.length() / 2; ++i)
//    {
//        //vec[pos + i]  <-> vec[pos + patternStr.length() - 1 - i]
//        std::swap(  vec[pos + i],
//                    vec[pos + patternStr.length() - 1 - i]);
//    }
//
//    return vec;
//}
//
//
//void printVec(const VecOfChars& vec)
//{
//    for (size_t i = 0; i < vec.size(); ++i)
//    {
//        if (i != 0)
//            std::cout << " ";
//        std::cout << vec[i];
//    }
//}




int main()
{
    std::string a;
    std::string b;

    std::cin >> a >> b;

    std::cout << common_suffix(a, b);
    return 0;
}

