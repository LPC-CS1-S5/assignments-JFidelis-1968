#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2;
    int i;

    cout << "Please inpute two integers greater than 0 and less than 1300." << endl;
    cin >> num1 >> num2;
    
    while ( num1 < 0 || num2 > 1300 )
    {
        cout << "Please inpute two integers greater than 0 and less than 1300." << endl;
        cin >> num1 >> num2;
    }

    for ( i = 0; num1 < pow(2,i) < num2; i++ )
    {
        if ( pow(2,i) < num2 && pow(2,i) > num1 )
            cout << pow(2,i) << endl;
        else if ( pow(2,i) > num2 )
            exit(0);
    }

    return 0;
}