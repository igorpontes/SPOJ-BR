#include <stdio.h> 
#include <stdlib.h>

int main(){
	int n,i,teste=1,gol,contra,saldo,sequencia,max,min,inicio,fim;
	while(scanf("%d",&n) && (n!=0)){
		sequencia = max = 0;
		min = 1;
		saldo = 0;
		for(i=1;i<=n;i++){
			scanf("%d %d",&gol,&contra);
			saldo = gol-contra;
			if(sequencia+saldo >= 0){
				sequencia += saldo;
				if(sequencia > max){
					max = sequencia;
					inicio = min;
					fim = i;
				}
				if(sequencia==max && (fim-min)<(i-min))
                {
                    inicio = min;
                    fim = i;
                }

			} else {
				min = i + 1;
				sequencia = 0;
			}
		}

		printf("Teste %d\n",teste);
		teste++;

		if(max > 0) printf("%d %d\n\n",inicio,fim);
		else printf("nenhum\n\n");
	}

	return 0;
}

