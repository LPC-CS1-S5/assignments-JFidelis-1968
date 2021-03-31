#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int get_random(void);

int is_greater(int);

int main()
{
  ofstream ofs;
  int num, N = 0;

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
    num = get_random();
    if (is_greater(num))
      ofs << num << endl;
    cout << num << endl;
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
  static int prev = 0;

  if (prev == 0)
  {
    prev = num;
    return 0;
  }

  if (num > prev)
    return 1;
  else
    return 0;
}