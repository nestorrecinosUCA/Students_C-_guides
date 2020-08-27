/* Dada una cadena de caracteres “Puntero”, mostrar en pantalla en la primera línea el valor
en la posición inicial de la cadena, la posición del puntero y la letra “n”. Luego, aumentar
el puntero en 3. Luego, en otra línea imprimir el puntero, la letra “e”, “r” y “o” de la cadena,
usando el puntero. */
#include<iostream>
using namespace std;
int main(){
    char word[] = {'P','u','n','t','e','r','o'};
    char *puntOne = &word[0];

    cout << puntOne;


    return 0;
}