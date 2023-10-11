#include<stdio.h>
#include<stdlib.h>

void printVector(int *v, int size){
    
    for (int i = 0; i < size; i++){
        printf("Endereço: %d | ", (v+i));
        printf("Valor: %d\n", *(v+i));
    }
    
}

void main(){

    int vet[] = {10, 20, 30, 40 , 50};
    int i, quantidade;
    int *array = (int *) malloc(5*sizeof(int));

    array = vet;

    for(i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    
    printf("%d", *array);

    // printf("%d ", &vet[0]);
    // printf("%d ", vet);
    // printf("%d ", vet[0]);
    // printf("%d \n", *vet);

    puts("\n");

    printf("Digite a quantidade para mostrar: ");
    scanf("%d", &quantidade);

    printVector(vet, quantidade);

    // for ( i = 0; i < 5; i++){
    //     printf("Endereço: %d | ", &vet[i]);
    //     printf("Valor: %d\n", vet[i]);
    // }
    // puts("\n");
    
}