#include <iostream>
using namespace std;

int main(){
    string n;
    cin >> n;
    
    for(int i = 0;i<3;i++){
        if(n[i] - '0' >6){
            cout << "ERROR";
            return 0;
        }
    }

    for(int i = 0;i<3;i++){
        if(n[i] - '0' == 3){
            cout << " * ";
        }else if(n[i] - '0' >=4){
            cout << "* *";
        }else{
            cout << "   ";
        }
        if(i!=2)cout << "|";
    }cout << '\n';

    for(int i = 0;i<3;i++){
        if(n[i] - '0' == 1||n[i] - '0' == 3||n[i] - '0' == 5){
            cout << " * ";
        }else if(n[i] - '0' == 2||n[i] - '0' == 6){
            cout << "* *";
        }else{
            cout << "   ";
        }
        if(i!=2)cout << "|";
    }cout << '\n';

    for(int i = 0;i<3;i++){
        if(n[i] - '0' == 3){
            cout << " * ";
        }else if(n[i] - '0' >=4){
            cout << "* *";
        }else{
            cout << "   ";
        }
        if(i!=2)cout << "|";
    }
}
