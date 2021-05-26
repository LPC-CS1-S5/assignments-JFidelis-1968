#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void findString(string, string)

int main()
{
    string userinput;
    string words;

    cout << "Please enter the string you would like to find: " << endl;
    cin >> userinput;

}
    
void findString(string userinput, string words)
{   
    int strcnt = 0;
    int poscnt = 0;
    ifstream ifs;
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