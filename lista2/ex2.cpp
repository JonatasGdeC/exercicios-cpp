//2.�) Dado um n�mero real X e um n�mero natural K, calcular a pot�ncia X elevado a K atrav�s de produtos sucessivos.
//xk = x.x.x.x. ...... x
//Obs: independente do valor de k, para x=0 ou 1 o resultado � imediato, isto �, 0 e 1.
 
#include<iostream>
using namespace std;
int main () {
    setlocale(LC_ALL, "");
    int x, k, r;
   
    cout << "Digite o valor da base: ";
    cin >> x ;
    cout << "Digite o valor da pot?ncia: ";
    cin >> k;
   
    if(k == 0){
        r = 1;
    } else if (k == 1){
        r = x;
    } else {
        for (k; k > 0 ; k--){
            r = x * x;
        };
    }
   
    cout << "Resposta = " << r;
   
    return 0;
}
 
