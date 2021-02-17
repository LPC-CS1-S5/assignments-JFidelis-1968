#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Please input three different integers" << endl;
    cin >> num1 >> num2 >> num3;

    if ( num1 < num2 )
    {
        if ( num1 < num3 )
        {
            cout << "The smallest value is " << num1 << endl;
            if ( num2 < num3 )
            {
                cout << "The other value is " << num2 << endl;
                cout << "The largest value is " << num3 << endl;
            }
            else
            {
                cout << "The other value is " << num3 << endl;
                cout << "The largest value is " << num2 << endl;
            }
            
        }
        else
        {
            cout << "The smallest value is " << num3 << endl;
            cout << "The largest value is " << num2 << endl;
            cout << "The other value is " << num1 << endl;
        }
    }
    else if ( num2 < num1 )
    {
        if ( num2 < num3 )
        {
            cout << "The smallest value is " << num2 << endl;
            if ( num1 < num3 )
            {
                cout << "The other value is " << num1 << endl;
                cout << "The largest value is " << num3 << endl;
            }
            else
            {
                cout << "The other value is " << num3 << endl;
                cout << "The largest value is " << num1 << endl;
            }
        }
        else
        {
            cout << "The smallest value is " << num3 << endl;
            cout << "The largest value is " << num1 << endl;
            cout << "The other value is " << num2 << endl; 
        }
    }

    return 0;
}