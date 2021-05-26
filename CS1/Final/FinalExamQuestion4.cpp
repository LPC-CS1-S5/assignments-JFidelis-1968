#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string userinput;
    string words;
    ifstream ifs;
    int strcnt = 0;
    int poscnt = 0;

    cout << "Please enter the string you would like to find: " << endl;
    cin >> userinput;

    ifs.open("words.txt");

    while(ifs >> words)
    {
      int pos = words.find(userinput, 0);
      poscnt += 1;

      while(pos != string::npos)
      {
        strcnt +=1;
        pos = words.find(userinput, pos + 1);
        cout << "The string " << userinput << "can be found at position " << pos << endl;
      }
    }
}