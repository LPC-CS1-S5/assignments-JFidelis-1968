#include <iostream>
using namespace std;

double nthpowern(double);
double nthpowerp(int);

int main()
{
  int n;
  double result;

  cout << "Please enter the power number: ";
  cin >> n;

  if (n < 0)  
    result = nthpowern(n);  
  if (n > 0)  
    result = nthpowerp(n);
  else
    result = 1;
}

double nthpowern( double n )
{
  float i = 1;

  while ( n < 0 )
  {
    i /= 2.0;
    n++;
  }
  cout << "The result is " << i << endl;
  return(i); 
}

double nthpowerp( int n )
{
  int i = 1;

  while ( n > 0 )
  {
    i *= 2;
    n--;
  }
  cout << "The result is " << i << endl;
  return(i);
}