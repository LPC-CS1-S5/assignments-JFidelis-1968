#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;

  int score1, score2, sum, average, average_sum;
  string student_name;

  average_sum = 0;

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
    if (average > 80)
      average_sum += 1;
  }
  
  cout << endl;
  cout << "Total number of students with average over 80 is " << average_sum << endl;

  ifs.close();
}