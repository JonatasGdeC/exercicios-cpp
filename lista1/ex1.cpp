//1.ª) Faça um programa que leia dois valores e informe a média entre eles. (use float como tipo de dado). 

#include<iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "");
	float v1, v2, media;
	cout << "Insira o valor 1: ";
	cin >> v1;
	cout << "Insira o valor 2: ";
	cin >> v2;
	media=(v1+v2)/2;
	cout << "Média = " << media << endl;
	return 0;
}
 
