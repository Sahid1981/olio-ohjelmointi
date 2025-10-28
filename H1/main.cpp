#include <iostream>
#include <iomanip>

#include "ali.h"

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Anna luku.\n";
            cin >> a;
    cout << "Anna toinen luku.\n";
            cin >> b;
calcSum(a, b);
calcDiv(a, b);
cout << " ";
int summa = retSum(a,b);
cout << "Toinen funktio palautti: " << summa << endl;
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
