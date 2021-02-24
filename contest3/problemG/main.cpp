#include <iostream>
#include <vector>
#include <string>



int differNumbers(std::vector<int>& vec)
{
    std::vector<int> difVector;

    while (vec.size() != 0)
    {
        difVector.push_back(vec[0]);

        for (int k = 0; k < vec.size(); ++k)
            if (vec[0] == vec[k])
            {
                vec.erase(vec.begin() + k);
                --k;
            }
    }

    int size = difVector.size();

    return size;
}



int main()
{
    std::string string;

    std::getline(std::cin, string);
    std::vector<int> vector;

    for (int i = 0; i < string.size(); ++i)
    {
        std::string current;
        if (string[i] != ' ')
        {
            while (string[i] != ' ' && string[i] != '\0')
            {
                current += string[i];
                ++i;
            }
            vector.push_back(std::stoi(current));
            --i;
        }
    }

    int size = differNumbers(vector);
    std::cout << size;

    return 0;
}
