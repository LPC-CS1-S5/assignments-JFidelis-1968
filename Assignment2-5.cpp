//Challenge 1

// Check the lecture slide for more details
// Write a program that computes the tax and tip on a restaurant bill 
// for a patron with a $88.67 meal charge.

//The tax should be 6.75 percent of the meal cost.
//The tip should be 20 percent of the total after adding the tax.

//Display the meal cost, tax amount, tip amount, and total bill on the // screen(All amount should be displayed with 2 precision numbers and decimal point.)

#include <iostream>
using namespace std;

int main()
{
    double meal_price = 88.67;
    double meal_tax_percent = 0.0675;
    double meal_tip_percent = 0.2;  

    double meal_tax = meal_price * meal_tax_percent;
    double meal_tip = ( meal_tax + meal_price ) * meal_tip_percent;
    double meal_total = meal_tip + meal_tax + meal_price;

    cout << "Meal cost: $" << meal_price << endl;
    cout << "Tax amount: $" << meal_tax << endl;
    cout << "Tip amount: $" << meal_tip << endl;
    cout << "Meal Total: $" << meal_total << endl;

    return 0;
}