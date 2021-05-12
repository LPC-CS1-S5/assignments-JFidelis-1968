#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str1;
    string substr1 = "th";
    ifstream ifs;
    int strcnt = 0;

    ifs.open("python.txt");

    while(ifs >> str1)
    {
        cout << str1 << endl;
    }

    int pos = str1.find(substr1, 0);

    while(pos != string::npos)
    {  
        strcnt += 1;    
        pos = str1.find(substr1, pos + 1);
    }

    ifs.close();

    cout << "The substring 'th' can be found " << strcnt << " times in the paragraph." << endl;