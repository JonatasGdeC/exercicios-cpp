//5�) Criar um programa que mostre qual o maior valor entre dois n�meros,
// utilizando uma fun��o do tipo void (que n�o retorna valores).
 
#include <iostream>
using namespace std;
 
void maior(int n1, int n2) {
	if (n1 == n2){
		cout << "Os n�mero s�o semelhantes";
	} else {
		if(n1 > n2){
    	cout << "O maior n�mero digitado foi o " << n1;
		} else {
			cout << "O maior n�mero digitado foi o " << n2;
		}	
	}
}
 
int main() {
    setlocale(LC_ALL, ""); 
    int n1, n2;
    cout << "Digite um n�mero: ";
    cin >> n1;
    cout << "Digite outro n�mero: ";
    cin >> n2;
    maior(n1, n2);
    return 0;
}
