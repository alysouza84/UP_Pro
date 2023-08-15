#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void getName(char names[][20]){
    for (int i = 0; i < 5; i++){
        printf("Digite o nome %d: ", i+1);
        scanf("%s", names[i]);
    }
}
void printName(char names[][20]){
    for(int i = 0; i < 5; i++){
        printf(" %s\n", names[i]);
    }

}
void changeLetters(char names[][20]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < strlen(names[i]); j++){
            if(names[i][j] == 'A' || names[i][j] == 'a'){
                names[i][j] = '@';
            }
        }
    }
}

void main(){
    char names[5][20];
     
    getName(names);
    changeLetters(names);
    printName(names); 

}

//Crie uma matriz de 11 linhas e 11 colunas que contenha a tabuada dos números de 0 a 10.

// void makeTable (int table[][11]){
//     for (int i = 0; i < 11; i++){
//         for (int j = 0; j < 11; j++){
//             table[i][j] = i * j;
//         }   
//     }
// }

// void printTable (int table[][11]){
//     for (int i = 1; i < 11; i++){
//         for (int j = 0; j < 11; j++){
//             printf("%d\t", table[i][j]);
//         }
//     printf("\t\n");
//     }
// }

//  int main(void){

//     int table[11][11];
    
//     makeTable(table);
//     printTable(table);
    

// return 0;
// }
