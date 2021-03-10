#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int rnum, i;
  int min;

  min = 100;
  i = 0;

  srand(time(0));

  cout << "Random numbers generated:" << endl;

  while ( i < 5 )
  {
    rnum = rand() % 100;
    cout << rnum << endl;
    if ( min > rnum )
      min = rnum;
    i+= 1;
  }

  cout << "The minimum value is " << min << endl;

  return 0;
}