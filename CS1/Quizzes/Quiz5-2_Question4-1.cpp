#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  int num_employees;
  int employee_ID;
  string employee_name, employee_department;
  double employee_salary;

  cout << "Enter the number of employees:";
  cin >> num_employees;
  cout << endl;
  cout << "Enter the employee ID, name, department, and salary:" << endl;
  cin >> employee_ID >> employee_name >> employee_department >> employee_salary;

  ofs.open("employee.txt");

  if (ofs.fail() )
  {
    cerr << "File Open Error";
    exit(0);
  }

  ofs.close();

  return 0;
}