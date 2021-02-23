#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   int selection;
   double radius, circle;
   double length, width, rectangle;
   double base, height, triangle;


    cout << "Geometry Calculator" << endl;
    cout << " " << endl;
    cout << "   1. Area of a Circle" << endl;
    cout << "   2. Area of a Rectangle" << endl;
    cout << "   3. Area of a Triangle" << endl;
    cout << "   4. Quit" << endl;
    cout << " " << endl;
    cout << "   Enter your choice (1-4):" << endl;

    cin >> selection;

    switch(selection)
    {
        case 1:
            cout << "Please enter the radius of the circle:" << endl;
            cin >> radius;
            if ( radius < 0 )
            {
                cout << "Invalid input, exiting program" << endl;
                exit(0);
            }
            else
            {
                circle = 3.14159 * pow( radius, 2 );
                cout << setprecision(5) << fixed;
                cout << "The area of the circle is " << circle << "." << endl;
            }
            break;
        case 2:
            cout << "Please enter the length and width of the rectangle:" << endl;
            cin >> length >> width;
            if ( length < 0 || width < 0)
            {
                cout << "Invalid input, exiting program" << endl;
                exit(0);
            }
            else
            {
                rectangle = length * width;
                cout << setprecision(2) << fixed;
                cout << "The area of the rectangle is " << rectangle << "." << endl;
            }
            break;
        case 3:
            cout << "Please enter the base and height of the triangle" << endl;
            cin >> base >> height;
            if ( base < 0 || height < 0 )
            {
                cout << "Invalid input, exiting program" << endl;
                exit(0);
            }
            else
            {
                triangle = ( base * height ) / 2;
                cout << setprecision(2) << fixed;
                cout << "The area of the triangle is " << triangle << "." << endl;
            }
            break;
        case 4:
            cout << "Exiting program." << endl;
            exit(0);
            break;
        default:
            cout << "Invalid input, exiting program." << endl;
            exit(0);
    }
    return 0;     
} 
