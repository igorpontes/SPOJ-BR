#include <stdio.h> //Biblioteca padrao de entrada e sai­da
 
//Parte principal do programa
int main(){
	
	int n,c,m,i,turma=1,temp;
	int matriz [1000][2];
	while(scanf("%d",&n) && (n!=0)){
		temp=0;
		for (i=0; i<n; i++) {
			scanf("%d %d",&c, &m);
			matriz [i][0] = c;
			matriz [i][1] = m;
			if(m>temp) temp=m;
		}

		printf("Turma %d\n",turma);
		turma++;

		for (i=0; i<n; i++) {
			if(matriz [i][1] == temp){
				printf("%d ",matriz [i][0]);
			}
		}

		printf("\n\n");
	}
	return 0;
}

