//4ª) Criar um programa que receba um grau e o converta para radianos através de umafunção.Fórmula:  radiano = grau * pi / 180

#include <iostream>
using namespace std;
float ConversorGraus(float grau) {
	
	float resultado = (grau * 3.14159 / 180);
	return resultado;
}

int main () {
	setlocale(LC_ALL, "");
	float grau, radiano; 
	cout << "Digite um valor em graus: ";
	cin >> grau;
	float resultado = ConversorGraus(grau); 
	cout << "Radianos = "<<resultado<<"rad";
	return 0;
}














