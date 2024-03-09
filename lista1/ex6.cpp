//6) Faça um programa que apresente o total da soma obtido dos cem primeiros números 
//inteiros. (1+2+3+4+......+100) 

#include<iostream>
using namespace std;
int main () {
	setlocale(LC_ALL, "");
	int soma = 0;
	
	for (int i = 0 ; i <= 100 ; i++){
		soma += i;
	};
	
	cout << "A soma dos 100 primeiros números é: " << soma;
	
	return 0;
}
