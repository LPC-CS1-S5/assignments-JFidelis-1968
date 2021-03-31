#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;

  int score1, score2, sum, average;
  string student_name;

  ifs.open("students.txt");

  if (ifs.fail())
  {
    cerr << "File Read Error" << endl;
  }


}