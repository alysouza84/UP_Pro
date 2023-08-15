#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//1. Elaborar um programa que leia dez valores numéricos reais e 
// apresente no final a soma e a média dos valores lidos

// int main(void){

//     int numeros, soma = 0;
//     float media;
    
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("Digite 10 números para que sejam somados e se faça a média (%d): \n", i);
//         scanf("%d", &numeros);
//         soma += numeros;
//     }
    
//     media = (float)soma/10;

//     printf("A soma dos 10 números digitados é: %d\n", soma);
//     printf("A média dos números é: %.2f\n", media);

//     return 0;
// }

// // Exercício 03;
// int main(){

//     int numero, times, multi;
//     printf("Digite um número para saber sua tabuada: ");
//     scanf("%d", &numero);
//     for (times = 1; times <= 10; times++)
//     {
//         multi = numero * times;
//         printf("%d x %d = %d\n", numero, times, multi);
//     }
    

//     return 0;
// }

// Exercício 02;

// int main(void){

//     float chaves=1.10, kiko=1.40, anos=0;
//     while (kiko >= chaves)
//     {
//         kiko = kiko + 0.02;
//         chaves = chaves + 0.03;
//         anos++;
//     }
//     printf("Chaves levará %.2f anos para ser do tamanho do kiko.\n", anos);

//     return 0;
// }

//Exercício 04;

// int main(void){

//     float count=0, count_num=0, media;
//     int i;
//     for (i = 1; i <= 100; i++)
//     {
//         if (i%2==0)
//         {
//             count = count + i;
//             count_num++;
//         }
//     }
//     media = count / count_num;

//     printf("A média aritimetica dos numeros pares de 1 a 100 é de: %.2f\n", media);

//     return 0;
// }

//Exercício 05;

// int main(void){
//     int i;
//     for (i = 1; i < 21; i = i+2){
//     printf("%d, ", i);
//     }
    
//     return 0;
// }

//Exercício 06;

// int main(void){

//     int num, intervalo1=0, intervalo2=0, intervalo3=0, intervalo4=0;

//     do
//     {
//         printf("Digite um numero de 0 a 100 ou um negativo para terminar: ");
//         scanf("%d", &num);
//         if (num>=0 && num<= 25){
//             intervalo1++;
//         }
//         else if (num>= 26 && num<=50){
//             intervalo2++;
//         }
//         else if (num>= 51 && num<= 75){
//             intervalo3++;
//         }
//         else if (num>=76 && num<=100)
//         {
//             intervalo4++;
//         }
//     } while (num>=0);
    
//     printf("\nA quantidade de números digitados entre os intervalos 0 e 25: %d\n", intervalo1);
//     printf("A quantidade de números digitados entre os intervalos 26 e 50 são: %d\n", intervalo2);
//     printf("A quantidade de números digitados entre os intervalos 51 e 75 são: %d\n", intervalo3);
//     printf("A quantidade de números digitados entre os intervalos 76 e 100 são: %d\n", intervalo4);
//     return 0;
// }


// Exercício 07;

// int main(void){

//     int num, sum_pos=0, sum_neg=0;

//     printf("Digite um número inteiro positivo ou negativo para que sejam somados entre os seus semelhantes: ");
//     scanf("%d", &num);

//     while (num != 0)
//     {
//         if (num>0)
//         {
//             sum_pos = sum_pos + num;
//         }
//         else if (num < 0)
//         {
//             sum_neg = sum_neg + num;
//         }
//         printf("Digite mais um numero positivo ou negativo para ser soamdo: \n");
//         scanf("%d", &num);
//         printf("Digite ZERO para encerrar a contagem.\n");
//     }
//     printf("A soma dos números positivos é: %d\n", sum_pos);
//     printf("A soma dos números negativos é: %d\n", sum_neg);
// return 0;
// }

//Exercício 08;

// int main(void){

//     int num, count=0, sum=0;
    
//     printf("Digite um número inteiro positivo para ser somado e ter a média: ");
//     scanf("%d", &num);
        
//     while (num != 0)
//     {
//         while (num < 0)
//         {
//             printf("Digite apenas números positivos: ");
//             scanf("%d", &num);
//         }
//         sum = sum + num; 
//         count++;
//         printf("Digite um número inteiro positivo para ser somado e ter a média (zero para sair): ");
//         scanf("%d", &num);
//     }
//     printf("A média dos números digitados é de: %d\n", sum/count);
//     return 0;
// }

//Exercício 09;

// int main(void){

//     int a, b, menor, mdc=0, i=1;

//     printf("Digite o primeiro número para calculo de MDC: ");
//     scanf("%d", &a);
//     printf("Digite o segundo número para cálculo de MDC: ");
//     scanf("%d", &b);

//         if (a > b)
//         {
//             menor = a;
//         }
//         else{
//             menor = b;
//         }
//     while (i <= menor)
//     {
//         if (a%i == 0 && b%i == 0) {
//             mdc = i;
//         }
//         i++;
//     }
//     printf("O MDC dos numeros iputados é %d", mdc);
//     return 0;
// }

//Exercício 10;

// int main(){

//     int num, num_maior=0, num_menor=0;

//     do{
//         printf("Digite números inteiros positivos: ");
//         scanf("%d", &num);
        
//         if (num_maior<num){
//         num_maior = num;
//         }
//         else if (num_menor>num){
//         num_menor = num;
//         }
        
//         } while (num != 0);
//     printf("O maior número digitado foi: %d \n", num_maior);
//     printf("O menor número digitado foi: %d \n", num_menor);
//     return 0;
// }

// Exercício 11;

// int main(void){

//     int i, sum=0;

//     for (i = 1; i <= 500; i= i+2)
//     {
//         if (i%3==0)
//         {
//             sum = sum+i;
//         }
//     }
//     printf("A soma dos numeros ímpares e multiples de 3 entre 0 e 500, é: %d", sum);
//     return 0;
// }

//Exercício 12;

// int main(void){

//     int i, num, raz;

//     printf("Digite um número para base: ");
//     scanf("%d", &num);
//     printf("Digite um número para razão: ");
//     scanf("%d", &raz);

//     for (i = 1; i <= 10; i++){
//     printf("%d \n", num);
//     num += raz; //progressao aritimérica
//     }
//     return 0;
// }

// //Exercício 13;

// int main(void){

//     int i, num, raz;

//     printf("Digite um número para base: ");
//     scanf("%d", &num);
//     printf("Digite um número para razão: ");
//     scanf("%d", &raz);

//     for (i = 1; i <= 10; i++){
//     printf("%d \n", num);
//     num *= raz; // progressão geométrica
//     }
//     return 0;
// }

//Exercício 14;

// int main(void){

//     int ast;

//     printf("Digite quantos asterísticos a serem impressos: ");
//     scanf("%d", &ast);

//     for (int i = 0; i < ast; i++){
//         for (int j = 0; j <= i; j++){
//             printf("*");
//         }
//     printf("\n");
//     }
//     return 0;
// }

//Exercício 15;

int main(void){

    int a, b, aux;
    printf("Digite dois números para obter a tabua deles e os numeros entre eles: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        for ( int j = 1; j <= 10; j++)
        {
            aux = j * i;
            printf("%d * %d = %d\n", i, j, aux);
        }
    printf("\n");
    }
    return 0;
}