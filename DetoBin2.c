#include <stdio.h>

int binario(int a){

    if(a == 0){
        return a;
    }
    else{
        return (a % 2 + 10 * binario(a / 2));
    }
}

int main(void){

    int a, result;

    printf("Entre um número decial para transformar em Binário: ");
    scanf("%d", &a);

    result = binario(a);

    printf("Número %d em binário é: %d", a, result);

    return 0;
}