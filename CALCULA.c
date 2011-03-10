#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int m,i,op,count=1;
	long resultado;
	
	while(scanf("%d", &m) && m!=0) {
		char expressao[m*4], *operador, *sinal;
		resultado=0;
		scanf( "%s", expressao );
		resultado += strtol(expressao,&operador,10);
		sinal = operador;
		while(*sinal){
			if(*sinal=='+'){
				sinal++;
				resultado += strtol(sinal,&operador,10);
			}
			else{
				sinal++;
				resultado -= strtol(sinal,&operador,10);
			}
			sinal = operador;
		}
		printf("Teste %d\n%d\n\n",count++,resultado);
	}
	return 0;
}	
