//8�) Criar um programa que verifique se um n�mero � primo ou n�o, atrav�s de uma fun��o.
// N�mero primo � divis�vel somente por 1 e por ele mesmo.

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

    cout << "Digite o n�mero a ser avaliado: ";
    cin >> input;

    if (verificarPrimo(input)) {
        cout << "O n�mero � primo";
    } else {
        cout << "O n�mero n�o � primo";
    }

    return 0;
}

