#include<iostream>
using namespace std;
//Función para el promedio
void average(float *scores){
    //Variable con la suma de todas las notas
    float total = 0;
    //Bucle para sumar todas las notas
    for(int i = 0; i < 5; i++){
       total += (scores[i]);
    }
    //División que provee el promedio
    total = total/5;
    //Evaluar si el promedio es mayor o menor que 6 para demostrar que lo pasó o no
    if(total >= 6){
        cout << "La nota del estudiante es " << total << " y paso la materia";
    }else{
        cout << "La nota del estudiante es " << total << " y no paso la materia";
    }

    return;
}
int  main(){
    //Arreglo con las 5 notas
    float scoresAll[5];
    //Bucle para agregar las notas en cada campo
    for(int i = 0; i < 5; i++){
        cout << "Ingrese la nota " << i+1 << ": ";
        cin >> scoresAll[i];
    }
    //Creación del puntero
    float *puntScores = scoresAll;
    //Llamado de la función.
    average(puntScores);

    return 0;
}