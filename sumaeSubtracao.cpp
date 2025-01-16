#include <iostream>
using namespace std;

int main() {
    //DECLARAÇÃO DO TIPO DE VARIÁVEIS 
    int numero1, numero2;

    //ENTRADA DE COMANDOS 
    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    //OPERAÇÕES MATEMÁTICAS 
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;

    //VERIFICAÇÃO DE ÍMPAR OU PAR, COM MÓDULO 
    string paridade = (soma % 2 == 0) ? "par" : "ímpar";

    //EXIBIÇÃO 
    cout << "A soma de " << numero1 << " e " << numero2 << " é: " << soma << " e é " << paridade << endl;
    cout << "A subtração de " << numero1 << " e " << numero2 << " é: " << subtracao << " e é " << paridade << endl;

    return 0;
}
