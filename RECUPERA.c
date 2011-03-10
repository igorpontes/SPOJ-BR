#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main(){
	int n,i,count=1;
	
	while (scanf( "%d", &n ) != EOF) {
		int soma = 0,numero,achou=0,termo;
		
		
		for(i = 0; i < n; i++ ){
			scanf( "%d", &numero );
			
			if (numero == soma && !achou) {
				achou = 1;
				termo = numero;
			}
			soma += numero;
			
		}
		
		printf( "Instancia %d\n", count++ );
		if (achou) {
			printf("%d\n\n", termo);
		}
		else {
			printf("nao achei\n\n");
		}
	}
	
	return 0;
}
