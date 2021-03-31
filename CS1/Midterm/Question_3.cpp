#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void get_random(int n);

int is_greater(int n);

int main()
{
  ofstream ofs;
  int n = 0, N = 0;

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
    get_random(n);
    if (is_greater(n))
      ofs << n;
    N++;
  }

  ofs.close();
  return 0;
}

void get_random(int n)
{
  n = rand() % 50;
  cout << n << endl;
}

int is_greater(int n)
{
  if (get_random() > n)
    return 1;
  else
    return 0;
}