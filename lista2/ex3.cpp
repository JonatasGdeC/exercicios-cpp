//3.�) Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem, utilizando-se um 
//autom�vel que faz �x� km/l. Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto na viagem e 
//a velocidade m�dia durante a mesma. Desta forma ser� poss�vel obter a dist�ncia percorrida com a f�rmula: 
//DIST�NCIA= TEMPO * VELOCIDADE (utilizar uma fun��o). Tendo o valor da dist�ncia, basta calcular a quantidade 
//de litros de combust�vel utilizada na viagem com a f�rmula: LITROS_USADOS=DIST�NCIA / �x� (atrav�s de fun��o). 
//O programa dever� apresentar os valores da velocidade m�dia, tempo gasto na viagem, 
//a dist�ncia percorrida e a quantidade de litros utilizada na viagem.

#include<iostream>
using namespace std;
int
main ()
{
  setlocale (LC_ALL, "");
  float x, d, v, t, l;
  cout << "Digite o consumo do seu autom�vel (km/l): ";
  cin >> x;
  cout << "Digite o tempo gasto na sua viagem (h): ";
  cin >> t;
  cout << "Digite a velocidade m�dia (km/h):";
  cin >> v;
  d = t * v;
  l = d / x;
  cout << "A sua velocidade m�dia foi " << v << "km/h, o tempo gasto foi " << t << " hora(s), a dist�ncia percorrida foi " << d << "km e foram gastos " << x << " litros de combust�vel.";
  return 0;
}

