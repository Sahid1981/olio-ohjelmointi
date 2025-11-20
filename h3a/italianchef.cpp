#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string n) : Chef(n)
{
    std::cout << "Italian Chef " << name << " konstruktori" << std::endl;
};

ItalianChef::~ItalianChef()
{
    std::cout << "Italian Chef " << name << " destruktori" << std::endl;
}

std::string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    std::cout << "Italian Chef " << name << " makes pasta" << std::endl;
}
