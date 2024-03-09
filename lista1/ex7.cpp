//7) Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo.  A 
//s�rie � formada pela seq��ncia: 1,1,2,3,5,8,13,21,34,....,etc.

#include<iostream>
using namespace std;

int main (){
	int termo1 = 0, termo2 = 1, termoAtual;
	
	for(int i = 2; i < 15; i++){
		if(i == 3){
			termoAtual = termo2;
		} else {
			termoAtual = termo1 + termo2;	
		}
		cout << termoAtual << " ";
		termo1 = termo2;
		termo2 = termoAtual;
	};
	
	return 0;
}
