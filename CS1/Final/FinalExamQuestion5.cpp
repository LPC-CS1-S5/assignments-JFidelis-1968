#include <iostream>
#include <fstream>
#include <string>
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
  Grade gr;
  string readline;

  int pos;

  ifs.open("grades.txt");

  while(ifs >> readline)
  {
    pos = readline.find(',', pos + 1);
    gr.first = readline.substr(0, pos);

    int prev = pos + 1;
    pos = readline.find(',', pos + 1);
    gr.last = readline.substr(prev, pos - prev);

    

  }

  
}

void binWrite(Grade g[])
{
  ofstream ofs;
  
  ofs.open("grades.bin");

  strcpy(g.first, ",");

  ofs.close();
}