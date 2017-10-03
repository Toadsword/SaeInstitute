// OOP ex 2.1 - Best Student
// Description : Finish the program of the teacher and print the best student of the vector
// Author : Duncan Bourquard
// Date : 03.10.2017

#include <iostream>
#include <string>
#include <vector>

struct StudentExam
{
	std::string name;
	double grade;
};

void print_best_student(std::vector<StudentExam>& students)
{
	StudentExam bestStudent{"noone", 0};

	for (const StudentExam& student : students)
	{
		if (student.grade > bestStudent.grade)
		{
			bestStudent = student;
		}
	}

	std::cout << "The best student is " << bestStudent.name << " with " << bestStudent.grade << " as best mark.\n";
}

int main()
{
	std::vector<StudentExam> students = {
		{ "Jack", 2.0 },
		{ "John", 4.5 },
		{ "James", 6.0 },
		{ "Jillie", 4.0 },
		{ "Jonas", 3.5 },
	};
	print_best_student(students);

	system("pause");
	return 0;

}