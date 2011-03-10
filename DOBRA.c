#include <stdio.h> 
#include <math.h>

int main(){
	
	int n,teste=1,temp;
	while(scanf("%d",&n) && (n!=-1)){
		temp=(1 + pow(2.0,n))*(1 + pow(2.0,n));

		printf("Teste %d\n%d\n\n",teste,temp);
		teste++;
	}
	return 0;
}

