#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int sum;
    int average;
    
    srand(time(0));

    num1 = rand() % 100;
    num2 = rand() % 100;
    num3 = rand() % 100;
    
    sum = num1 + num2 + num3;
    average = sum / 3;

    cout << setprecision(2) << fixed;
    cout << "Random number 1: " << num1 << endl;
    cout << "Random number 2: " << num2 << endl;
    cout << "Random number 3: " << num3 << endl;
    cout << "The sum of all three numbers is " << sum << endl;
    cout << "The average of all three numbers is " << average << endl;
         
    return 0;
}