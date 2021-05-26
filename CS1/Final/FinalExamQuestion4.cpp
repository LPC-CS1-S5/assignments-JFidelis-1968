#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string userinput;
    string words;

    cout << "Please enter the string you would like to find: " << endl;
    cin >> userinput;

    for(int i = 0; i < ; i++)
    {
      int pos = words.find(userinput, 0);

      while(pos != string::npos)
      {
        pos = words.find(userinput, pos + 1);
        cout << "The string " << userinput << "can be found at position " << pos << endl;
      }
    }
}