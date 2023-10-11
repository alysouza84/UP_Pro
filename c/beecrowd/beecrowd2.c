#include<stdio.h>
#include<stdlib.h>

int main(){

    int numeros[5];
    int par = 0, impar = 0, positivo = 0, negativo = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
        if (abs(numeros[i]) % 2 == 0){
            par += 1;
        }
        if (numeros[i] % 2 != 0){
            impar += 1;
        }
        if (numeros[i] > 0){
            positivo += 1;
        }
        if (numeros[i] < 0){
            negativo += 1;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor es) negativos(s)\n", negativo);

    return 0;
}