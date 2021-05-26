#include <iostream>
#include <fstream>
using namespace std;

const unsigned short N=5;
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

void readFile();
void binWrite();

int main()
{
  Grade g;

  readFile();
  binWrite();
}

void readFile()
{
  ifstream ifs;

  ifs.open("grades.txt");

  while(ifs >> )
}

void binWrite()
{

}