#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// //Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou se são iguais.

// int main(){
//     double num_a, num_b;
//     printf("Digite o número A: ");
//     scanf("%lf", &num_a);
//     printf("Digite o número B: ");
//     scanf("%lf", &num_b);

// if (num_a > num_b){
//     printf("O numero A %lf é o maior que B %lf", num_a, num_b);    
// }
// else if (num_a < num_b)
// {
//     printf("O numero B %lf é o maior que o número A %lf", num_b, num_a);
// }
// else
// {
//     printf("Os números A e B são iguais!");
// }
//     return 0;
// }

/* Efetuar a leitura de um valor numérico inteiro positivo ou negativo representado pela variável N 
e apresentar o valor lido como sendo positivo. Dica: se o valor lido for menor que zero, 
ele deve ser multiplicado por -1. */

// int main(){

//     int n;
//     printf("Digite um número inteiro: ");
//     scanf("%d", &n);
//     if (n<0)
//     {
//         printf("Número: %d \n", n*-1);
//     }
//     else
//     {
//         printf("Número: %d \n");
//     }    
//     return 0;
// }

// Uma empresa qualquer decidiu conceder um aumento de salários a seus
// funcionários de acordo com a tabela a seguir:

// 0,00 – 1.400,00 - 15%
// 1.400,01 – 2.000,00 - 12%
// 2.000,01 – 3.000,00 - 10%
// 3.000,01 – 3.800,00 - 7%
// 3.800,01 – 5.000,00 - 4%
// acima de 5.000,00 - sem aumento

// Escreva um algoritmo que leia o salário atual de um funcionário e escreva o
// percentual de seu aumento e o valor do salário corrigido a partir desse aumento.

// int main(void){

// 	double salario, salario_novo;
// 	printf("Digite o seu salario: ");
// 	scanf("%lf", &salario);

// 	if (salario <= 1400)
// 	{
// 		salario_novo = (salario*15)/100+salario;
// 		printf("Seu novo salario é de R$%.2lf", salario_novo);
// 	}
	
// 	return 0;
// }