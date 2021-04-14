#include <iostream>
using namespace std;

void swapTwoValues(int n1, int n2);
void swapTwoValues(float f1, float f2);

int main()
{
  int n1, n2;
  float f1, f2;
  
  cout << "input two integer values: " << endl;
  cin >> n1 >> n2;

  cout << "input two float values: " << endl;
  cin >> f1 >> f2;

  swapTwoValues(n1, n2);
  swapTwoValues(f1, f2);

  return 0;
}

void swapTwoValues(int n1, int n2)
{
  int swap = 0;

  swap = n1;
  n1 = n2;
  n2 = swap;
}

void swapTwoValues(float f1, float f2)
{
  int swap = 0;

  swap = f1;
  f1 = f2;
  f2 = swap;
}