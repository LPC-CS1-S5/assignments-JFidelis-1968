# include <iostream>
using namespace std;

int main()
{
    int selection;

    cout << "Which formula do you want to see?" << endl;
    cout << "1. Area of a circle" << endl;
    cout << "2. Area of a rectangle" << endl;
    cout << "3. Area of a cylinder" << endl;
    cout << "4. None of them!" << endl;

    cin >> selection;

    switch(selection)
    {
        case 1:
            cout << "Pi times radius squared" << endl;
            break;
        case 2:
            cout << "Length times width" << endl;
            break;
        case 3:
            cout << "Pi times radius squared times height" << endl;
            break;
        case 4:
            cout << "Well okay then, good bye" << endl;
            break;
        default:
            cout << "Not good with numbers, eh?" << endl;
    }

    return 0;     
}