#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>

using StrVector = std::vector<std::string>;
//using IntVector = std::vector<int>;
using IntVecMap = std::map<int, std::vector<bool>>;


class Function
{
public:
    static long int fact(int number)
    {
        if(number < 0)
            return 0;
        if (number == 0)
            return 1;
        else
            return number * fact(number - 1);
    }

    static std::string split(std::string& line, char delimiter)
    {
        std::string result;
        std::stringstream input(line);
        std::string temp;

        while (std::getline(input, temp, delimiter))
            result.push_back(temp[0]);

        return result;
    }

    static std::vector<std::string> powerSet(int numberPlusOne)
    {
        std::vector<std::string> permutationsVec;
        int i;

        std::vector<int> set;
        for (int k = 0; k != numberPlusOne; ++k)
            set.push_back(k);

        unsigned int powSetSize = pow(2, set.size());

        std::vector<std::string> vec;
        for (i = 0; i < powSetSize; i++)
        {
            for (int j = 0; j < set.size(); j++)
                if (i & (1 << j))
                {
                    std::stringstream ss;
                    ss << set[j];
                    std::string curr = ss.str();
                    vec.push_back(curr);
                }
            vec.push_back(" ");
        }

        std::stringstream ss;
        for (std::string k : vec)
            ss << k;

        std::string str;
        str = ss.str();                                         // " "0" "1" "2" "01" "02" "12" "012" "

        str.erase(str.begin());
        str.erase(str.end());                              //  0" "1" "2" "01" "02" "12" "012

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

        std::sort(permutationsVec.begin(), permutationsVec.end(), Function::newComp);
        return permutationsVec;
    }

    static std::vector<std::string> linesToVec(int numberOfLines)
    {
        std::vector<std::string> vec;

        std::string line;
        int x = numberOfLines + 1;
        while (x != 0)
        {
            std::getline(std::cin, line, '\n');
            vec.push_back(Function::split(line, ' '));
            --x;
        }

        vec.erase(vec.begin());

        return vec;
    }
private:
    static bool newComp(std::string str1, std::string str2)
    {
        return (str1.size() < str2.size() && str1 < str2);
    }
};

struct Candidate
{
    int programmer;
    std::vector<std::string> languages;

    static std::map<int, std::vector<bool>> allocate(StrVector& languageSkills, int numOfLanguages)
    {
        std::map<int, std::vector<bool>> programmerLanguagesMap;

        for (int i = 0; i != languageSkills.size(); ++i)
        {
            std::pair<int, std::vector<bool>> para;
            std::vector<bool> langSkillsBool;

            para.first = i;

            std::string langsOfProgrammer = languageSkills[i];
            for (int j = 0; j != numOfLanguages; ++j)
            {
                if (langsOfProgrammer[j] == '1')
                    langSkillsBool.push_back(true);
                else
                    langSkillsBool.push_back(false);
            }

            para.second = langSkillsBool;
            programmerLanguagesMap.insert(para);
        }
    }
};


int main()
{
    int programmers;
    int languages;

    std::cin >> programmers;  // 3
    std::cin >> languages;    // 4

    StrVector perms = Function::powerSet(programmers);
    StrVector skills = Function::linesToVec(programmers);

    //  perms = {0, 1, 2, 01, 02, 12, 012}                                                                         |    size: 7 (2^programmers - 1(empty set))
    //  skills = {1110, 0101, 1011}                                                                                |    size: 3 (equals to number of programmers)
    //  map = {0 -> {True, True, True, False}, 1 -> {False, True, False, True}, 2 -> {True, False, True, True}}    |    size: 3 (equals to number of programmers)

    IntVecMap psMap = Candidate::allocate(skills, languages);

    int counter = 0;
    for (int i = 0; i != skills.size(); ++i)
    {

    }

    

    return 0;
}

//StrVector allPerms4ProgrammersVec = Function::powerSet(programmers);                 //  ' ', 0, ' ', 1, ' ', 2, ' ', 01, ' ', 02, ' ', 12, ' ', 012, ' '
//std::stringstream ss;
//for (std::string k : allPerms4ProgrammersVec)
//ss << k;
//
//std::string str;
//str = ss.str();                                         // " "0" "1" "2" "01" "02" "12" "012" "
//
//str.erase(str.begin());
//str.erase(str.end());                              //  0" "1" "2" "01" "02" "12" "012
//
//StrVector permsVec;
//for (int i = 0; i != str.size(); ++i)
//{
//std::string curr = "";
//if (str[i] != ' ')
//{
//do
//{
//curr += str[i];
//++i;
//}
//while (str[i] != ' ');
//
//if (curr.size() != 0)
//{
//permsVec.push_back(curr);
//curr.clear();
//}
//}
//}


//-------initial cycle:-------//
//for (int i = 0; i != permsVec.size(); ++i)
//{
//    int counter = 0;
//    int strCounter = 0;
//
//    if (permsVec[i].size() < 2)
//    {
//        for (int j = 0; j != languages; ++j)
//            strCounter += programmersVec[std::stoi(permsVec[i])][j];
//    }
//    else
//    {
//        for (int j = 0; j != languages; ++j)
//            for (int y = 0; y != languages; ++y)
//            {
//                strCounter +=
//            }
//    }
//
//    if (strCounter == languages)
//        ++counter;
//}
