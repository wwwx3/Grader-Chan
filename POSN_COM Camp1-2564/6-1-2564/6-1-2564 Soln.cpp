#include <iostream>
#include <string>
using namespace std;

int main() {
  string code; 
  cin >> code;
  int sumeven = 0 ;
  int sumodd = 0 ;
  for (int i = 1; i < 13; i+=2) 
  {
    /*cout << int (code[i]-48) ;
    cout << " ";*/
    sumeven = sumeven+code[i]-48;
  }
  //cout <<sumeven * 3 << "\n";
  for (int i = 0; i <= 10; i+=2) 
    {
      /*cout << int (code[i]-48) ;
      cout << " ";*/
      sumodd = sumodd+code[i]-48;
    }
  sumeven = sumeven*3;
  /*cout <<"sumodd ="<<sumodd << "\n";
  cout <<"sumeven ="<<sumeven << "\n";
  cout <<int(code[12]-'0')<<"\n";*/
  if (((sumodd+sumeven+(code[12]-'0'))%10 == 0))
  {
    cout << "YES";
  }
  else 
  {
    cout << "NO";
  }
  return 0;
}
