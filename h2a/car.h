#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car
{
public:
    void printData();//tulostaa auton merkin, mallin ja valmistusvuoden.
    string setBrand(string);//asettaa auton merkinusing namespace std;
    string setModel(string);//asettaa auton mallin
    int setYearModel(int); //asettaa valmistusvuoden

private:
    string brand;
    string model;
    int yearModel;

};

#endif // CAR_H
