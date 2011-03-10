#include <stdio.h> 
#include <stdlib.h> 


int compare (const void * a, const void * b){
	return ( *(int*)a - *(int*)b );
}

int main(){
	int a,d;
	int i;

	int at[12],de[12];

	while(scanf("%d %d",&a,&d)==2 &&a){
		
		for(i=0;i<a;++i)
			scanf("%d",&at[i]);
		
		for(i=0;i<d;++i)
			scanf("%d",&de[i]);
		
		qsort(at,a,sizeof(int),compare);
		
		qsort(de,d,sizeof(int),compare);

		if(at[0]<de[1]){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
	}
}
