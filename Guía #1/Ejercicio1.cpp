/* Escribir un programa en C++ que tenga almacenado un valor entero, ocupando punteros
modificar el valor entero y mostrarlo en consola. */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n1 = 4;
    int *puntero = &n1;
    cout << *puntero * 2 << endl;
    
    system("pause");
    return 0;
}