#include <iostream>
using namespace std;

int main()
{
  int N, M;
  int pow, exp;
  
  cout << "Enter the base 'N' and the exponent 'M'. They must be greater than 0 and less than 10:" << endl;
  cin >> N >> M;

  while ( ( N < 1 || N > 10 ) && ( M < 1 || M > 10 ) )
  {
    cout << "Please try again, the integers must be greater than 0 and less than 10." << endl;
    cin >> N >> M;
  }

}