#include "animal.h"
#include "dog.h"
#include<memory>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    unique_ptr<Animal> objAnimal = std::make_unique<Animal>();
    objAnimal->callout();
    unique_ptr<Animal> objDog = make_unique<Dog>();
    objDog->callout();
}
