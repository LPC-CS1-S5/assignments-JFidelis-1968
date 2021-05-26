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

  string string1;
  string first;
  string last;
  string ssn;
  Scores score;

  int pos;

  ifs.open("grades.txt");

  while(ifs >> string1)
  {
    int prev = pos + 1;
    pos = string1.find(',', pos + 1);
    first = string1.substr(prev, pos - prev);

    prev = pos + 1;
    pos = string1.find(',', pos + 1);
    last = string1.substr(prev, pos - prev);

    prev = pos + 1;
    pos = string1.find(',', pos + 1);
    ssn = string1.substr(prev, pos - prev);

    prev = pos + 1;
    pos = string1.find(',', pos + 1);
    score = string1.substr(prev, pos - prev);
  }

  for(int i = 0; i < NUM_STUDENTS; i++)
  {
    ifs >> g[i].first;
    ifs >> g[i].last;
    ifs >> g[i].ssn;
    for(int j = 0; j < N; j++)
      ifs >> g[i].score.sc[j];
    ifs >> g[i].score.grade;
  }

  ifs.close();
}

void binWrite(Grade g[])
{
  ofstream ofs;
  
  ofs.open("grades.bin");

  strcpy(g.first, ",");
}