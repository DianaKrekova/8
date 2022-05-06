#ifndef EX8_H
#define EX8_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    float average_ball;
    string name;
    string last_name;
public:
    Student();
    Student(string n, string ln, float ab) { name = n; last_name = ln; average_ball = ab; };
    string get_name();
    string get_last_name();
    float get_average_ball();
    friend ostream& operator<<(ostream& os, const Student& student);
    friend istream& operator>>(istream &is, Student& student);
    Student operator=(Student stud);
    ~Student();
};
#endif
