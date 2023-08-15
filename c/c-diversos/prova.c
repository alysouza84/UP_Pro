#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gabarito(int vetor[], int num){
  srand(time(NULL));
  for (int i = 0; i < 10; i++){
    vetor[i] = rand()%5+1;
  }
}

void usuario (int resposta[], int size){
    for (int i = 0; i < 10; i++){
      printf("Digite a resposta da Questão %d: ", i);
      scanf("%d", &resposta[i]);
      while (resposta[i] < 0 || resposta[i] >= 6){
          printf("Digite uma resposta entre 1 e 5 para questão %i: ", i);
          scanf("%d", &resposta[i]);
        }
      }
    }

int main(){

    int resposta[10], vetor[10];
    int count = 0;
    int ava[10], acertos = 0;

    usuario(resposta, 10);
    gabarito(vetor, 10);

    printf("\nRespostas do Usuário:\n");
    for (int i = 0; i < 10; i++){
        printf("Questão %d: %d\n", i, resposta[i]);
    }
    printf("\nDados da Avaliação:\n");
    for(int i = 0; i < 10; i++){
      if (resposta[i] == vetor[i]){
        ava[count] = 1;
        count++;
        acertos++;
      }
      else{
        ava[count] = 0;
        count++;
      }
    }
    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    puts("\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", resposta[i]);
    }
    puts("\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", ava[i]);
    }
    printf("\nTotal de acertos: %d\n", acertos);

    return 0;
}