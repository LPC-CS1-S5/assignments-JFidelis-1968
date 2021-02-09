#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string month1;
    string month2;
    string month3;
    float rainfall1;
    float rainfall2;
    float rainfall3;

    cout << "Enter the first month and rainfall in inches" << endl;
    cin >> month1;
    cin >> rainfall1;
    cout << "Enter the second month and rainfall in inches" << endl;
    cin >> month2;
    cin >> rainfall2;
    cout << "Enter the third month and rainfall in inches" << endl;
    cin >> month3;
    cin >> rainfall3;

    cout << "The rainfall for " << month1 << " was " << rainfall1 << " inches." << endl;
    cout << "The rainfall for " << month2 << " was " << rainfall2 << " inches." << endl;
    cout << "The rainfall for " << month3 << " was " << rainfall3 << " inches." << endl;

    return 0;
}