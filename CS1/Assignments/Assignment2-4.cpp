#include <iostream>
using namespace std;

int main()
{
    double regular_sales_price = 59.95;
    double discount_percent = regular_sales_price * 0.2;
    double new_sales_price = regular_sales_price - discount_percent;

    cout << "Regular sales price: $" << regular_sales_price << endl;
    cout << "Discount amount: $" << discount_percent << endl;
    cout << "Sale price: $" << new_sales_price << endl;

    return 0;
}