#include<stdio.h>

int fat(int n){
    if(n == 0)
        return 1;
    else
        return n * fat(n-1);
}

int main(){

    printf("%d\n", fat(5));
    return 0;

}

/* As funções podem ser chamadas recursivamente, isto é, dentro
de um corpo de uma função podemos chamar novamente a própria
função. Se uma função A chama a própria função A, dizemos que
ocorre uma recursão direta. */