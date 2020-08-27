#include<iostream>
using namespace std;
int main(){
    //Limite y numero mayor
    int limit, biggest;
    cout << "Cuantos numeros, usted, abnegada persona, desea insertar? :)" << endl;
    cin >> limit;
    //Variable lista, con un numero tomado del limite
    int list[limit];
    //For para ingresar los datos
    for (int i = 0; i < limit; i++)
    {
        cout << "Ingrese un numero: "; cin >> list[i];
    }
    //Evaluar la posicion 1 y 2 del arreglo, para ver el mayor
    biggest = max(list[0], list[1]);
    //evaluar el mayor de todo el arreglo
    for (int j = 0; j < limit; j++)
    {
        if(biggest < list[j]){
            biggest = list[j];
        }
    }
    //Puntero
    int *puntero = &biggest;
    cout << "El puntero es: " << *puntero;
    

    return 0;
}