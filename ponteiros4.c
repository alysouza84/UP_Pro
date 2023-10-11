#include<stdio.h>

typedef struct{
    char nome[50];
    int idade;
} pessoa;

void imprimeValores(float *numeros){
    for (int i = 0; i < 5; i++){
        printf("%.2f ", numeros[i]);
    }
    puts("\n");   
}

int main(void){
    // pessoa cadastro[2];
    // pessoa *ponteiroParaPessoa[2];
    
    // // valorPessoa.idade = 50; //acesso direto;
    // // valorPessoa.nome; //acesso direto;
    // // ponteiroPessoa->idade = ["Alysson"]; //acesso por ponnteiro;
    // // ponteiroPessoa->nome; //acesso por ponteiro;

    // //printf("Idade: = %d", ponteiroParaPessoa->idade);

    // //ponteiroParaPessoa = &cadastro;
    
    // for (int i = 0; i < 2; i++){
    //     printf("Digite o nome: \n");
    //     scanf("%s", cadastro[i].nome);
    //     printf("Digite idade: \n");
    //     scanf("%d", &cadastro[i].idade);
    //     ponteiroParaPessoa[i] = &cadastro[i];

    // }

    // for (int i = 0; i < 2; i++){
    //     printf("Nome: %s\n", ponteiroParaPessoa[i]->nome);
    //     printf("Idade: %d\n", ponteiroParaPessoa[i]->idade);
    
    // }

    float valores[] = {10, 20, 30, 40, 50};

    imprimeValores(valores);

return 0;
}
