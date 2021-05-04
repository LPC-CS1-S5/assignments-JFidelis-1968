#include <iostream>
#include <cmath>
using namespace std;

void checkNum(int [], int, int);

const int N = 10;

int main()
{
    int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
    int absval = 0;

    cout << "For array {10, 15, 0, -25, 19, 20, 25, 30, 45, 20} the following absolute value difference exist." << endl;

    for(int i = 0; i < N; i++)
    {
     checkNum(number, i, absval);
        if (absval == 1)
        cout << number[i] << " Has an absolute value difference less than 10." << endl;
    }
}

void checkNum(int number[], int i, int absval)
{
    int absval = 0;
    if (abs(number[i] - number[i + 1]) < 10)
    {
        absval = 1;
    }
    return absval; 
}