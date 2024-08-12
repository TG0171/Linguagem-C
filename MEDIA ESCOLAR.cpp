#include <iostream>
#include <iomanip> // Para std::fixed e std::setprecision

using namespace std; 

int main() {
    // Declaração das variáveis
    string nome_aluno;
    float nota1, nota2, nota3, nota4;
    
    // Exibe o cabeçalho
    cout << "-------- INSTITUTO FEDERAL DO CEARÁ --------" << endl;
    cout << "-------- CADASTRO DE BOLETIM ESCOLAR --------" << endl;
    
    // Entrada de dados
    cout << "Digite o nome do aluno: ";
    getline(cin, nome_aluno);
    
    cout << "Digite a 1ª nota do estudante: ";
    cin >> nota1;
    
    cout << "Digite a 2ª nota do estudante: ";
    cin >> nota2;
    
    cout << "Digite a 3ª nota do estudante: ";
    cin >> nota3;
    
    cout << "Digite a 4ª nota do estudante: ";
    cin >> nota4;
    
    // Calcula a média
    float media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    // Exibe o resultado
    cout << "-------- INSTITUTO FEDERAL DO CEARÁ --------" << endl;
    cout << "---------- RESULTADOS ACADÊMICOS ----------" << endl;
    cout << "Nome do estudante: " << nome_aluno << endl;
    cout << "1ª Nota: " << fixed << setprecision(2) << nota1 << endl;
    cout << "2ª Nota: " << fixed << setprecision(2) << nota2 << endl;
    cout << "3ª Nota: " << fixed << setprecision(2) << nota3 << endl;
    cout << "4ª Nota: " << fixed << setprecision(2) << nota4 << endl;
    
    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 6.0) {
        cout << "O ALUNO FOI APROVADO, SUA MÉDIA FOI: " << fixed << setprecision(2) << media << endl;
    } else {
        cout << "O ALUNO FOI REPROVADO, SUA MÉDIA FOI: " << fixed << setprecision(2) << media << endl;
    }
    
    return 0;
}
