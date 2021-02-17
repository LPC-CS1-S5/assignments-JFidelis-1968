#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    double num1;
    double num2;
    double num3;
    double sum;
    double avg;

    srand(time(0));

    num1 = rand() % 100;
    num2 = rand() % 100;
    num3 = rand() % 100;

    sum = num1 + num2 + num3;
    avg = sum / 3;

    cout << setprecision(5) << fixed;
    cout << "Random number 1 is " << num1 << endl;
    cout << "Random number 2 is " << num2 << endl;
    cout << "Random number 3 is " << num3 << endl;
    cout << "The sum of the numbers is " << sum << endl;
    cout << "The average of the numebrs is " << avg << endl;

    return 0;
}