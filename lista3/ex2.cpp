//2�) Criar um programa que receba 4 notas e calcule a m�dia aritm�tica, atrav�s de uma fun��o.
 
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
 
    cout << "A m�dia das notas �: " << media(somaNotas) << endl;
    return 0;
}
