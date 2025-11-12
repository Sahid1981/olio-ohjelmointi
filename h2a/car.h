#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car(string,string,int);
    Car();
    void printData();//tulostaa auton merkin, mallin ja valmistusvuoden.
    void setBrand(string);//asettaa auton merkinusing namespace std;
    void setModel(string);//asettaa auton mallin
    void setYearModel(int); //asettaa valmistusvuoden



};

#endif // CAR_H
