//2ª) Criar um programa que receba 4 notas e calcule a média aritmética, através de uma função.
 
#include <iostream>
 
using namespace std;
 
float media(int soma) { 
    return soma / 4; 
}
 
int main() {
    setlocale(LC_ALL, ""); 
    int notas, somaNotas = 0; 
    float resultado;
 
    for (int i = 0; i < 4; i++) { 
        cout << "Digite o valor: ";
        cin >> notas;
        somaNotas += notas;
    }
 
    cout << "A média das notas é: " << media(somaNotas) << endl;
    return 0;
}
