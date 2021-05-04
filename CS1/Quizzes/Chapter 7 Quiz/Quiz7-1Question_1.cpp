#include <iostream>
#include <cmath>
using namespace std;

int checkNum(int [], int);

const int N = 10;

int main()
{
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  int absval = 0;

  cout << "For array " << number[N] << " the following absolute value difference exist." << endl;

  for(int i = 0; i < N; i++)
  {
    absval = checkNum(number, i);
    if (absval == 1)
      cout << number[i] << " Has an absolute value difference less than 10." << endl;
  }
}

int checkNum(int number[], int i)
{
  if (abs(number[i] - number[i + 1]) < 10)
  {
    return 1;
  } 
}