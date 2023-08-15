#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*1.Crie uma função que preencha um vetor de mil posições com valores aleatórios de 1 até 6.
Conte quantas vezes cada número foi sorteado. Em seguida, exiba a porcentagem de vezes em que cada número foi sorteado.*/

// void fufillvector (int vector[], int size);
// void contar(int vetor[], int size, int contagem[]);
// void porcentagem (int contagem[], int size);

// int main() {
//     srand(time(NULL));    
//     int vector[1000];
//     int contagem[7] = {0};
    
//     fufillvector(vector, 1000);
//     contar(vector, 1000, contagem);
//     porcentagem(contagem, 1000);
    
//     return 0;
// }

// void fufillvector (int vector[], int size){
//     for (int i = 0; i < size; i++){
//         vector[i] = rand() % 6 + 1;
//     }
// }
// void contar(int vetor[], int size, int contagem[]) {
//     for (int i = 0; i < size; i++) {
//         contagem[vetor[i]]++; // Incrementa a contagem do número sorteado
//     }
// }
// void porcentagem (int contagem[], int size){
//     for (int i = 1; i <= 6; i++) {
//         float porcentagem = (float) contagem[i] / size * 100;
//         printf("Número %d foi sorteado %.2f%% das vezes.\n", i, porcentagem);
//     }
// }

/*02. Faça um programa para lançar uma moeda. Quando chamamos uma função, ela deve retornar cara ou coroa 
(pode ser representado como 0 e 1). Em outra função, faça n lançamentos de moedas, em que n é o valor que
 o usuário quiser, e mostre a porcentagem de vezes em que deu cara e em que deu coroa. Se você jogar a moeda 10, 
 100, 1000, um milhão de vezes...o que tende a acontecer?*/

// int tosscoin();
// void moedas(int n);

// int main(void){

//     int n;
//     srand(time(NULL));

//     puts("Quantas vezes você quer lançar a moeda? ");
//     scanf("%d", &n);
    
//     moedas(n);

// return 0;
// }

// int tosscoin(){
//     return rand()%2;
// }
// void moedas(int n){
//     int head = 0, tail = 0, result;
//     float porcentagem_head, porcentagem_tail;
    
//     for(int i = 0; i < n; i++){
//         result = tosscoin();
//         if (result == 0){
//             head++;
//         }
//         else{
//             tail++;
//         }
//     }
//     porcentagem_head = (float)head / n * 100;
//     porcentagem_tail = (float)tail / n * 100;
   
//     printf("A porcentagem de caras, jogadas %d vezes é de: %.2f%%\n", n, porcentagem_head);
//     printf("A porcentagem de coroas, jogadas %d vezes é de: %.2f%%\n", n, porcentagem_tail);
// }

/*03. Escrever um programa para somar duas matrizes de inteiros. Crie funções separadas para 
a) ler uma matriz; 
b) somar duas matrizes; 
c) imprimir uma matriz.*/

// int matrixA[3][3];
// int matrixB[3][3];
// int matrixC[3][3];

// void create(){
//     printf("Digite os elementos da Matriz A:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &matrixA[i][j]);
//             printf("Digite o valor para a linha %d, coluna %d: ", i, j);
//         }
//     }
//     printf("Digite os elementos da Matriz B:\n");
//         for (int i = 0; i < 3; i++) {
//             for (int j = 0; j < 3; j++) {
//                 printf("Digite o valor para a linha %d, coluna %d: ", i, j);
//                 scanf("%d", &matrixB[i][j]);
//             }
//         }
//     system("clear");
//     }

// void sum_matrix(){
//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
//         }
//     }
// };

// void print_matrix(int matrix[][3]){
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d\t", matrix[i][j]);
//         }
//         puts("\n");
//     }
// }

// int main(void){

//     int opt;

//     do{   
//     printf("(1) Digitar as matrizes. Digite - 1.\n"
//            "(2) Imprimir as matrizes digitadas, digite - 2.\n"
//            "(3) Somar e imprimir as matrizes criadas, digite - 3. \n"
//            "(4) Sair, digite - 0.\n");
//     scanf("%d", &opt);
//     if (opt == 1){
//         create();
//     }
//     else if (opt == 2){
//         printf("Matriz A:\n");
//         print_matrix(matrixA);
//         printf("Matriz B:\n");
//         print_matrix(matrixB);
//     }
//     else if (opt == 3){
//         sum_matrix();
//         printf("Matrix A + B:\n");
//         print_matrix(matrixC);
//     }
//     }while (opt != 0);

// return 0;
// }

/* 4. Criar uma função que receba um vetor de inteiros positivos, um vetor de caracteres e o tamanho (único)
dos vetores. A função deve imprimir cada um dos caracteres do 2º vetor n vezes, onde n é o conteúdo da posição 
correspondente no vetor de inteiros. */

void printChar(int* int_vet, char (*char_vet)[20], int size){
    for (int i = 0; i < size; i++){
        int n = int_vet[i];
        for (int j = 0; j < n; j++){
            printf("%s ", char_vet[i]);
        }
    printf("\n");
    }
}

int main(){

    int vetor[5] = {1, 2, 3, 4, 5};
    char nome[5][20] = {"maça", "banana", "batata", "sorverte", "melao"};
   
    printChar(vetor, nome, 5);
    
return 0;
}