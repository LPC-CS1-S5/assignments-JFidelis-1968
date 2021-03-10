#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  int employee_ID, num_employees;
  string employee_name, employee_department;
  double employee_salary;
  double sum, average;

  sum = 0;

  ifs.open("employee.txt");

  if ( ifs.fail() )
  {
    cerr << "File Read Error" << endl;
    exit(0);
  }

  ifs >> num_employees;

  while ( ifs >> employee_ID >> employee_name >> employee_department >> employee_salary)
  {
    cout << employee_ID << endl;
    cout << employee_name << endl;
    cout << employee_department << endl;
    cout << employee_salary << endl;
    sum += employee_salary;
  }

  average = sum / num_employees;

  cout << "The sum of the salaries is $" << sum << " and the average is $" << average << endl; 
  
  ifs.close();

  return 0;
  //quiz finished
}