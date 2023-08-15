#include<stdio.h>

int main(void){

    int table[11][11], i, j, sum;

    for (i = 0; i < 11; i++){
        for (j = 0; j < 11; j++){
            table[i][j] = i * j;
            printf("%d\t", table[i][j]);
        }
    printf(" \n");    
    }
    // for (i = 0; i < 11; i++){
    //     for (j = 1; j < 11; j++){
    //         printf("%d\t", table[i][j]);
    //     }
    // printf(" \n");
    // }
    for (j = 0; j < 11; j++){
        sum += table[10][j];
    }
    printf("%d", sum);

    return 0;
}