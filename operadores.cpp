#include <iostream>
using namespace std;

int main() {
    // DECLARAÇÃO DE VARIÁVEIS 
    int numero1, numero2, multiplicacao, divisao, modulo;

    // COMANDOS DE ENTRADA
    cout << "Digite o primeiro número inteiro: ";
    cin >> numero1;
    
    cout << "Digite o segundo número inteiro: ";
    cin >> numero2;

    // OPERAÇÕES 
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;
    modulo = numero1 % numero2;

    // EXIBIÇÃO DOS RESULTADOS 
    cout << "A multiplicação de " << numero1 << " e " << numero2 << " é " << multiplicacao << endl;
    cout << "A divisão de " << numero1 << " por " << numero2 << " é " << divisao << endl;
    cout << "O módulo de " << numero1 << " por " << numero2 << " é " << modulo << endl;

    return 0;
}
