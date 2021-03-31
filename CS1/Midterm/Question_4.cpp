#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int get_random(void);
int get_random(int);
int get_random(int, int);

int main()
{
  int n1, n2;

  unsigned seed = time(0);
  srand(seed);

  get_random();

  get_random(n2);

  get_random(n1, n2);
}

int get_random()
{
  int rnum;
  rnum = rand() % 100;
  return rnum; 
}

int get_random(int n2)
{
  int rnum;
  rnum = rand() % n2;
  return rnum;
}

int get_random(int n1, int n2)
{
  int rnum;
  rnum = rand() % n2;
  return rnum;
}