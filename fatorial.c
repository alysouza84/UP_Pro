#include<stdio.h>

int funcao(double fatorial){
    if(fatorial == 0 || fatorial ==1){
        return 1;
        }
    else{
        return fatorial * funcao(fatorial - 1);
    }
}

int main(void){

    double numero, resultado;

    printf("Digite um número para ser Fatorado: ");
    scanf("%lf", &numero);

    if (numero < 0){
        printf("numero não negativo...");
    }
    else{
        resultado = funcao(numero);
        printf("O fatorial de %.2lf é %.2lf.\n", numero, resultado);
    }
    return 0;
}