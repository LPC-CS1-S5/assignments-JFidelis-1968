#include <iostream>
#include <cmath>
using namespace std;

void checkNum(int, int);

const int N = 10;

int main()
{
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
   

}

void checkNum(int n, int i)
{
  if (abs(n[i] - n[i + 1]) < 10)
    cout << "The number is less than 10" << endl;
}