//Soma dos valores de um array de 5 posições.

#include<stdio.h>

int somaArray(int array[], int n){
    if (n == 0){
        return 0;
    }

    else{
        return somaArray(array, n - 1) + array[n-1];
    }
}


int main(void){

    int vetor[5]; 
    int n = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i < 5; i++){
        printf("Digite um valor para o Vetor de 5 posições [%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("%d", somaArray(vetor, n));


    return 0;
}