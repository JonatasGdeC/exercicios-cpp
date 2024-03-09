//8) Faça um programa que leia 15 valores e informe o valor da diferença entre a média e 
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
		cout << "Digite o número " << i << " : ";
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
    
    cout << "A média dos número digitados é: " << media << endl;
    cout << "O maior valor entre eles é o : " << maiorValor << endl;
    
    if(maiorValor > media){
    	diferenca = maiorValor - media;
	} else {
		diferenca = media - maiorValor;
	}
	
	cout << "A diferença entre eles é de: " << diferenca;
    
    return 0;
}
