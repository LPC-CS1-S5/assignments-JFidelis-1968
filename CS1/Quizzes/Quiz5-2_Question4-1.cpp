#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  int num_employees, i;
  int employee_ID;
  string employee_name, employee_department;
  double employee_salary;

  i = 0;

  cout << "Enter the number of employees:";
  cin >> num_employees;
  cout << endl;

  ofs.open("employee.txt");

  if (ofs.fail() )
  {
    cerr << "File Open Error";
    exit(0);
  }

  ofs << num_employees << endl;

  while ( i < num_employees )
  {
    cout << "Enter the employee's ID:" << endl;
    cin >> employee_ID;
    ofs << employee_ID << " ";

    cout << "Enter the employee's name:" << endl;
    cin >> employee_name;
    ofs << employee_name << " ";
    
    cout << "Enter the department:" << endl;
    cin >> employee_department;
    ofs << employee_department << " ";

    cout << "Enter the employee's salary:" << endl; 
    cin >> employee_salary;
    ofs << employee_salary << endl;

    i++;
  }

  ofs.close();

  return 0;
}