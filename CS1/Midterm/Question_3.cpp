#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int get_random(void);

int is_greater(int n);

int main()
{
  ofstream ofs;
  int n = 0, num = 0, N = 0;

  unsigned seed = time(0);
  srand(seed);

  ofs.open("numbers.txt");

  if(ofs.fail())
  {
    cerr << "File Open Error";
    exit(0);
  }

  while (N < 10)
  {
    get_random();
    if (is_greater(num))
      ofs << n;
    N++;
  }

  ofs.close();
  return 0;
}

int get_random(void)
{
  return rand() % 50;
}

int is_greater(int num)
{
  if (num > get_random())
    return 1;
  else
    return 0;
}