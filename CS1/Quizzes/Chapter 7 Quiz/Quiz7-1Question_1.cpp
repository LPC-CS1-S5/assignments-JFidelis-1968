#include <iostream>
#include <cmath>
using namespace std;

void checkNum(int);

const int N = 10;

int main()
{
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  for(int i = 0; i < N; i++)
  {
    checkNum(number, i);
  }
}

void checkNum(int number[i])
{
  if (abs(number[i] - number[i + 1]0) < 10)
    cout << "The number is less than 10" << endl;
}