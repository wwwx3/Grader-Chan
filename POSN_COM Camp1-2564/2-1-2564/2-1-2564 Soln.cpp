#include <iostream>
using namespace std; 

int main() {
	long long n;
    cin >> n;
    if (n==1 || n==2) 
    {
    	cout << 1 << endl;
        return 0;
    }

    long long n1 = 1, n2 = 1, nextn;
    
    for(int i = 3; i <= n ; i++) 
    {
        nextn = n1+n2 ;
        n1 = n2;
        n2 = nextn;
    }
    
    cout<<nextn<<endl;

    
}
