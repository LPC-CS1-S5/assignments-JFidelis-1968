#include <iostream>
using namespace std;

bool inputvalidate ( int, int );

void getlistprime ( int, int );

int main()
{
    int num1, num2;

    cout << "Please enter two integers for the beginning and end of the range." << endl;
    cin >> num1 >> num2;

    if ( inputvalidate ( num1 , num2 ) )
    {
        getlistprime ( num1 , num2 );
    }
}

bool inputvalidate ( int num1, int num2 )
{
    if ( ( num1 > num2 ) || ( num1 < 2 ) || ( num2 < 0 ) )
        return 0;
    else
        return 1;    
}

void getlistprime ( int num1 , int num2 )
{
    int i, j;

    for ( i = num1; i < num2; i++ )
    {
        for ( j = 2; j <= ( i / 2 ); j++ )
        {
            if ( i % j == 0 )
                break;
        }
        if ( j > ( i / 2 ) )
            cout << i << endl;
    }        
}