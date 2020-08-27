#include<iostream>
using namespace std;
int main(){
    int varOne = 24;
    int varTwo = 2;
    int *puntOne = &varOne;
    int *puntTwo = &varTwo;

    cout << "VarOne = " << varOne << endl;
    cout << "PuntOne = " << puntOne << endl;
    cout << "VarTwo = " << varTwo << endl;
    cout << "PuntTwo = " << puntTwo << endl;

    return 0;
}