#include <stdio.h>

int lerpositivo(){
    int num;
    do{
      printf("Digite um numero inteiro e positivo: ");
      scanf("%d", &num);
    } while (num < 0);
    return num;
}

int mostrar_numeros(int *x, int *y, int *z){
    int maior;
    maior = *x;
    if(x > maior){
        maior = *x;
    }
    if(y > maior){
        maior = *y;
    }
return maior;
} 

int main(){
    int numA = 1, numB = 2, numC = 3, maior;
    char option;

    do{
    
    numA = lerpositivo();
    numB = lerpositivo();
    numC = lerpositivo();

    maior = mostrar_numeros(&numA, &numB, &numC);

    printf("O maior número é: %d", maior);

    printf("\n %d %d %d", numA, numB, numC);

    printf("\nDeseja continuar [s/n]: ");
    scanf(" %c", &option);
    }while(option == 's');

    return 0;
}