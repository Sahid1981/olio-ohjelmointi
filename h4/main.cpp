#include <memory>
#include "car.h"

using namespace std;

int main()
{
    unique_ptr<Car> objCar = make_unique<Car>();
    objCar->setBrand("Toyota");
    objCar->setModel("Corola");
    objCar->setEngine();
    objCar->setWheel();
    objCar->printDetails();

}
