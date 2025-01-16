#include <iostream>
using namespace std;

int main() {
    double massa, altura, imc;

    //COMANDOS DE ENTRADA
    cout << "Digite sua massa [KG]: ";
    cin >> massa;

    cout << "Digite sua altura [Metros]: ";
    cin >> altura;

    //CÁLCULO DE IMC
    imc = massa / (altura * altura);

    //DETERMINAÇÃO DO ESTADO 
    string estado;
    if (imc < 18.5) {
        estado = "Abaixo do peso";
    } else if (imc >= 18.5 && imc < 24.9) {
        estado = "Peso normal";
    } else if (imc >= 25 && imc < 29.9) {
        estado = "Sobrepeso";
    } else {
        estado = "Obesidade";
    }

    //COMANDOS DE SAÍDA 
    cout << "Seu IMC é: " << imc << endl;
    cout << "O seu estado é: " << estado <<endl;

    return 0;
}
