#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getsum(int);

int main()
{
    int N, result;

    cout << "Enter the number of random integers you would like to sum:" << endl;
    cin >> N;

    result = getsum(N);

    cout << endl;

    cout << "The summation of integers 'N' minus the minimum and maximum value is: " << result << endl;

    return 0;
}

int getsum(int N)
{
    int i, num, min, max, sum;

    sum = 0;
    min = 100;
    max = 0;
    i = 0;

    srand(time(0));

    while ( i < N )
    {
        num = rand() % 100;
        cout << num << "\t";
        if ( min > num )
            min = num;
        if ( max < num )
            max = num;        
        sum += num;
        i++;
    }

    sum = sum - min - max;

    return(sum);
}