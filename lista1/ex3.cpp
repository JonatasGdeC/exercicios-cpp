//3) Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula: VOLUME = 3.14159 * R2 * ALTURA. 

#include<iostream>
using namespace std;
int main () {
	setlocale(LC_ALL, "");
	float volume, raio, altura;
	cout << "Digite o valor da altura: ";
	cin >> altura;
	cout << "Digite o valor do raio: ";
	cin >> raio;
	volume = 3.14159 * (raio * raio) * altura;
	cout << "O valor do volume é " << volume;
	return 0;
}
