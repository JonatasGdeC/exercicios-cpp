//2.�)  Fa�a  um  programa  que  leia  uma  temperatura  em  graus  Cent�grados  e  apresente-a convertida em graus Fahrenheit.  
//A f�rmula de convers�o �:  F = (9 * C + 160) / 5, onde F � a temperatura em Fahrenheit e C em graus Cent�grados. 

#include<iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	float c, f;
	cout << "Digite o valor em graus Celsius: ";
	cin >> c;
	f = (9 * c + 160) / 5;
	cout << "O valor em Fahrenheit �: " << f << " �F" << endl;
	return 0;
}
