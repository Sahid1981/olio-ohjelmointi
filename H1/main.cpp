#include <iostream>
#include <iomanip>

#include "ali.h"

using namespace std;

int main()
{
    //määritetään muuttujat
    int a;
    int b;

    //Pyydetään käyttäjältä kokonaisluvut
    cout << "Anna kokonaisluku.\n";
            cin >> a;
    cout << "Anna toinen kokonaisluku.\n";
            cin >> b;

    //suoritetaan ekat tulostavat funktiot
    cout << "ensimmäisten funktioiden tulostukset:"<< endl;
calcSum(a, b);
calcDiv(a, b);
cout << endl;

    //palautetaan tulokset toisista funktioista
int summa = retSum(a,b);
cout << "Toisten funtioiden palautukset:" << endl;
cout << "Summa: " << summa << endl;
    //Tarkistetaan try catch rakenteella onko jakaja nolla
try
    {
    float result = retDiv(a,b);
    cout << fixed << setprecision(2);
    cout << a << "/" <<  b << " = " << result << endl;
    }
    catch (runtime_error& e)
    {
    cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}
