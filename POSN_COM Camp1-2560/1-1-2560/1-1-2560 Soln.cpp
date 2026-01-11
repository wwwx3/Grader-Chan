#include <iostream>
using namespace std; 
//false = (0) prime, true = (1) not prime
int main() {
  int n;
  cin >> n;
  bool numlist[n+1]; 
  for (int i = 0 ; i < n+1 ; i++)
  {
    numlist[i] = false;
  }
  numlist[0]=true;
  numlist[1]=true;
  for (int i = 2 ; i < n+1 ; i++)
  {
    if (numlist[i]==false)
    {
      for(int j = i+i ; j < n+1 ; j+=i)
      {
        numlist[j]=true;
      }
    }
  }
  for (int i = 0 ; i < n ; i++)
  {
    if (numlist[i]==false)
    {
      cout << i << endl;
    }
  }
}
