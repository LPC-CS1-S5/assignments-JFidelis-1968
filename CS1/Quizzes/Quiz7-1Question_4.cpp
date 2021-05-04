#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void makeVector(vector<int> &, int);
void printVector(vector<int>);
void deleteOne(vector<int> &);

int main()
{
    vector<int> number;
    int size = 20;

    srand(time(0));

    makeVector(number, size);
    printVector(number);
    deleteOne(number);   
}

void makeVector(vector<int> &vec, int size)
{
    for(int i = 0; i < size; i++)
    vec.push_back(rand() % 10);
}

void printVector(vector<int> vec)
{
    for(int v : vec)
    cout << v << " ";
    cout << endl;
}

void deleteOne(vector<int> &vec)
{
    int usernum, deletecnt = 0;
    vector<int>::iterator iter;

    cout << "Please enter an integer between 1 and 10: " << endl;
    cin >> usernum;

    for(iter = vec.begin(); iter < vec.end(); iter++)
    {
        if(usernum == *iter)
        {
            vec.erase(iter);
            deletecnt += 1;
        }
    }
    
    cout << usernum << " has been deleted " << deletecnt << " times." << endl;

    printVector(vec);
}
