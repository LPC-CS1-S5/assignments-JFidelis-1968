#include <iostream>
using namespace std;

int main()
{
    int num;
    int i;
    int start, end;

    cout << "Please enter two numbers: " << endl;
    cin >> start >> end;

    num = start;

    while ( num <= end )
    {
        for ( i = 2; i < num; i++ )
        {
            if ( num % i == 0 )
                break;
        }

        if ( i != num )
            cout << num << " is not a prime number." << endl;
        else
            cout << num << " is a prime number." << endl;
        
        num++;
    }

    return 0;
}