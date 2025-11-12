#include "student.h"

std::string student::getName() const
{
    return name;
}

void student::setName(const std::string &newName)
{
    name = newName;
}

int student::getStudentNumber() const
{
    return studentNumber;
}

void student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double student::getAvarage() const
{
    return avarage;
}

void student::setAvarage(double newAvarage)
{
    avarage = newAvarage;
}

student::student() {}
