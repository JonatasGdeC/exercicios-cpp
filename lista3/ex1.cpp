//1ª) Criar  um  programa  que  permita  a  entrada  de  um  número  inteiro  e  retorne  o  seu  dobro,  através  de  uma função.

#include <cstdlib>
#include <iostream>
using namespace std;

int dobro (int x);

int main(){
	int v;system("CLS");
	cout << "Digite o valor:";
	cin>> v;cout << "Dobro = " << dobro(v) << endl;
	system("PAUSE");
	return 0;
}

int dobro (int x){
	return(x*2);
}
