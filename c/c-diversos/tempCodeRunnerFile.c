
#include<stdio.h>
#include<stdlib.h>


int main(){

int matrixA[3][3] = {{1, 2, 3},
                    {1, 2, 3},
                    {1, 2, 3}}; 
int matrixB[3][3] = {{1, 2, 3},
                     {1, 2, 3},
                     {1, 2, 3}};
int matrixC[3][3];

    //imprimir matrixA
    puts("MatrizA.");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", matrixA[i][j]);
        }
    puts("\n");    
    }
    
    //puts("\n");

    //imprimir matrixB
    puts("MatrizB.");
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%d\t", matrixB[i][j]);
            }
        puts("\n");    
    }
    //Soma matrixA com matrixB
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
puts("\n");
    puts("MatrizC.");
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%d\t", matrixC[i][j]);
            }
        puts("\n");    
    }

   return 0;

}