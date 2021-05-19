#include <iostream>
#include <fstream>
using namespace std;

struct Employeerecord
{
  int ID;
  string name;
  int salary;
  string dname;
  string date;
};

int makeStruct(Employeerecord []);

int main()
{
  Employeerecord e[5];
  
  makeStruct(e);
}

int makeStruct(Employeerecord e[])
{
  int i;
  ifstream ifs;

  ifs.open("employee.txt");
  if(ifs.fail())
  {
    cerr << "File Open Error." << endl;
    exit(0);
  }

  i = 0;

  while(ifs >> e[i].ID >> e[i].ID >> e[i].ID >> e[i].ID >> e[i].ID)
}