#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int quadrado(int n){
	if(n==1)
		return 1;
	else
		return (n*n) + quadrado(n-1);
}

int main() {
	int n,resultado; 
	while(scanf("%d", &n) && n!=0) {
		resultado = quadrado(n);
		printf("%d\n", resultado);
	}
	return 0;
}	
