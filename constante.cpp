#include <iostream>
using namespace std;

int main(){
    
    //COMANDOS DE ENTRADA - INFORMAÇÕES DO RAIO 
    double raio; 
    cout << "Digite o valor do raio: ";
    cin >> raio; 
    
    //DECLARAÇÃO DA CONSTANTE PI 
    const double pi = 3.141592;
    
    //CÁLCULO DA ÁREA DO CIRCULO 
    double area = pi * (raio * raio); 
    
    //COMANDO DE SAÍDA 
    cout << "A área do do círculo de raio " << raio << " cm é: " << area <<" cm²." <<endl;
    
    return 0;
}

