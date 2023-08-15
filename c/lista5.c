#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<math.h>

/*1. Leia do teclado valores para um vetor de 10 elementos 
inteiros,pares e positivos. Crie um segundo vetor da seguinte 
forma: os elementos de índices pares receberão os respectivos 
elementos divididos por 2; os elementos de índices ímpares 
receberão os respectivos elementos multiplicados por 3. 
Imprima os dois vetores. */

// int main(void){

//     int vet1[10], vet2[10], i;
//     srand(time(NULL));

//     //Gerar 10 numeros aleatorios usando o RAND
//     for(i = 0; i < 10; i++){
//         do{
//           vet1[i] = rand() % 51;
//           printf("Posição %i: %i \n", i+1, vet1[i]);
//         } while ((vet1[i] < 0) || (vet1[i] % 2 != 0));
//     }

//     printf("Resultados para Vetor 2: \n");

//     //Aplicar as condicoes dadas na questão
//     for (i = 0; i < 10; i++){
//         if (i % 2 == 0){
//             vet2[i] = vet1[i] / 2;
//         }
//         else{
//             vet2[i] = vet1[i]*3;
//         }
//         //imprimir os dois vetores na tela
//         printf("Vetor 1 - %i de 10 elementos: %d\n", i+1, vet1[i]);
//         printf("Vetor 2 - %i de 10 elementos: %d\n", i+1, vet2[i]);
//     }
//     return 0;
// }

/*2. Escreva um programa que sorteie aleatoriamente 1000 números e 
armazene-os em um vetor. Em seguida, o usuário deve digitar um número e 
seu programa deve informar se o número digitado está contido no vetor ounão. 
Se estiver, diga em que posições do vetor ele é encontrado.*/

// int main(void){


//     int count = 0, i, number;
//     int vetor[1000], vetor_st[1000];
    
//     srand(time(NULL));

//     for(i = 0; i < 1000; i++){
//         vetor[i] = rand() % 600;
//         printf("Posicão %i: %i \n", i, vetor[i]); //para teste
//     }
//     printf("Digite um número para saber se ele está contido num vetor de 1000 números: ");
//     scanf("%i", &number);
//     for (i = 0; i < 1000; i++){
//         if (number == vetor[i]){
//             vetor_st[count] = i;
//             count++;
//         }
//     }
//     if (count > 0){
//         for(i = 0; i < count; i++){
//             printf("O numero está presente no seguinte indice: %i \n", vetor_st[i]);
//         }
//     }
//     else{
//         printf("O número não está presente no vetor.");
//     }
//     return 0;
// }

/*3. Escreva um programa que verifica se uma string é um palíndromo, ou seja, 
é a mesma quando lida de trás para frente ou de frente para trás*/

// int main(void){

//     char word[500], reverse_word[500];
//     int size, i, j;

//     printf("Digite uma palavra para saber se ela é políndroma: ");
//     fgets(word, 500, stdin);
    
//     size = strlen(word);
    
//     printf("Tamanho de caracteres: %i\n", size);

//     j = size-2;

//     for (i = 0; i < size; i++){
//         reverse_word[j] = word[i];
//         j--;
//     }
//     printf("%s", word);
//     printf("%s\n", reverse_word);
//     for (i = 0; i < size; i++){
//         if(reverse_word[i] != word[size-1]){
//             printf("Não é Políndroma.\n");
//             return 0;
//         }
//     }
//     printf("É Políndroma.\n");
//     return 0;
// }
/*4. Escreva um algoritmo que construa uma matriz de 10 linhas e 15 colunas 
contendo números inteiros. Em seguida escreva a soma dos elementos de cada linha e 
se a soma dos elementos é par ou ímpar. Por fim, escreva a soma dos elementos de cada coluna 
e se a soma dos elementos é par ou ímpar. */

// int main(){

//     int matriz[10][15], i, j, line_sum;
//     srand(time(NULL));
//     for(i = 0; i < 10; i++){
//         line_sum = 0;
//         for(j = 0; j < 15; j++){
//             matriz[i][j] = rand() % 10;
//             line_sum += matriz[i][j];
//             printf("%i\t", matriz[i][j]);
//         }
//     if (line_sum % 2 == 0){
//         printf("Soma da linha %i: %i, par. \n", i+1, line_sum);
//     }
//     else{
//         printf("Soma da linha %i: %i, impar. \n", i+1, line_sum);
//     }
//     printf("\n");
//     }
//     return 0;
// }

/*5. Escreva um programa que construa uma matriz de 5 linhas por 5 colunas de números reais 
e coloque o conteúdo de sua diagonal principal dentro de um vetor e o imprima. */

// int main(){

//     int matriz[5][5], col_sum[5]; 
//     int k = 0;
//     srand(time(NULL));

//     for (int i = 0; i < 5; i++){
//         for (int j = 0; j < 5; j++){
//             matriz[i][j] = rand() % 50;
//             printf("%i\t", matriz[i][j]);
//             if (i == j){
//             col_sum[k] = matriz[i][i];
//             k++;
//             }
//         }
//     printf("\n");       
//     }
//     printf("Vetor da coluna principal: ");
//     for (int i = 0; i < 5; i++){
//         printf("%i ", col_sum[i]);
//     }
//     return 0;
// }

/*6. Escreva um programa que gere uma matriz de inteiros 
de 4 linhas por 4 colunas e crie sua transposta 
(matriz transposta é toda a matriz onde são trocadas as linhas pelas colunas ou vice-versa). */

// int main(void){

//     int matriz_4[4][4], reverse[4][4], i, j;
//     srand(time(NULL));

