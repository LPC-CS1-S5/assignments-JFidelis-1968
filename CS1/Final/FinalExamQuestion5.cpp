#include <iostream>
#include <fstream>
using namespace std;

const unsigned short N=5;
const int NUM_STUDENTS = 16;

struct Scores{     
      double sc[N];     
      string grade;
};

struct Grade{    
      string first;    
      string last;   
      string ssn;   
      Scores score;
};

void readFile(Grade []);
void binWrite();

int main()
{
  Grade g[NUM_STUDENTS];

  readFile(g);
  binWrite();
}

void readFile(Grade g[])
{
  ifstream ifs;
  string first;
  string last;
  string ssn;
  string grade;
  double sc[N];


  ifs.open("grades.txt");

  for(int i = 0; i < NUM_STUDENTS; i++)
  {
    ifs >> g[i].first;
    ifs >> g[i].last;
    ifs >> g[i].ssn;
  }
}

void binWrite()
{

}