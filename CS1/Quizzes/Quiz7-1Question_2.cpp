#include <iostream>
using namespace std;

void printtriangle(int [][3], int);

int main()
{
    const int SIZE = 3;
    int numbers[SIZE][SIZE] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

    printtriangle(numbers, SIZE);
}

void printtriangle(int numbers[][3], int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
      for(int j = 0; j < i + 1; j++)
      {
          cout << numbers[i][j] << " ";
      }
      cout << endl;
    } 
}