//     for (i = 0; i < 4; i++){
//         for(j = 0; j < 4; j++){
//             matriz_4[i][j] = rand() % 50;
//             printf("%d\t", matriz_4[i][j]);
//         }
//     printf("\n");
//     }
//     for (i = 0; i < 4; i++){
//         for (j = 0; j < 4; j++){
//             reverse[j][i] = matriz_4[i][j]; 
//         }
//     }
//     printf("\nMatriz transposta:\n");
//     for (j = 0; j < 4; j++){
//         for (i = 0; i < 4; i++){
//             printf("%d\t", reverse[i][j]);
//         }
//     printf("\n");
//     }
//     return 0;
// }

/* 7. Escreva um programa que leia do teclado valores inteiros para uma matriz de 5 linhas por 5 colunas. 
Em seguida, leia do teclado um valor numérico X. Conte quantos valores múltiplos de X 
existem na matriz e mostre-os na tela.*/

// int main(){

//     int matriz[5][5], number, count, multiplos[25], flag = 0;
//     srand(time(NULL));

//     for (int i = 0; i < 5; i++){
//         for (int j = 0; j < 5; j++){
//             matriz[i][j] = rand() % 50;
//             printf("%i\t", matriz[i][j]);
//         }
//     printf("\n");
//     }
//     printf("Foi gerada uma matriz 5x5. Digite um número para saber se há multiplos na matriz: \n");
//     scanf("%i", &number);
//     for (int i = 0; i < 5; i++){
//         for (int j = 0; j < 5; j++){
//             if (matriz[i][j] % number == 0){
//                 multiplos[count] = matriz[i][j];
//                 count++;
//                 flag = 1;
//             }
//         }
//     }
//     if (flag == 1){
//         printf("Existem %d multiplos de %d na matriz que são: ", count, number);
//         for(int i = 0; i < count; i++){
//             printf("%d ", multiplos[i]);
//         }
//     }
//     else{
//         printf("Não há números multiplos de %d na matriz.\n", number);
//     }
//     return 0;
// }

/*9. Defina uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3 posições que contenha
a soma dos valores de cada uma das linhas da matriz. Crie um vetor de 4 posições que contenha
a multiplicação dos valores de cada uma das colunas da matriz. Ao final do processamento, imprima
esses vetores. */

// int main(void){

//     int matriz[3][4], line_sum[3]={0}, mult_col[4]={1};
//     srand(time(NULL));

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 4; j++){
//             matriz[i][j] = rand() % 10;
//             printf("%i\t", matriz[i][j]);
//         }
//     printf("\n");
//     }
//     for (int i = 0; i < 3; i++){
//             for (int j = 0; j < 4; j++){
//                 line_sum[i] += matriz[i][j];
//             }
//         }
//     for (int j = 0; j < 4; j++){
//             for (int i = 0; i < 3; i++){
//                 mult_col[j] *= matriz[i][j];
//             }
//         }
//     printf("\nVetor soma das linhas: ");
//     for (int i = 0; i < 3; i++){
//         printf("%i ", line_sum[i]);
//     }
//     printf("\nVetor Multiplicação das colunas: ");    
//     for (int i = 0; i < 4; i++){
//         printf("%d ", mult_col[i]);
//     }
// return 0;
// }

//Exercício 08.

// int main(void){

// int matriz[4][4], option, sum3 = 0, sum_col, sum_line;
// float square;

// for(int i = 0; i <4; i++){
//     for(int j = 0; j < 4; j++){
//         printf("Digite valores para formar uma matriz 4x4. Linha %i, Coluna %i: ", i, j);
//         scanf("%d", &matriz[i][j]);
//     }
// }
// system("clear");
// do{
//     printf("\nDigite o número da uma opção para realizar a tarefa.\n");
//     printf("1. Imprimir todos os elementos da matriz.\n" 
//            "2. Somar os quadrados de todos os elementos da primeira coluna:\n"
//            "3. Somar todos os elementos da terceira linha.\n"
//            "4. Somar todos os elementos da diagonal principal.\n"
//            "5. Somar todos os elementos de índice par da segunda linha.\n");
//     printf("Digite a opção desejada: ");
//     scanf("%d", &option);
    
//     if(option == 1){
//         printf("Aqui está a impressão da Matriz: \n");
//         for(int i = 0; i < 4; i++){
//             for(int j = 0; j < 4; j++){
//                 printf("%d", matriz[i][j]);
//                 printf("\t");
//             }
//         printf("\n");
//         }
//     }
//     else if(option == 2){
//         printf("\nAqui está a soma do quadrado de todos os elementros da primeira coluna: \n");
//         square = 0;
//         for(int i = 0; i < 4; i++){
//             for (int j = 3; j < 4; j++){
//                 square += pow(matriz[i][0],2);            
//             }
//         }
//         printf("%.2f\n", square);
//     }
//     else if(option == 3){
//         printf("\nAqui está a soma dos elementos da terceira linha: \n");
//         sum3 = 0;
//         for(int i = 0; i < 4; i++){
//             sum3 += matriz[2][i];            
//         }
//         printf("%i\n", sum3);
//     }
//     else if(option == 4){
//         printf("\nAqui está a soma dos números da coluna principal: ");
//         sum_col = 0;
//         for (int i = 0; i < 4; i ++){
//             for (int j = 0; j < 4; j++){
//                 if (i == j){
//                     sum_col += matriz[i][j];
//                 }
//             }
//         }
//         printf("%d\n", sum_col);
//     }
//     else if (option == 5){
//         printf("\nAqui está a soma dos números da segunda linha, com índice PAR: ");
//         sum_line = 0;
//         for(int i = 0; i < 4; i++){
//             if(i % 2 == 0){
//             sum_line += matriz[1][i];
//             }
//         }
//         printf("%d\n", sum_line);
//     }
    
// } while (option != 0);

// return 0;
// }