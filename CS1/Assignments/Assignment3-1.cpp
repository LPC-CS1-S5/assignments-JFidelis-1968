#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int ClassA;
    int ClassB;
    int ClassC;
    float ClassA_price;
    float ClassB_price;
    float ClassC_price;
    float total_amount;

    ClassA_price = 15.00;
    ClassB_price = 12.00;
    ClassC_price = 9.00;

    cout << "How many Class A seat tickets sold?" << endl; 
    cin >> ClassA;
    cout << "How many Class B seat tickets sold?" << endl; 
    cin >> ClassB;
    cout << "How many Class C seat tickets sold?" << endl; 
    cin >> ClassC;

    total_amount = ClassA * ClassA_price + ClassB * ClassB_price + ClassC * ClassC_price;

    cout << setprecision(2) << fixed;
    cout << "Total ticket sales was $" << total_amount << endl;

    return 0;    
}