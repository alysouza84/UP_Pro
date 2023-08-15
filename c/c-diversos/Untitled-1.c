#include<stdio.h>
#include<stdlib.h>

int lerpositivo(){
    int num;
    do{
        printf("Informe um numero positivo: ");
        scanf("%d", &num);
    } while (num < 0);

    return num;
}
void mostranumeros(int nA, int nB){
    for (int i = nA; i < nB; i++){
        printf("%d, ", i);
    }
    printf("\n");
}

int main(void){

    char opt;
    int nA, nB;
    do{
        nA = lerpositivo();
        nB = lerpositivo();

        mostranumeros(nA, nB);
    
        printf("Deseja continuar?[s/n]: ");
        scanf(" %c", &opt);
        puts("\n");
    } while (opt == 's');

    return 0;
}


// float pesoideal(float altura, char sexo){
//     float peso;
//     if(sexo == 'm'){
//         peso = (72.7 * altura) - 58;
//     }
//     else if (sexo == 'f'){
//         peso = (62.1 * altura) - 44.7;
//     }
// return peso;
// }

// int main(void){

//     float altura, p_pessoa, p_ideal;
//     char sexo;

//     printf("Qual seu sexo (m/f)? ");
//     scanf("%c", &sexo);
//     printf("Qual sua altura? ");
//     scanf("%f", &altura);
//     printf("Qual seu peso atual? ");
//     scanf("%f", &p_pessoa);

//     p_ideal = pesoideal(altura, sexo);

//     if (p_pessoa < p_ideal){
//         printf("Seu peso ideal é %.2f e você está abaixo deste peso.\n", p_ideal);
//     }
//     else if (p_pessoa > p_ideal){
//         printf("Seu peso ideal é %.2f e você está acima deste peso.\n", p_ideal);
//     }

//     return 0;
// }