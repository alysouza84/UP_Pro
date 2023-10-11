
#include<stdio.h>

int convertBi(int *vetor, int max, int num){

    if(num == 0){
        return max;
    }else{
        vetor[max] = num % 2;
        num = num / 2;
        //printf("%d", vetor[max]);
        return convertBi(vetor, max + 1, num);
    }
}

int main(){

    int numero = 15;
    int vetor[8];
    int cont = 0;

    cont = convertBi(vetor, cont, numero);

    int contador = 8 - cont;

    for(int i = cont - 1; i >= 0 ; i--){
        printf("%d", vetor[i]);
    }

    return 1;
}