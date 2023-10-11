#include<stdio.h>
#include<stdlib.h>


//reversão de números inteiros.

int main(void){

    int num, i = 0, modulo; 
    int vetor[32];
    int isNegative = 0;

    scanf("%d", &num);
    
    if(num < 0){
        isNegative = 1;
        num = abs(num);
    }

    while(num > 0){
        modulo = num % 10;
        vetor[i] = modulo;
        i++;
        num /= 10;
    }

    if (isNegative){
        printf("-");
    }
    
    for (int n = 0; n < i; n++){
        printf("%d", vetor[n]);
    }
    puts("\n");

    return 0;
}