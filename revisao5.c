#include<stdio.h>
#include<stdlib.h>


int main(void){

    int *vet = (int*) malloc(10*sizeof(int));

    if(vet == NULL){
        printf("Erro de alocação de memória.\n");
        return 0;
    }

    int *p = NULL;

    for (int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    for (p = &vet[9]; p >= &vet[0]; p--){
        printf("%d ", *p);
    }
    
    puts("\n");
    
    free(vet);

    return 0;
}