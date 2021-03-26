#include <string>
#include <cstdint> // uint8_t, uint16_t
#include <iostream>
#include <vector>
#include <map>
#include <sstream>

/// Structure describes a student and consists of their name (not empty),
/// group number (positive integer), list of grades (each grade from 1 to 10).
struct Student
{
    std::string name;
    uint16_t group;
    std::vector<uint16_t> grades;
};

///=========================[TASK 1: up to 0.35]===============================///
/*!
 * \brief Function loads data about students from a given input stream \a istr,
 * creates a collection of students related to strings in the stream and
 * returns it.
 *
 * \param istr an input stream.
 * \return a collection of students filled up with data read from a given
 * stream.
 *
 * A collection of students is represented by a vector of \a Student type
 * defined above.
 *
 * The given stream encapsulates a text CSV file (with '\t' as delimiter).
 * Each record about students is represented by a single line  (ended with '\n')
 * and corresponds to an element in the vector.
 * A line consists of:
 *  - student's name (string), e.g. “Daireann Blodeuwedd”
 *  - group number (uint), e.g. 171
 *  - a list of grades (each 1..10) separated by the delimiter, e.g. 9 6.
 *
 * All strings are limited in length and do not exceed 100 characters.
 * The attributes within a single line are separated by tab characters ('\t').
 *
 * The empty line occurred in the stream means the input completion — you must
 * properly process this case!
 *
 * We guarantee that input data are correct (no skips, wrong numbers and so on).
 *
 * Student name can contain spaces.
 *
 * Example:
 *      Daireann Blodeuwedd→171→9→6
 *      ...
 *
 * WARNING: here we use → character to depict a tab character '\t'. Do not
 * use it (→) in your program!!!
 *
 * The number of grades for each student may vary and is not known in
 * advance, but there is at least one grade.
 *
 * It is highly recommended to decompose the method properly. Solve each
 * subtasks by using individual functions.
 */

std::vector<std::string> split(std::string line, char delimiter)
{
    std::vector<std::string> result;
    std::stringstream input(line);
    std::string temp;

    while (std::getline(input, temp, delimiter))
        result.push_back(temp);

    return result;
}

std::vector<Student> readStudents(std::istream& istr)
{
    std::vector<Student> res;
    std::string line;

    while(std::getline(istr, line) && istr.good())
    {
        Student st;

        std::vector<std::string> vec = split(line, ',');

        st.name = vec[0];
        st.group = std::stoi(vec[1]);

        for (int i = vec.size() - 1; i != 1; --i)
            st.grades.push_back(std::stoi(vec[i]));

        res.push_back(st);

        line = "";
    }
    return res;
}

///=========================[TASK 2: up to 0.15]===============================///
/*!
 * Overload operator<< for ostream and 1) std::vector<Student> datatype and
 * 2) for Student datatype.
 *The former overload uses the latter one in its implementation.
 *
 * Outputs a given student in the following form (see example):
 *      Name: Daireann Blodeuwedd, Group: 171, GPA: 7.5
 * The student is output beginning at the very first position of a line (in the
 * example above the indentation is made only for technical reasons). There is
 * NO line breaking at the end of the output.
 *
 * GPA is caculated as an average of all grades of a student. For an irregular
 * fraction use the precision provided by the double datatype
 * w/o rounding. If a student doesn't have any grades, output 0.
 * Consider proper decomposition!
 *
 */

std::ostream& operator << (std::ostream& s, const Student& st)
{
    s << "Name: " << st.name << '\t' << "Group: " << st.group << '\t' << "Grades:";

    for (int k : st.grades)
        s << ' ' << k;

    return s;
}

/*! Outputs a vector of students, one student (info) per line.
 * Individual students are output using the rules for the operator<< above.
 * The last line of the list of students should contain a newline symbol.
 */

std::ostream& operator << (std::ostream& s, const std::vector<Student>& vec)
{
    for (std::vector<Student>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        //s << "Name: " << it->name << '\t' << "Group: " << it->group << '\t' << "Grades: ";
        //
        //for (int k : it->grades)
        //    s << ' ' << k;
        //s << std::endl;
        ///  ^^ this one and one below are the same  ///
        s << *it;
        s << std::endl;
    }
    return s;
}

///=========================[TASK 3: up to 0.35]===============================///
/*!
 * \brief Calculates the average grade per group.
 *
 * \param students is a vector of students.
 * \return a collection of averages, a mapping: group num to average grade.
 *
 *
 * Example:
 *      171 → 6.0
 *      172 → 5.888888888..
 *      ...
 *
 * WARNING: here we use → character to depict a mapping of individual values.
 *
 */
std::map<uint16_t, double> calcGroupAverage(const std::vector<Student>& students)
{
    std::map<uint16_t, double> res;

    for (std::vector<Student>::const_iterator it = students.begin(); it != students.end(); ++it)
    {
        std::vector<int> grades;
        std::pair<uint16_t, double> par;

        for (int k : it->grades)
            grades.push_back(k);

        double average = 0.0;

        for (int k : grades)
            average += k;

        par = {it->group, average/grades.size()};
        res.insert(par);
    }
    return res;
}

///=========================[TASK 4: up to 0.15]===============================//
/*!
 * \brief Removes weak students from the given collection
 *
 * \param students is a vector of students.
 * \return the same collection after removing (modified).
 *
 * Strictly do not create a new vector, modify the given one!
 *
 * Example:
 *      Venere Maia, Kalliope Dionysos... are among those students who are removed
 *      from the vector.
 *
 * Consider proper decomposition!
 */
std::vector<Student>& removeWeakStudents(std::vector<Student>& students)
{
    return students;
}
