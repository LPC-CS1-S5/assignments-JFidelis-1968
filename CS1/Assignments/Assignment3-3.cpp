#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double Celcius;
    double Fahrenheit;

    cout << "Enter the temperature in Celcius" << endl;
    cin >> Celcius;

    Fahrenheit = (9/5.0) * Celcius + 32;

    cout << Celcius << " degrees Celcius is " << Fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}