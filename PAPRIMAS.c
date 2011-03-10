#include<stdio.h>
 
int main(){
    int i, j;
 
    int primos[1041];
 
    for( i = 0; i < 1041; i++ ){
        primos[i] = i % 2;
    }
 
    primos[2] = 1;
 
    for( i = 3; i < 1041; i += 2 ){
        if( primos[i] ){
            for( j = i * i; j < 1041; j+=i ){
                primos[j] = 0;
            }
        }
    }
 
    char letras[21], *c;
    while( scanf( "%s", letras ) != EOF ){
        int soma = 0;
        c  = letras;
        while( *c ){
            soma += ( *c >= 'a' ) ? *c - 'a' + 1 : *c - 'A' + 27;
            c++;
        }
 
        printf( primos[soma] ? "It is a prime word.\n" : "It is not a prime word.\n" );
    }
 
    return 0;
}
