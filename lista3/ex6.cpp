//6ª) Criar um programa que receba um número que corresponda a um mês do 
//1º trimestre e escreva o mês correspondente; caso o usuário digite o número fora do intervalo deverá 
//aparecer inválido, mas utilizando uma função do tipo void.
 
#include <iostream>
using namespace std;
 
void mesCorrespondente(int mes) { 
    switch (mes){
    	case 1:
    		cout << "Janeiro";
    		break;
    	case 2:
    		cout << "Fevereiro";
    		break;
    	case 3:
    		cout << "Março";
    		break;
    	default:
            cout << "Opção inválida!";
	}
}
 
int main() {
    setlocale(LC_ALL, ""); 
    int mes;
    cout << "Digite número correspondente a um mês do 1º trimestre: ";
    cin >> mes;
    cout << "O mês correspondente é: ";
	mesCorrespondente(mes);
    return 0;
}
