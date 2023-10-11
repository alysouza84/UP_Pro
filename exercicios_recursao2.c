//Fatorial usando recursão

#include<stdio.h>

int fatorial(int n){
    if (n < 1){
        return 1;
    }
    else{
        return n * fatorial(n - 1);
    }
    
}

int main(){

    int n;

    printf("Digite um número para fatorar: ");
    scanf("%d", &n);

    printf("Fatorial de %d, é: %d.\n", n, fatorial(n));

    return 0;
}