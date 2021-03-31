#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void get_random(int n);

//int is_greater(int n);

int main()
{
  ofstream ofs;
  int n, N = 10;

  ofs.open("numbers.txt");

  if(ofs.fail())
  {
    cerr << "File Open Error";
    exit(0);
  }

  while (N < 10)
  {
    get_random(n);
    cout << n << endl;
    //is_greater(n);
    N++;
  }

  ofs.close();
  return 0;
}

void get_random(int n)
{
  unsigned seed = time(0);
  srand(seed);

  n = rand() % 50;
}