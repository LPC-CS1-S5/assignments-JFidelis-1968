#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string str1;
  ifstream ifs;

  ifs.open("python.txt");

  while(ifs >> str1)
  {
    cout << str1 << endl;
  }
}