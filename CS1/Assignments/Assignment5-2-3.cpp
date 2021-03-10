#include <iostream>
using namespace std;

int main()
{
    int i, j;

    cout << endl;
    cout << "Example 1:" << endl;
    cout << endl;

    for ( i = 0; i < 3; i++ )
    {
        for ( j = 0; j < i + 1; j++ )
        {
            cout << i << " " << j << endl;
        }
    }

    cout << endl;
    cout << "Example 2:" << endl;
    cout << endl;

    for ( i = 0; i < 3; i++ )
    {
        for ( j = i; j < 3; j++ )
        {
            cout << i << " " << j << endl;
        }
    }

    cout << endl;
    cout << "Example 3:" << endl;
    cout << endl;

    for ( i = 0; i < 3; i++ )
    {
        for ( j = 2 - i; j < 3; j++ )
        {
            cout << i << " " << j << endl;
        }
    }

    cout << endl;
    return 0;
}