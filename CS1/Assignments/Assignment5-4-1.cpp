#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs;
    int N;
    int rnum;

    unsigned seed = time(0);
    srand(seed);
    
    cout << "Enter the number of random numbers (it has to be five): ";
    cin >> N;

    ofs.open("Random_Numbers.txt");

    if (ofs.fail())
    {
        cerr << "File Open Error";
        exit(0);
    }

    while ( N > 0 )
    {
        rnum = rand() % 100;
        ofs << rnum << endl;
        N--;
        if ( ! ofs.fail())
            cout << rnum << " has been written to the file." << endl;
    }

    ofs.close();
}