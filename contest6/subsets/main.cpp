#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

bool newComp(std::string str1, std::string str2)
{
    return (str1 < str2);
}

std::vector<std::string> powerSet(const std::vector<std::string>& iniVec)
{
    std::vector<std::string> permutationsVec;
    unsigned int powSetSize = std::pow(2, iniVec.size());

    std::vector<std::string> vec;
    int i;
    for (i = 0; i < powSetSize; i++)
    {
        for (int j = 0; j < iniVec.size(); j++)
            if (i & (1 << j))
            {
                std::stringstream ss;
                ss << iniVec[j];
                std::string curr = ss.str();
                vec.push_back(curr);
            }
        vec.push_back(" ");
    }

    std::stringstream ss;
    for (std::string k : vec)
        ss << k;

    std::string str;
    str = ss.str();

    //str.erase(str.begin());
    str.erase(str.end());

    for (int z = 0; z != str.size(); ++z)
    {
        std::string curr = "";
        if (str[z] != ' ')
        {
            do
            {
                curr += str[z];
                ++z;
            }
            while (str[z] != ' ');

            if (curr.size() != 0)
            {
                permutationsVec.push_back(curr);
                curr.clear();
            }
        }
    }

    //std::sort(permutationsVec.begin(), permutationsVec.end());
    permutationsVec.insert(permutationsVec.begin(), "");
    return permutationsVec;
}

int main()
{
    std::vector<std::string> set;
    size_t counter = 0;
    size_t num;
    std::cin >> num;

    while (counter != num)
    {
        std::string current;
        std::cin >> current;
        set.push_back(current);
        ++counter;
    }

    std::vector<std::string> powSet = powerSet(set);

    for (std::string k : powSet)
        std::cout << '[' << k << ']' << std::endl;

    return 0;
}

// TODO - write an empty set to function
//      - create a different compare method
