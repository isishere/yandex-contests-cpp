#include <fstream>
#include <iostream>
#include <stdexcept>

#include "solution.h"


const char* CSV_FILE_NAME = "/Users/ilyasuchkov/Proga/cpp/tests/test2/students.csv";

// reads a file and fills up a collection of students
void test1()
{
    std::ifstream inpFile(CSV_FILE_NAME);
    if(!inpFile.is_open())
    {
        //std::cerr << "Can't open file";
        throw std::runtime_error("Can't open file");
    }

    std::vector<Student> students = readStudents(inpFile);

    // if we need to check it as an output
    for (const Student& stu : students)
    {
        std::cout << stu.name << "\t" << stu.group << "\t"
                  << stu.grades.size() << "\n";
    }

    int a = 0;
}

// outputs a collection of students in a stream
void test2()
{
    std::ifstream inpFile(CSV_FILE_NAME);
    if(!inpFile.is_open())
    {
        throw std::runtime_error("Can't open file");
    }

    std::vector<Student> students = readStudents(inpFile);
    std::cout << students;
}

// checks a function calculating average among groups
void test3()
{
    std::ifstream inpFile(CSV_FILE_NAME);
    if(!inpFile.is_open())
    {
        throw std::runtime_error("Can't open file");
    }

    std::vector<Student> students = readStudents(inpFile);
    std::map<uint16_t, double> groupGpas = calcGroupAverage(students);

    int a = 0;
}

// checks removing weak students
void test4()
{
    std::cout << "\n\nTest 4: Removing. Before:\n";

    std::ifstream inpFile(CSV_FILE_NAME);
    if(!inpFile.is_open())
    {
        throw std::runtime_error("Can't open file");
    }

    std::vector<Student> students = readStudents(inpFile);
    std::cout << students;

    std::cout << "Removing. After:\n";
    std::cout << removeWeakStudents(students);
}


int main()
{
    test1();
    test2();
    //test3();
    //test4();

    return 0;
}
