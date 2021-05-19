#include <iostream>
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

int makeStruct(Employeerecord e[]);
{

}