#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("volvo","xc40",2015);
    carList.emplace_back("volvo","xc60",2020);
    carList.emplace_back("volvo","xc90",2021);
    cout << "Toinen auto: " << endl;
    carList[1].printData();
    cout << endl;
    cout << "KAIKKI AUTOT" << endl;
    for (int i=0; i<3; i++)
    {
        carList[i].printData();
        cout << endl;
    }
    return 0;
}
