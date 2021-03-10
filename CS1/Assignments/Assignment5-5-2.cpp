#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    int score1, score2, sum, average;
    string student_name;

    ifs.open("Student_Record.txt");

    if ( ifs.fail() )
    {
        cerr << "File Read Error" << endl;
        exit(0);
    }

    while ( ifs >> student_name >> score1 >> score2 )
    {
        cout << student_name << " was read from file." << endl;
        cout << score1 << " was read from file." << endl;
        cout << score2 << " was read from file." << endl;
        sum = score1 + score2;
        average = sum / 2;
        cout << "The sum is " << sum << " and the average is " << average << endl;
    }

    ifs.close();
}