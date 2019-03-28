/* função soma-produto utilizando ponteiros */
#include<stdio.h>

void somaprod(int a, int b, int *p, int *q){
    *p = a + b;
    *q = a * b;
}

int main(void){
    
    int s, p;
    somaprod(3,5,&s,&p);
    printf("Soma = %d Produto = %d\n",s,p);

    return 0;
}
