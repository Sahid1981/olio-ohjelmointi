#ifndef CAR_H
#define CAR_H
#include<string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void printData();
    Car(std::string,std::string,int);
};

#endif // CAR_H
