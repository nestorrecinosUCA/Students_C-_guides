/* Escribir un programa en C++ que reciba una cadena de caracteres, luego escribir una
función que reciba la dirección de inicio de la cadena y devuelva el número de vocales que
hay en la cadena. */
#include<iostream>
#include<string.h>
using namespace std;
/* void countW(string vowels, char word[]){
    int counter = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < count(vowels); j++)
        {
            if(word[i] == vowels[j])
            counter++;
        }
        
    }
    return;
} */
int main(){
    
    char word[4];
    string vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    cin >> word;
    cout << word;
    //countW(vowels, word);

    return 0;

}