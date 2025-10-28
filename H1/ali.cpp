#include <iostream>
#include <iomanip>
#include "ali.h"

using namespace std;

void calcSum(int num1, int num2)
{
    int tulos = num1 + num2;
    cout << tulos << endl;
}
void calcDiv(int num1, int num2)
{
    if(num2 == 0)
    {
    cout << "jakaja ei voi olla nolla";
    }
    else
    {
    float tulos = static_cast<float>(num1) / num2;
    cout << fixed << setprecision(2);
    cout << tulos << endl;
    }
}
int retSum(int num1, int num2)
{
    return num1 + num2;
}
float retDiv(int num1, int num2)
{
    if(num2 == 0)
    {
        throw std::runtime_error("jakaja ei saa olla negatiivinen.");
    }
    return static_cast<float>(num1) / num2;
}
