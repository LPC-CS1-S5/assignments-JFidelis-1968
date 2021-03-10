#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int rnum, i;

  srand(time(0));

  while ( i < 6 )
  {
    rnum = rand() % 100;
    cout << rnum << " was generated randomly" << endl;
    i++;
  }

}