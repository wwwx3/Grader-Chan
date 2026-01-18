#include <iostream>
using namespace std;

int main() 
{
  int N,Lim;
  cin >> N >> Lim;
  int total = 0;
  for (int i = N ; i < Lim ; i++)
    {
      if(i%2==0 || i%3==0 )
      {
        total += i;
      }
    }
  cout << total << endl;
  return 0;
}
