#include <iostream>
using namespace std;

int main() {
    // DECLARAÇÃO DE VARIÁVEIS 
    double nota1, nota2, nota3, nota4;

    // Comandos de entrada
    cout << "Digite a primeira nota do aluno: ";
    cin >> nota1;

    cout << "Digite a segunda nota do aluno: ";
    cin >> nota2;

    cout << "Digite a terceira nota do aluno: ";
    cin >> nota3;

    cout << "Digite a quarta nota do aluno: ";
    cin >> nota4;

    //CÁLCULO DE MÉDIA 
    double media = (nota1 + nota2 + nota3 + nota4) / 4;

    //COMANDO DE SAÍDA 
    cout << "A média das notas do aluno é: " << media << endl;

    //VERIFICAÇÃO DE APROVAÇÃO 
    if (media >= 6) {
        cout << "Resultado: Aprovado" << endl;
    } else {
        cout << "Resultado: Reprovado" << endl;
    }

    return 0;
}
