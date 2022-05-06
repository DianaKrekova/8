#include "Ex8.h"

Student::Student()
{
	name = "";
	last_name = "";
	average_ball = 0.0;
}

string Student::get_name()
{
	return Student::name;
}

string Student::get_last_name()
{
	return Student::last_name;
}

float Student::get_average_ball()
{
	return Student::average_ball;
}

Student Student::operator=(Student stud)
{
	average_ball = stud.average_ball;
	name = stud.name;
	last_name = stud.last_name;
	return *this;
}

Student::~Student()
{
}

ostream& operator<<(ostream& os, const Student& student) {
	os << student.name << " " << student.last_name << " " << student.average_ball;
	return os;
}
istream& operator>>(istream &is, Student& student) {
	is >> student.name >> student.last_name >> student.average_ball;
	return is;
}