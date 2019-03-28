#include<stdio.h>

int s, p; /* variáveis globais */

void somaprod(int a, int b){
    
    s = a * b;
    p = a * b;

}

int main(){

    int x, y;
    scanf("%d %d", &x, &y);
    somaprod(x,y);
    printf("Soma = %d Produto = %d\n",s,p);
    return 0;

}

/* Salientamos, no entando, que o uso de vaviáveis globais
em um programa deve ser feito com muito critério, pois podemos
criar um alto grau de interdependência entre a função, o que
dificulta o entedimento e a reutilização do código. 
