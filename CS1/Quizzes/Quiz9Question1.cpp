#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int NUM_NAME = 2;
const int NUM_DATE = 3;

struct Employeerecord
{
    int ID;
    string name[NUM_NAME];
    int salary;
    string dname;
    string date[NUM_DATE];
};

int makeStruct(Employeerecord []);
void printrecord(Employeerecord e);
int findSalary(Employeerecord [], int, int);
void findDepartment(Employeerecord [], int, string);

int main()
{
    const int N = 5;
    Employeerecord e[N];
    int i;
    int pay = 0;
    string department;
  
    makeStruct(e);
    for(i = 0;i < N; i++)
		printrecord(e[i]);
    cout << endl;
    cout << endl;

    pay = findSalary(e, N, pay);
  
    cout << "Enter the department you would like to find: " << endl;
    cin >> department;
    cout << endl;
    cout << endl;
    findDepartment(e, N, department);
}

int makeStruct(Employeerecord e[])
{
    const int N = 5;
    int i;

    ifstream ifs;

    ifs.open("employee.txt");
    if(ifs.fail())
    {
        cerr << "File Open Error." << endl;
        exit(0);
    }

    for(i = 0; i < N; i++)
    {


        ifs >> e[i].ID;
        for(int j = 0; j < NUM_NAME; j++)
        ifs >> e[i].name[j];
        ifs >> e[i].salary;
        ifs >> e[i].dname;
        for(int j = 0; j < NUM_DATE; j++)
        ifs >> e[i].date[j];

    }

    ifs.close();
    return 0;
}

void printrecord(Employeerecord e)
{
    cout << e.ID << endl;
    for(int i = 0; i < NUM_NAME; i++)
			cout << e.name[i] << "\t";
    cout << e.salary << endl;
    cout << e.dname << endl;
    for(int i = 0; i < NUM_DATE; i++)
			cout << e.date[i] << "\t";
}

int findSalary(Employeerecord e[], int N, int pay)
{
    int found = 0;

    for(int i = 0; i < N; i++)
    {
        if(e[i].salary > 100000)
        {
            pay = e[i].salary;
            cout << "Salary Found: " << pay << endl;
            printrecord(e[i]);
            found = 1;
        }
    }
    return pay;
}

void findDepartment(Employeerecord e[], int N, string department)
{
    int found = 0;

    for(int i = 0; i < N; i++)
    { 
        if(e[i].dname.find(department) != string::npos)
        {
            cout << "Department Found: " << department << endl;
            printrecord(e[i]);
            found = 1;
        }
    }
}