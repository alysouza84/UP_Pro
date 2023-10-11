#include<stdio.h>


int fibonacci(int num){
    if(num < 2){
        return num;
    }
    else{
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int fibonacciCauda(int num, int a, int b){
    if(num == 0){
        return a;
    }
    else{
        return fibonacciCauda(num - 1, b, a+b);
    }
}


int main(){

    int resultado, resultado2, numero;

    scanf("%d", &numero);

    resultado = fibonacciCauda(numero, 0, 1);
    printf("Resultado de Fibonacci: %d \n", resultado);
    
    resultado2 = fibonacci(numero);   
    printf("Resultado de Fibonacci: %d \n", resultado2);


    return 0;
}