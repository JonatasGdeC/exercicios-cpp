//8) Fa�a um programa que leia 15 valores e informe o valor da diferen�a entre a m�dia e 
//o maior valor.

#include<iostream>

using namespace std;
int main () {
	setlocale(LC_ALL, "");
	int valores[15];
	int soma;
	int media;
	int maiorValor;
	int diferenca;
	
	for (int i = 0; i < 15; i++){
		cout << "Digite o n�mero " << i << " : ";
		cin >> valores[i];
	}
	
	for(int i = 0; i < 15; i++){
		soma += valores[i];
	}
	media = soma / 15;
	
	maiorValor = valores[0];
	for (int i = 1; i < 15; ++i) {
        if (valores[i] > maiorValor) {
            maiorValor = valores[i];
        }
    }
    
    cout << "A m�dia dos n�mero digitados �: " << media << endl;
    cout << "O maior valor entre eles � o : " << maiorValor << endl;
    
    if(maiorValor > media){
    	diferenca = maiorValor - media;
	} else {
		diferenca = media - maiorValor;
	}
	
	cout << "A diferen�a entre eles � de: " << diferenca;
    
    return 0;
}
