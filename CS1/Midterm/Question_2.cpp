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

  while (ifs >> student_name >> score1 >> score2)
  {
    cout << "Student name: " << student_name << endl;
    cout << "Score 1: " << score1 << " " << "Score 2: " << score2 << endl;
    sum = score1 + score2;
    average = sum / 2;
    cout << "Average: " << average << endl;
  }

  ifs.close();
}