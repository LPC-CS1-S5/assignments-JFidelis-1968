#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float men;
    float women;
    float nonbinary;
    float total_students;
    float percentage_men;
    float percentage_women;
    float percentage_nonbinary;

    cout << "How many men are in the class?" << endl;
    cin >> men;
    cout << "How many women are in the class?" << endl;
    cin >> women;
    cout << "How many students in the class identify as nonbinary?" << endl;
    cin >> nonbinary;
    
    total_students = men + women + nonbinary;
    percentage_men = (men / total_students) * 100;
    percentage_women = (women / total_students) * 100;
    percentage_nonbinary = (nonbinary / total_students) * 100;

    cout << setprecision(0) << fixed;
    cout << "The percentage of men in the class is " << percentage_men << "%" << endl;
    cout << "The percentage of women in the class is " << percentage_women << "%" << endl;
    cout << "The percentage of nonbinary students in the class is " << percentage_nonbinary << "%" << endl;

    return 0;
}