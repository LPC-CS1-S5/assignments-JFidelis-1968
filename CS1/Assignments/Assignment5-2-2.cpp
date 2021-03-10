#include <iostream>
using namespace std;

int main()
{
    int num_students, num_scores;
    int i, j;
    double score, sum, average;
    string student_name;

    cout << "Enter the number of students and scores:" << endl;
    cin >> num_students >> num_scores;

    for ( i = 0; i < num_students; i++ )
    {
        cout << "Enter the student's name:" << endl;
        cin >> student_name;
        cout << "Student's name: " << student_name << "\t";

        sum = 0;

        for ( j = 0; j < num_scores; j++ )
        {
            cout << "Enter the student's score:" << endl;
            cin >> score;
            cout << "Score " << j + 1 << ": " << score << endl;
            sum += score;
        }

        average = sum / num_scores;
        cout << "Sum of scores: " << sum << "\t";
        cout << "Average of scores: " << average << "\t";
    }

    return 0;
}