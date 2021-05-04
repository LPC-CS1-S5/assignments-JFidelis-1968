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

void pintVector(vector<int> vec)
{

}

void deleteOne(vector<int> &vec)
{
    
}