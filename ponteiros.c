#include <stdio.h>

void reverse(char *str){
    if (*str){
        reverse(str + 1);
        printf("%c", *str);
    }
}

int main (){
    char a[50];
    printf("Digite uma palavra ou frase: ");
    fgets(a, sizeof(a), stdin);
    reverse(a);
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