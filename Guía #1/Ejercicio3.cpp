#include<iostream>
using namespace std;
int main(){
    int var;
    cout << "Por favor, digite un numero: "; cin >> var;
    int *punt = &var;
    cout << "Valor de la variable: " << *punt << endl;

    return 0;

}