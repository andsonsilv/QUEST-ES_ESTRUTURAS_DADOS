#include<stdio.h>

void imprime(float a){
    
    static int n = 10;

    printf(" %.0f %d\n",a,n);
    n++;

}

int main(){

    int n = 20;
    while(n >= 10){
        imprime(n);
        n--;
    }
    return 0;

}

/* Podemos declarar variáveis estáticas dentro de funções.
Nesse caso, as variáveis também não são armazenadas na pilha,
mas sim numa área de memória estática que existe enquanto o
programa está sendo executado. */

/* Se uma variável estática estática não for inicializada de
forma explícita na declaração, ela é automaticamente inicializada
com zero. (As variáveis globais também são, por padrão,
inicializada com zero). */ 

