//8ª) Criar um programa que verifique se um número é primo ou não, através de uma função.
// Número primo é divisível somente por 1 e por ele mesmo.

#include <cstdlib>
#include <iostream>

using namespace std;

bool verificarPrimo(int input) {
    int divisor;
    int numDivisores = 0;

    for (divisor = 1; divisor <= input; divisor++) {
        if (input % divisor == 0) {
            numDivisores++;
        }
    }

    if (numDivisores == 2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    setlocale(LC_ALL, "");
    int input;

    cout << "Digite o número a ser avaliado: ";
    cin >> input;

    if (verificarPrimo(input)) {
        cout << "O número é primo";
    } else {
        cout << "O número não é primo";
    }

    return 0;
}

