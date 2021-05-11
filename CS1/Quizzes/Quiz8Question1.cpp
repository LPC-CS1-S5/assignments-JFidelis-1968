#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int N = 500;

int main()
{
  string str1;
  string substr = "th";
  ifstream ifs;
  int pos;
  int strcnt = 0;

  ifs.open("python.txt");

  while(ifs >> str1)
  {
    cout << str1 << endl;
  }

  ifs.close();
  
  for(int i = 0; i < N; i++)
  {  
    pos = str1.find(substr, strcnt);
    strcnt += 1;    
  }


  cout << "The substring 'th' can be found " << strcnt << " times in the paragraph." << endl;
}