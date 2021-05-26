#include <iostream>
using namespace std;

const int SIZE1 = 5;
const int SIZE2 = 10;

int findSame(int [], int []);

int main()
{
  int result;
  int numbers1[SIZE1] = {2, 3, 5, 9, 10};
  int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

  result = findSame(numbers1, numbers2);

  if(result == 1)
    cout << "numbers1 is a subset of numbers 2." << endl;
  else 
    cout << "numbers1 is not a subset of numbers 2." << endl;

}

int findSame(int numbers1[], int numbers2[])
{
   for(int i = 0; i < SIZE2; i++)
   {
    for(int j = 0; j < SIZE1; j++)
      {
        if(numbers2[i] == numbers1[j])
          cout << "The array element " << j << " from numbers 2 is contained in array numbers1." << endl;
      }
   } 
}
