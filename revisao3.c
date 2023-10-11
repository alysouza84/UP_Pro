#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[50];
    int idade;
} pessoa;



int main(){

    pessoa *ponteiroPessoa = malloc(sizeof(pessoa));

    scanf("%s", &ponteiroPessoa->nome);
    printf("%s\n", ponteiroPessoa->nome);

    float v[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int i; 
    float *ptr;

    ptr = v;
    
    for(i = 0; i < 5; i++){
        printf("%.1f ", *(ptr+i));
    }
    puts("\n");

    int x, *ptrx, **pptrx;
  
    x = 0;
    printf("valor de x = %d\n", x);
    printf("Endereco de x: %d\n", &x);

    return 0;
}