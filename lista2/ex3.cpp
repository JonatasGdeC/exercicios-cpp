//3.ª) Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um 
//automóvel que faz “x” km/l. Para obter o cálculo, o usuário deverá fornecer o tempo gasto na viagem e 
//a velocidade média durante a mesma. Desta forma será possível obter a distância percorrida com a fórmula: 
//DISTÂNCIA= TEMPO * VELOCIDADE (utilizar uma função). Tendo o valor da distância, basta calcular a quantidade 
//de litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS=DISTÂNCIA / “x” (através de função). 
//O programa deverá apresentar os valores da velocidade média, tempo gasto na viagem, 
//a distância percorrida e a quantidade de litros utilizada na viagem.

#include<iostream>
using namespace std;
int
main ()
{
  setlocale (LC_ALL, "");
  float x, d, v, t, l;
  cout << "Digite o consumo do seu automóvel (km/l): ";
  cin >> x;
  cout << "Digite o tempo gasto na sua viagem (h): ";
  cin >> t;
  cout << "Digite a velocidade média (km/h):";
  cin >> v;
  d = t * v;
  l = d / x;
  cout << "A sua velocidade média foi " << v << "km/h, o tempo gasto foi " << t << " hora(s), a distância percorrida foi " << d << "km e foram gastos " << x << " litros de combustível.";
  return 0;
}

