#include <iostream>
#include <string>
using namespace std;

int chartonum(char num)
{
  if (num >= 'A' && num <= 'z')
  {
    return num - 'A' + 10;
  }
  else
  {
    return num - '0';
  }
}

char numtochar(int num)
{
  if (num >= 0 && num <= 9)
  {
    return num + '0';
  }
  else
  {
    return num + 'A' - 10;
  }
}

int main() 
{
  int base;
  string n, m;
  string a;
  cin >> base >> n >> m;

  int tod, ans, sum;
  sum = tod = 0;
  int i = n.length() - 1;
  int j = m.length() - 1;

  while (i >= 0 && j >= 0)
  {
    sum = chartonum(n[i]) + chartonum(m[j]) + tod;
    tod = sum / base;
    ans = sum % base;
    a.push_back(numtochar(ans));
    i--;
    j--;
  }

  while (j >= 0)
  {
    sum = chartonum(m[j]) + tod;
    tod = sum / base;
    ans = sum % base;
    a.push_back(numtochar(ans));
    j--;
  }

  while (i >= 0)
  {
    sum = chartonum(n[i]) + tod;
    tod = sum / base;
    ans = sum % base;
    a.push_back(numtochar(ans));
    i--;
  }

  if (tod != 0)
  {
    a.push_back(numtochar(tod));
  }

  // reverse the string to get final result
  for (int k = a.length() - 1; k >= 0; k--)
  {
    cout << a[k];
  }
  cout << endl;

  return 0;
}
