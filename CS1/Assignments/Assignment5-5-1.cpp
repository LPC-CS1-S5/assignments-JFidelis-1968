#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs;
    int num_students, i;
    int score1, score2;
    string student_name;

    cout << "Enter number of students: ";
    cin >> num_students;
    cout << endl;

    ofs.open( "Student_Record.txt");
    if ( ofs.fail() )
    {
        cerr << "File Open Error" << endl;
        exit(0);
    }

    for ( i = 0; i < num_students; i++ )
    {
        cout << "Enter the student name: ";
        cin >> student_name;
        ofs << student_name << " ";

        cout << "Enter the first score: ";
        cin >> score1;
        ofs << score1 << " ";

        cout << "Enter the second score: ";
        cin >> score2;
        ofs << score2 << endl;        
    }

    ofs.close();
}