#include"chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    {
    Chef objChefa("Gordon Ramsey");
    objChefa.makeSalad();
    objChefa.makeSoup();
    }
    ItalianChef objChefb("Anthony Bourdain");
    objChefb.makeSalad();
    objChefb.makeSoup();
    objChefb.makePasta();
    cout<< "name of the Italian Chef is obj" << objChefb.getName() << endl;
    return 0;
}
