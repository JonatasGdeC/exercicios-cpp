//2.ª)  Faça  um  programa  que  leia  uma  temperatura  em  graus  Centígrados  e  apresente-a convertida em graus Fahrenheit.  
//A fórmula de conversão é:  F = (9 * C + 160) / 5, onde F é a temperatura em Fahrenheit e C em graus Centígrados. 

#include<iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	float c, f;
	cout << "Digite o valor em graus Celsius: ";
	cin >> c;
	f = (9 * c + 160) / 5;
	cout << "O valor em Fahrenheit é: " << f << " ºF" << endl;
	return 0;
}
