#include<iostream>
using namespace std;
void countPosNeg(int *numbers){
    int counterNeg = 0;
    int counterPos = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if((numbers[i][j]) >= 0){
                counterPos++;
            }else{
                counterNeg++;
            }
        }
    }
    cout << "El total de numeros positivos es: " << counterPos << endl;
    cout << "El total de numeros negativos es: " << counterNeg << endl;

    return;
}
int main(){
    int numbers[3][3];
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingrese el numero de la posicion ["<< i <<"]["<< j <<"]: ";
            cin >> numbers[i][j];
        }
        cout << "\n";
    }
    

    countPosNeg(*numbers);

    return 0;
}