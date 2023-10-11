#include<stdio.h>
#include<stdlib.h>

#define N 3

int main(){

    int **p, i, j, n;

    p = (int **) malloc(N * sizeof(int));

    for (i = 0; i < N; i++){
        p[i] = (int *) malloc (N * sizeof(int));
        for(j = 0; j < N; j++){
            scanf("%d", &p[i][j]);
        }
    }
    for (i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d| %d|", &p[i][j], p[i][j]);
        }
    printf("\n");
    }

    for(i = 0; i < N; i++){
        free(p[i]);
    }
    free(p);

    return 0;
}