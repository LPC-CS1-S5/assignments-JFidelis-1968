#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

int main()
{
  char useremail[30];
  
  cout << "PLease enter a valid email address: " << endl;
  cin >> useremail;

  int l = strlen(useremail);
  int cnt_alpha = 0;
  int cnt_digit = 0;

  for(int i = 0; i < 30; i++)
  {
    if (isalpha(useremail[i]))
    {
      cnt_alpha++;
    }
    if (isdigit(useremail[i]))
    {
      cnt_digit++;
    }
  }


}