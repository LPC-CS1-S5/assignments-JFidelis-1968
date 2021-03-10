#include <iostream>
using namespace std;

int main()
{
  int num;
  int i;
  int start, end;

  cout << "Please enter a starting value and an ending value. The starting value must be less than the ending value and be between 1 and 100." << endl;
  cin >> start >> end;

  while ( start > end )
  {
    cout << "Please try again." <<endl;
    cin >> start >> end;
  }

  while ( ( start < 1 || start > 100 ) || ( end < 1 || end > 100 ))
  {
    cout << "Please try again." <<endl;
    cin >> start >> end;
  }

  num = start;

  while ( num <= end )
  {
    for ( i = 2; i < num; i++ )
    {
      if ( num % i == 0 )
        break;
    }

    if ( !(i != num) )
      cout << num << " is a prime number." << endl;
    num++;
  }

  return 0;
}