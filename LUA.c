#include <stdio.h>
 
int main(){
   int menor, maior, i, caso = 1, soma;
   int temps, intervalos, temp;
 
   while( scanf( "%d%d", &temps, &intervalos ) ){
      if( !temps ) return 0;
 
      soma = 0;
 
      int vet[intervalos];
 
      for( i = 0; i  < intervalos; i++ ){
         scanf( "%d", &vet[i] );
         soma += vet[i];
      }
      maior = menor = soma / intervalos;
 
      for( ; i < temps; i++ ){
         scanf( "%d", &temp );
         soma += temp - vet[ i % intervalos ];
 
         if( soma / intervalos > maior  ){
           maior = soma/intervalos; 
         } else if( soma / intervalos < menor  ){
            menor = soma/intervalos; 
         }
         vet[ i % intervalos ] = temp;
 
      }
 
      printf( "Teste %d\n%d %d\n\n", caso++, menor, maior );
   }
}
