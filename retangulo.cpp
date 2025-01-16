#include <iostream>
using namespace std;

int main() {
    //DECLARAÇÃO DE VARIÁVEIS 
    double base, altura;

    //COMANDOS DE ENTRADA 
    cout << "Informe o valor da base do retângulo: ";
    cin >> base;

    cout << "Informe o valor da altura do retângulo: ";
    cin >> altura;

    //CÁLCULO DA ÁREA DO RETÂNGULO 
    double area = base * altura;

    //EXIBIÇÃO 
    cout << "A área do retângulo com base " << base << " e altura " << altura << " é: " << area << " m²." << endl;

    return 0;
}
