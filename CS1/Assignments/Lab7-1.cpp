#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int makearray(int []);
void bubble(int [], int);
void printout(int[], int);

const int SIZE = 100;

int main()
{
   int number[SIZE];
   int last;

   srand(time(0));

   last = makearray(number);
   printout(number, last);
   bubble(number, last);
   printout(number, last);
}

int makearray(int number[])
{
   for(int i = 0; i < SIZE; i++)
    {
        
      number[i] = rand() % 100;
    }
    return 0;
}

void bubble(int number[], int last)
{

}

void printout(int number[], int last)
{
   cout << number[SIZE] << endl;
}