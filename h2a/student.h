#ifndef STUDENT_H
#define STUDENT_H
#include<string>

class student
{
private:
    std::string name;
    int studentNumber;
    double avarage;
public:
    student();
    std::string getName() const;
    void setName(const std::string &newName);
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    double getAvarage() const;
    void setAvarage(double newAvarage);
};

#endif // STUDENT_H
