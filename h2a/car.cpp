#include "car.h"
#include<iostream>

using namespace std;

Car::Car(string a, string b, int c)
{
    brand = a;
    model = b;
    yearModel = c;
}

Car::Car()
{

}

void Car::printData()
{
    cout << "auton merkki = " << brand << endl;
    cout << "auton malli = " << model << endl;
    cout << "auton vuosimalli = " << yearModel << endl;
}

void Car::setBrand(const string b)
{
    brand = b;
}

void Car::setModel(const string m)
{
    model = m;
}

void Car::setYearModel(int ym)
{
    yearModel = ym;
}
