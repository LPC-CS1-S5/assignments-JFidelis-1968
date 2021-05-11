#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string str1;
  string str2 = "th";
  ifstream ifs;
  int pos;

  ifs.open("python.txt");

  while(ifs >> str1)
  {
    cout << str1 << endl;
  }

  pos = str1.find(str2, 0);
  cout << "The substring 'th' can be found " << pos << " times in the paragraph." << endl;
}