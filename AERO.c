#include <stdio.h>
#include <math.h>
 

int main(){
    int numA,numV,x,y,maximo,i, count = 1;
	

	while(scanf("%d%d",&numA, &numV) && (numA != 0 || numV != 0)){
		int total[numA];
		maximo = 0;

		for( i = 0; i < numA; i++ ){
			total[i] = 0;
		}

		for(i=0;i<numV;i++){
			scanf("%i%i",&x,&y);
			total[x-1]++;
			total[y-1]++;
		}
		
		for(i=0;i<numA;i++){
			if(maximo<total[i])
				maximo = total[i];
		}
		printf( "Teste %d\n", count++ );
		for(i=0;i<numA;i++){
			if(maximo==total[i]){
				printf( "%i ", i + 1 );
			}
		}
        printf( "\n\n" );
    }
	return 0;
}
