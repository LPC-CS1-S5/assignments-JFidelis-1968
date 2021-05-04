#include <iostream>
using namespace std;

int findMax(int [], int, int);

int main()
{
  const int N = 10;
  int numbers[N] {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
  int max = 0;

  for(int i = 0; i < (N / 2); i++)
  {
    max = findMax(numbers, max, i);
  }
  cout << "The maximum value in the first half is " << max << endl;

  for(int i = N - 1; i > (N / 2); i--)
  {
    max = findMax(numbers, max, i);
  }
  cout << "The maximum value in the second half is " << max << endl;
}

int findMax(int numbers[], int max, int i)
{
  if(max < numbers[i])
    max = numbers[i];
  return max;
}