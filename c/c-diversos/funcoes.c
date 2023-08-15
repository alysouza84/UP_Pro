#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double leValor(){
    double num;
    printf("Digita um valor para obter seu quadrado: ");
    scanf("%lf", &num);
    return num;
}

void quadrado(double valor){
    double resultado;
    resultado = pow(valor, 2);
    printf("%.2lf ao quadrado é %.2lf\n", valor, resultado);
}

int main(){
    double valor;
    valor = leValor();
    quadrado(valor);
 return 0;
}