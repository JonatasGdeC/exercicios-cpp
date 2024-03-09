//7) Faça um programa que apresente a série de Fibonacci até o décimo quinto termo.  A 
//série é formada pela seqüência: 1,1,2,3,5,8,13,21,34,....,etc.

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
