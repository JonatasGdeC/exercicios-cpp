//3�) Criar um programa que receba 2 valores e calcule o produto atrav�s de uma fun��o que retorna valores.

#include <iostream>
using namespace std;
 
float produto(int num1, int num2) { 
    return num1 * num2;
}
 
int main() {
    setlocale(LC_ALL, ""); 
    int num1, num2;
 
    cout << "Digite um n�mero: ";
    cin >> num1;
    cout << "Digite outro n�mero: ";
    cin >> num2;
    
    cout << "O resultado do produto �: " << produto(num1, num2);

    return 0;
}
