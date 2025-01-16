#include <iostream> //IMPORTAÇÕES 
#include <string> 

using namespace std; 

int main() { 
    
    string palavra01, palavra02; //DECLARAÇÃO DOS TIPOS DE VARIÁVEIS 
    
    cout << "Insira a primeira palavra" << endl; 
    cin >> palavra01; 
    
    cout << "Insira a segunda palavra" << endl; 
    cin >> palavra02; 
 
    string igualdade; //SEÇÃO DE IF E ELSE 
    if (palavra01 == palavra02) { 
        igualdade = "As palavras são iguais!";
    } else { 
        igualdade = "As palavras são diferentes";
    }
    
    cout << igualdade << endl; //RESULTADO DA CADEIA IF E ELSE 
    
    return 0; 
    
}

