#include <stdio.h>
 
//Funçao que calcula o numero de movimentos de discos pelo deslocamento de bits. 
int hanoi(int num){
	num = (1 << num) - 1; // Equivalente a: 1*(2^num) - 1
	return num;
}
int main(){
    int numDiscos, count = 1;
    while(scanf("%d",&numDiscos) && numDiscos != 0){
        printf( "Teste %d\n%d\n\n", count++, hanoi(numDiscos) );
    }
	return 0;
}
