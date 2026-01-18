#include <iostream>
using namespace std;

int main() 
{
  long long int num;
  cin >> num;

  long long int sum = 0;
  while (num>0)
    {
      sum += num%10;
      num /= 10;
    }
  cout << sum << endl;
  return 0;
}
