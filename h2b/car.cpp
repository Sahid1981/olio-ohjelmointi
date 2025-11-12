#include "car.h"
#include <iostream>


void Car::printData()
{
    std::cout << "Merkki: " << brand << std::endl;
    std::cout << "Malli: " << model << std::endl;
    std::cout << "Mallivuosi: " << yearModel << std::endl;

}

Car::Car(std::string b, std::string m, int ym)
{
    brand = b;
    model = m;
    yearModel = ym;
}


