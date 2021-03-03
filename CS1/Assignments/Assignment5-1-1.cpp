#include <iostream>
using namespace std;

int main()
{
	int i, n, num;
	int nth_power;
	float invert_nth_power;

	nth_power = 1;

	cout << "Enter exponent 'n'." << endl;
	cin >> n;

	if ( n >= 0 )
		num = n;
	else
		num = n * -1;

	for ( i = 0; i < num; i++ )
		nth_power *= 2;

	if ( n < 0 )
    {
		invert_nth_power = 1.0 / nth_power;
        cout << invert_nth_power;
    }
	else
		cout << nth_power;
	
	return 0;
}