#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    //luo kaksi carclassin oliota joissa moelemmissa käytetään eri tyylistä menetelmää tietojen asettamiseen
    //tämän jälkeen molempien tiedot tulostetaan
    Car objCar1("volvo", "v30", 2005);
    objCar1.printData();
    Car objCar2;
    objCar2.setBrand("Kiesi");
    objCar2.setModel("laho");
    objCar2.setYearModel(2000);
    objCar2.printData();
    cout << "\n" << "\n";

    //luo objeReact1 olion kekomuistiin ja tulostaa sen tiedot, jonka jälkeen olio poistetaan
    rectangle *objeRect1;
    objeRect1 = new rectangle();
    objeRect1->setHeight(20.0);
    objeRect1->setWidth(10.0);
    cout << "korkeus: 20.0" << endl;
    cout << "leveys: 10.0" << endl;
    cout << "pinta-ala: " << objeRect1->getArea() << endl;
    cout << "ympärysmitta: " << objeRect1->getCircum() << endl;
    delete objeRect1;
    objeRect1=nullptr;
    cout <<"\n"<<"\n";

    //Luo unique student1 pointerin ja tulostaa opiskelijan tiedot
    unique_ptr<student> student1 = make_unique<student>();
    student1->setName("jingle jongle");
    student1->setStudentNumber(145254);
    student1->setAvarage(5.0);
    cout << "Nimi: " << student1->getName() << endl;
    cout << "Opiskelija numero: " << student1->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student1->getAvarage() << endl;

    return 0;
}
