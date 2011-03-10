#include <stdio.h>
#include <stdlib.h>

int main() {
	float a,g,ra,rg,tempA,tempG;
	while(scanf("%f%f%f%f", &a,&g,&ra,&rg) != EOF) {
		tempA = a/ra;
		tempG = g/rg;
		if(tempA>=tempG)
			printf("G\n");
		else
			printf("A\n");
	}
	return 0;
}	
