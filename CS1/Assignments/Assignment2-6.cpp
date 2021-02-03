#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int variable_1, variable_2, variable_3, variable_4, variable_5, divisor_1;

    variable_1 = 28;
    variable_2 = 32;
    variable_3 = 37;
    variable_4 = 24;
    variable_5 = 33;
    divisor_1 = 5;
    

    double sum;
    double average;

    sum = variable_1 + variable_2 + variable_3 + variable_4 + variable_5;
    average = sum / divisor_1;

    cout << setprecision(3) << fixed;
    cout << "sum = " << sum << endl;
    cout << "average = " << average << endl;

    return 0;
}