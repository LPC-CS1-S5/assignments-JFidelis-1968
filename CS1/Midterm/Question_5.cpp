#include <iostream>
#include <fstream>
using namespace std;

void get_input(int &, int &);
int isSame(int, int);
int int_division(int, int);
void filewrite(ofstream &, int);

int main()
{
  int num1, num2, i, division;
  ofstream ofs;

  ofs.open("question5.txt");

  while(1)
  {
    get_input(num1, num2);
    if(isSame(num1, num2))
      break;
    division = int_division(num1, num2);
    filewrite(ofs, division);
  }
  return 0;
}

void get_input(int &n1, int &n2)
{
  cout << "Please enter two integers: " << endl;
  cin >> n1 >> n2;
}

int isSame(int n1, int n2)
{
  if (n1 == n2)
    return 1;
  else
    return 0;
}

int int_division(int n1, int n2)
{
  int result;

  if(n1 > n2)
    result = n1 / n2;
  else
    result = n2 / n1;

  return result;
}

void filewrite(ofstream &ofs, int division)
{
  ofs << division << endl;
  if (ofs.fail())
  {
    cerr << "Error Writing File" << endl;
    exit(0);
  }
}