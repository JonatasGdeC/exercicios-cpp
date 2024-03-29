//1.�) Dados dois n�meros naturais A e B, calcular o MDC entre A e B atrav�s do processo e exemplo:
//� Para A=80 e B=112:
//1. Dividir o n�mero maior pelo menor:
//112 dividido por 80 -> quociente 1 e resto 32;
//2. N�o dando resto zero, dividir o divisor pelo resto da divis�o anterior:
//80 dividido por 32 -> quociente 2 e resto 16;
//3. Prosseguir com as divis�es at� obter resto zero.
//32 dividido por 16 ->quociente 2 e resto 0.
//Portanto, o MDC(80,112) = 16.

#include<iostream>
using namespace std;
int main () {
    setlocale(LC_ALL, "");
    int n1, n2, menor, maior, resto, x, mdc;
    
    cout << "Digite um n�mero: ";
    cin >> n1;
    cout << "Digite outro n�mero: ";
    cin >> n2;
    
    if(n1 > n2) {
    	maior = n1;
    	menor = n2;
	} else {
		maior = n2;
    	menor = n1;
	}
	
	resto = maior % menor;
	
	while(resto != 0) {
		x = menor;
		menor = resto;
		maior = x;
		resto = maior % menor;
	}
	
	mdc = menor;
   	cout << "MDC: " << mdc;
   
    return 0;
}

