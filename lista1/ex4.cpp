//4) Faça um programa que leia 5 valores e informe o valor do maior.

#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL, "");
	int numeros[5];
	int maior;
	
	for(int i = 0; i < 5; i++) {
		cout << "Digite um número: ";
		cin >> numeros[i];
	}
	
	maior = numeros[0];
	for (int i = 1; i < 5; ++i) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
	
	cout << "O maior número digitado é: " << maior;
	
	return 0;
}
