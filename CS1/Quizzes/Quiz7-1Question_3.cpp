#include <iostream>
using namespace std;

int findMax(int [], int, int);

int main()
{
  const int N = 10;
  int numbers[N] {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
  int max = 0;


}

int findMax(int numbers[], int max, int N)
{
  if(max < numbers[N])
    max = numbers[N];
  return max;
}