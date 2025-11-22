#include "animal.h"
#include<iostream>

Animal::Animal() {}

Animal::~Animal()
{
    std::cout << "tuhottu" << std::endl;
}

void Animal::callout(void)
{
    std::cout << "Eläin ääntelee." << std::endl;
}
