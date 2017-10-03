// OOP ex 3.1 - List of students
// Description : Finish the program of the teacher and print all the students
// Author : Duncan Bourquard
// Date : 03.10.2017

#include <iostream>
#include <string>
#include <list>

struct StudentExam
{
	std::string name;
	double grade;
};

int main()
{
	std::list<StudentExam> students = {
		{ "Jack", 2.0 },
		{ "John", 4.5 },
		{ "James", 6.0 },
		{ "Jillie", 4.0 },
		{ "Jonas", 3.5 },
	};

	//show the names and grades of students with std::cout
	for (const StudentExam& student : students)
	{
		std::cout << student.name << " has done the mark " << student.grade << ".\n";
	}

	system("pause");
	return EXIT_SUCCESS;
}