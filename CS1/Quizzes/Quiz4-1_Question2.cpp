#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double W02 = 1.10;
    const double W06 = 2.20;
    const double W10 = 3.70;
    const double W20 = 4.80;
    double rate, weight, distance;
	double total_charge;

	cout << "Please input the weight of your package in kilograms." << endl;
    cin >> weight;

	if ( weight < 0 || weight > 20 )
		{
			cout << "Invalid user input, please input a weight between 0 and 20 kilograms."  << endl;
			exit(0);
		}
	
	cout << "Please input the distance in miles you would like to ship the package." << endl;
	cin >> distance;

	if ( distance < 10 || distance > 3000 )
		{
			cout << "Invalid user input, please input a distance between 10 and 3000 miles." << endl;
			exit (0);
		}


	if ( weight <= 2 )
		rate = W02;

	else if ( weight <= 6 ) 
		rate = W06;

	else if ( weight <= 10 )
		rate = W10;

	else if ( weight <= 20 )
		rate = W20;


	if ( distance > 500 )
		total_charge = ( distance / 500 ) * rate;
		else
			total_charge = rate;

	cout << setprecision(2) << fixed;	
	cout << "The total charge for the shipping of your " << weight << "kg package over " << distance << " miles will cost $" << total_charge << "." << endl;
	
	return 0;
}