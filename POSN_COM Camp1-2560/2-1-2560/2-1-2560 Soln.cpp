#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  int N = n*2-1;
  int y;
  
  for(int i=0; i<N ; i++) {
     y = n-i-1 ; 
     if (y<=0){
       y = y*-1;
     }
     for(int j=0; j<N ; j++)
       if(j==i||j+i==N-1){
         cout << char('A'+y);
           }
       else{
         cout << " ";
       }
    cout << " ";
    for(int j=0; j<N ; j++)
     if(j==i||j+i==N-1){
       cout << "*";
     }
     else{
       cout << " ";
     }
    cout << endl;
  }
}
