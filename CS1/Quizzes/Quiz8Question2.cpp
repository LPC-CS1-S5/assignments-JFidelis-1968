#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

int stringSplit(const char[], char[][100], char);

int main()
{
  char useremail[100];
  
  cout << "PLease enter a valid email address: " << endl;
  cin >> useremail;

  int l = strlen(useremail);
  int cnt_alpha = 0;
  int cnt_digit = 0;

  for(int i = 0; i < l; i++)
  {
    if (isalpha(useremail[i]))
    {
      cnt_alpha++;
      if(cnt_alpha > 15 || cnt_alpha < 5)
      {  
        cerr << "Invalid email ID." << endl;
        exit(0);
      }
    }
    if (isdigit(useremail[i]))
    {
      cnt_digit++;
      if(cnt_digit > 0)
      {  
        cerr << "Invalid email ID." << endl;
        exit(0);
      }
    }
  }
}

int stringSplit(const char useremail[], char emailid[][100], '@')
{

}