#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    int num1, num2, num3, num4, num5;
    int min, max, sum, average;

    ifs.open("Random_Numbers.txt");

    if ( ifs.fail() )
    {
        cerr << "File Open Error" << endl;
        exit(0);
    }

    while ( ifs >> num1 >> num2 >> num3 >> num4 >> num5 )
    {
        cout << num1 << " was read from file." << endl;
        cout << num2 << " was read from file." << endl;
        cout << num3 << " was read from file." << endl;
        cout << num4 << " was read from file." << endl;
        cout << num5 << " was read from file." << endl;
    }

    ifs.close();

    sum = num1 + num2 + num3 + num4 + num5;
    average = sum / 5;

    min = num1;
    max = num5;

    if ( min > num2 )
        min = num2;
    if ( min > num3 )
        min = num3;
    if ( min > num4 )
        min = num4;
    if ( min > num5 )
        min = num5;

    if ( max < num4 )
        max = num4;
    if ( max < num3 )
        max = num3;
    if ( max < num2 )
        max = num2;
    if ( max < num1 )
        max = num1;

    cout << "The minimum value is " << min << endl;
    cout << "The maximum value is " << max << endl;
    cout << "The sum of the random numbers is " << sum << endl;
    cout << "The average of the random numbers is " << average << endl;

    return 0;
}