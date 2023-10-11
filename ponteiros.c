#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverse(char *str, char *result){
    if (*str){
    reverse(str + 1);      
    }
    for (int i = 0; i < strlen(*str); i++){
        result[i] = str[i];
    }
}

int main (){
    char a[50];
    char result[50];
    printf("Digite uma palavra ou frase: ");
    //scanf("%[^s\n]*c", a);
    fgets(a, sizeof(a), stdin);
    // reverse(a);
    // puts("\n");

   for(int i = 0; i < strlen(a); i++){
        printf("%c", *result);
   }

    // for (int i = strlen(a); i >= 0; i--){
    //     printf("%c", a[i]);
    // }

return 0;
}

/*perguntas: 
Declarar o Ponteiro como NULL? 
Usar o %X no printf para exibir o endereço do ponteiro?

*/

// void trocaValor(int *pointer1, int *pointer2){
//     int temp;
//     temp = *pointer1;
//     *pointer1 = *pointer2;
//     *pointer2 = temp;
// }

// int main(){
//     int num1 = 5, num2 = 10;

//     printf("Antes da troca: Num1 = %d | Num2 = %d\n", num1, num2);

//     trocaValor(&num1, &num2);

//     printf("Antes da troca: Num1 = %d | Num2 = %d\n", num1, num2);

// return 0;
// }

// int main(){
    
//     int var[] = {10, 20, 30, 40, 50};
//     int *ptr = NULL;
    
//     ptr = var;

//     for(int i = 0; i < 5; i++){
//         printf("Endereco of VAR %d  = %p\n", i, (void *)ptr);
//         printf("Valor of the VAR[%d] = %d\n", i, *ptr);
//         ptr++;
//         }
//     //puts("\n");
//     return 0;
//  }
//////////////////////////////