#include <iostream>
#include <cmath>
using namespace std;

int checkNum(int [], int);

const int N = 10;

int main()
{
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  int absval = 0;

  for(int i = 0; i < N; i++)
  {
    absval = checkNum(number, i);
    if (absval == 1)
      cout << number[i] << endl;
  }
}

int checkNum(int number[], int i)
{
  if (abs(number[i] - number[i + 1]) < 10)
    cout << "The number is less than 10" << endl;
  return 1;
}