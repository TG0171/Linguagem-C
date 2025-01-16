#include <iostream>
#include <cmath> // IMPORTAÇÃO DE BIBLIOTECAS 
using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    //COMANDOS DE ENTRADA 
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;

    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;
    
    //CÁLCULO DOS VALORES INSERIDOS - TEOREMA DE PITÁGORAS 
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); 
    cout << "A hipotenusa é: " << hipotenusa << ", visto que os catetos adotados são: " << cateto1 << " e " << cateto2 << endl; 
    
    return 0;
}