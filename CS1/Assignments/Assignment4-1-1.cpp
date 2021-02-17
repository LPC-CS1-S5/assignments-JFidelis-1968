#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float Percent_0to19 = 0.2;
    const float Percent_20to49 = 0.3;
    const float Percent_50to99 = 0.4;
    const float Percent_100plus = 0.5;

    double discount_rate;
    int number_sold;
    int original_price = 99;
    double original_amount;
    double discount_amount;
    double total_amount;

    cout << "Input the number of units sold." << endl;
    cin >> number_sold;

    if ( number_sold < 0 )
        {
        cout << "Invalid user input, please use a postive integer." << endl;
        exit (0);
        }
        
    if ( number_sold < 20 )
        discount_rate = Percent_0to19;
        
    else if ( number_sold < 50 )
        discount_rate = Percent_20to49;
        
    else if ( number_sold < 100 )
        discount_rate = Percent_50to99;       
        
    else if (number_sold > 100 )
        discount_rate = Percent_100plus;       
        
    original_amount = original_price * number_sold;
    discount_amount = original_amount * discount_rate;
    total_amount = original_amount - discount_amount;
    
    cout << "The discounted price for the amount of units sold is $" << total_amount << endl;
    
    return 0;
}