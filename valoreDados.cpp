#include <iostream>
using namespace std;

int main() {
    //DECLARAÇÃO E ATRIBUIÇÃO DE VARIÁVEIS 
    double saldoConta = 1234.56;
    string corGravata = "azul";
    bool estaChovendo = true;
    double pesoDoUsuario = 70.5;
    int numeroDeVendas = 150;
    string telefone = "1234-5678";
    string placaCarro = "ABC-1234";
    string usuarioLogado = "joao123";
    int idade = 25;
    double nota = 8.5;
    int numero = 42;

    //COMANDOS DE SAÍDA 
    cout << "Saldo da Conta: " << saldoConta << endl;
    cout << "Cor da Gravata: " << corGravata << endl;
    cout << "Está Chovendo: " << (estaChovendo ? "Sim" : "Não") << endl;
    cout << "Peso do Usuário: " << pesoDoUsuario << " kg" << endl;
    cout << "Número de Vendas: " << numeroDeVendas << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Placa do Carro: " << placaCarro << endl;
    cout << "Usuário Logado: " << usuarioLogado << endl;
    cout << "Idade: " << idade << endl;
    cout << "Nota: " << nota << endl;
    cout << "Número: " << numero << endl;

    return 0;
}
