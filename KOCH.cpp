#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca 
#include <string.h>

//Divide o BigInt em 1500, pois a cada 1500 tem um padrao. Retorna o resto da divisao
int dividePadrao( char *c, int tam ){
	int i, num = 0;
	
	for( i = 0; i < tam; i++, c++ ){
		num = (num * 10 + *c - '0') %1500; 
	}
	
	return num;
}

int main(){
	int t;
	short a = 0, b = 1, i, temp;
	char *c = (char*) malloc( 1000001 );
	scanf( "%d", &t );
	short fibonacci[1501];
	
	//completa o array de numeros de fibonacci
	for(i=0; i < 1501; i++ ){
		fibonacci[i] = b;
		temp = b;
		b = (b + a) % 1000;
		a = temp;
	}
	while (t--) {
		scanf( "%s", c );
		temp = dividePadrao( c, strlen(c) );
		printf( "%03d\n", fibonacci[temp-1] );
	}
	
	return 0;
}
