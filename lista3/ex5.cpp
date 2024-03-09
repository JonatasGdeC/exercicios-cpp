//5ª) Criar um programa que mostre qual o maior valor entre dois números,
// utilizando uma função do tipo void (que não retorna valores).
 
#include <iostream>
using namespace std;
 
void maior(int n1, int n2) {
	if (n1 == n2){
		cout << "Os número são semelhantes";
	} else {
		if(n1 > n2){
    	cout << "O maior número digitado foi o " << n1;
		} else {
			cout << "O maior número digitado foi o " << n2;
		}	
	}
}
 
int main() {
    setlocale(LC_ALL, ""); 
    int n1, n2;
    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite outro número: ";
    cin >> n2;
    maior(n1, n2);
    return 0;
}
