//6�) Criar um programa que receba um n�mero que corresponda a um m�s do 
//1� trimestre e escreva o m�s correspondente; caso o usu�rio digite o n�mero fora do intervalo dever� 
//aparecer inv�lido, mas utilizando uma fun��o do tipo void.
 
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
    		cout << "Mar�o";
    		break;
    	default:
            cout << "Op��o inv�lida!";
	}
}
 
int main() {
    setlocale(LC_ALL, ""); 
    int mes;
    cout << "Digite n�mero correspondente a um m�s do 1� trimestre: ";
    cin >> mes;
    cout << "O m�s correspondente �: ";
	mesCorrespondente(mes);
    return 0;
}
