#include<stdio.h>
#include<stdlib.h>

int main(){

    int *v = (int *) malloc(10 * sizeof(int));
    for(int i = 0; i <= 10; i++){
        v[i] = i;
        printf("%d ", v[i]);
    }
    printf("\n");
    free(v);
    
    return 0;

}