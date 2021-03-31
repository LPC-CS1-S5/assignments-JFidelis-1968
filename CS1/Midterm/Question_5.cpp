#include <iostream>
using namespace std;

int main()
{
  const int N = 5, M = 5;

  int i, j;

  for (i = 2; i < N; i++)
    for (j = i; j < M - i; j++)
      cout << " (" << i << "," << j << ") " << endl;
    cout << endl;
}