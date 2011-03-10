#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
	int tam,i; 
	int contador = 1;
	char w[65];
	
	while(scanf("%s", &w) != EOF) {
		long long int soma = 0;
		tam = strlen(w);
		for( i = 0; i < tam; i++ ){
			if( w[i] == 'b'){
				soma += (long long int)pow(2,tam - i -1); 
			}
		}
		printf("Palavra %i\n", contador++); printf("%lli\n\n", soma);
	}
	return 0;
}	
