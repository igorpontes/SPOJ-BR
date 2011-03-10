#include <stdio.h> 

int main(){
	
	int linhas=0,colunas=0,resultado=0,i,j,temp;
	int matriz [100][100];
		
	scanf("%d %d",&linhas,&colunas);
	for (i=0; i<linhas; i++) {
		for (j=0; j<colunas; j++) {
			scanf("%d",&matriz[i][j]);
		}
	}
	

	for (i=0; i<linhas; i++) {
		temp = 0;
		for (j=0; j<colunas; j++) {
			temp += matriz[i][j];
		}
		if(temp>resultado) resultado = temp;
	}

	for (j=0; j<colunas; j++) {
		temp = 0;
		for (i=0; i<linhas; i++) {
			temp += matriz[i][j];
		}
		if(temp>resultado) resultado = temp;
	}
	
	printf("%d",resultado);
	
	return 0;
}

