#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    char nome[5][20] = {"Alysson", "Carlos", "Camila", "Silva", "Rogeria"};
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < strlen(nome[i]); j++) {
            if (nome[i][j] == 'A' || nome[i][j] == 'a') {
                nome[i][j] = '*';
            }
        }
    }
    for (i = 4; i >= 0; i--){
        printf(" %s\n", nome[i]);
    }
    return 0;
}