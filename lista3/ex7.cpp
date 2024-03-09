//7ª)  Criar  um  programa  que  retorne  o  fatorial  de  um  número,  usando  uma
//função que  receba  um  valor  e retorne o fatorial desse valor.
//Fatorial de 5 = 5 x 4 x 3 x 2 x 1 = 120

#include <iostream>
using namespace std;

int calcularFatorial (int num) {
	int resultado = 1;
    for (int i = num; i > 1; --i) {
        resultado *= i;
    }
    return resultado;
}

int main (){
	setlocale(LC_ALL, "");
	int resultado;
	int input;
	cout << "Digite o número: ";
	cin >> input;
	
	resultado = calcularFatorial(input);
	
	cout << resultado;
		
	return 0;
}
