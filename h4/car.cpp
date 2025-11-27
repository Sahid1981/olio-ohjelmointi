
#include "car.h"
#include <iostream>

Car::Car() {
    objEngine = std::make_unique<Engine>();
    objWheel1 = std::make_unique<Wheel>();
    objWheel2 = std::make_unique<Wheel>();
    objWheel3 = std::make_unique<Wheel>();
    objWheel4 = std::make_unique<Wheel>();
}

Car::~Car()
{

}

Car::Car(std::string m, std::string b)
{
    model = m;
    brand = b;
}

void Car::setEngine()
{
    objEngine->setDisplacement(2.0);
    objEngine->setHorsepower(150);
}

void Car::setWheel()
{
    objWheel1->setSize(17);
    objWheel1->setType("kesarengas");
    objWheel2->setSize(17);
    objWheel2->setType("kesarengas");
    objWheel3->setSize(17);
    objWheel3->setType("kesarengas");
    objWheel4->setSize(17);
    objWheel4->setType("kesarengas");

}

std::string Car::getModel() const
{
    return model;
}

void Car::setModel(const std::string &newModel)
{
    model = newModel;
}

std::string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const std::string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    std::cout << "Auto : " << Car::getModel() << " " << Car::getBrand() << std::endl;
    std::cout << "Moottori: " << objEngine->getHorsepower() <<" hp, " << objEngine->getDisplacement() <<" L"<<std::endl;
    std::cout << "Rengas 1:" <<objWheel1->getSize() <<" tuumaa, "<< objWheel1->getType()<< std::endl;
    std::cout << "Rengas 2:" <<objWheel2->getSize() <<" tuumaa, "<< objWheel2->getType()<< std::endl;
    std::cout << "Rengas 3:" <<objWheel3->getSize() <<" tuumaa, "<< objWheel3->getType()<< std::endl;
    std::cout << "Rengas 4:" <<objWheel4->getSize() <<" tuumaa, "<< objWheel4->getType()<< std::endl;

}
