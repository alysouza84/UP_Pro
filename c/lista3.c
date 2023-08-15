#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<unistd.h>

//Exercício 01;

// int main(void){

//     double a, b, result;
//     printf("Digite um operando A: ");
//     scanf("%lf", &a);
//     printf("Digite um operando B: ");
//     scanf("%lf", &b);

//     result = a * b;

//     if (result<0)
//     {
//         printf("O resultado tem SINAL NEGATIVO\n");
//     }
//     else if (result>0)
//     {
//         printf("O resultado tem SINAL POSITIVO\n");
//     }
//     else
//     {
//         printf("O número é NULO\n");
//     }
    
//     return 0;
// }

//Exercício 02;

//int main(void){

//     int a, b, result;
//     printf("Entre com o primeiro número A: ");
//     scanf("%d", &a);
//     printf("Entre com o segundo número B: ");
//     scanf("%d", &b);

//     result = a%b;

//     if (result==0)
//     {
//         printf("Os números são multiplos entre si.");
//     }
//     else if (result!=0)
//     {
//         printf("Os números não são múltiplos entre si.");
//     }
    
//     //printf("%d", result);

//     return 0;
// }

//Exercício 03;

// int main(void){

//     int a, b, c, temp;

//     printf("Digite três números em ordem aleatória, para serem impressos em order crescente: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a>b)
//     {
//         temp = a;
//         a = b;
//         b = temp;
//     }
//     if (a > c) {
//         temp = a;
//         a = c;
//         c = temp;
//     }
//     if (b > c) {
//         temp = b;
//         b = c;
//         c = temp;
//     }
//     printf("Os números em ordem ascendente são: %d %d %d\n", a, b, c);
    
//     return 0;
// }

//Exercício 04;

// int main(){

//     int score, distance;

//     printf("O ponto marcado foi a qual distância da cesta (0 a 2000 mm)? ");
//     scanf("%d", &distance);
//     if (distance <= 800 %% distance >= 0)
//     {
//         printf("Esta cesta valeu 1 ponto.\n");
//     }
//     else if (distance > 800 && distance <= 1400)
//     {
//         printf("Esta cesta valeu 2 pontos.\n");
//     }
//     else if (distance > 1400 && distance <= 2000)
//     {
//         printf("Esta cesta valeu 3 pontos. \n");
//     }

//     return 0;
// }

// Exercício 5;

// int main(void){

//     int numero;
//     printf("Digite um número entre 0 e 100 para saber em qual intervalo se encontra: ");
//     scanf("%d", &numero);

//     if (numero >= 0 && numero <= 25)
//     {
//         printf("O número digitado encontra-se entre 0 e 25.\n");
//     }
//     else if (numero > 25 && numero <= 50 )
//     {
//         printf("O número digitado encontra-se entre 25 e 50.\n");
//     }
//     else if (numero > 50 && numero <= 75)
//     {
//         printf("O número digitado encontra-se entre 50 e 75.\n");
//     }
//     else if (numero > 75 && numero <= 100)
//     {
//         printf("O número digitado encontra-se entre 75 e 100.\n");
//     }

//     return 0;
// }

//Exercício 06;

// int main(void){

//     int codigo, quantidade;
//     float price, total;

//     printf("...Bem Vindo a Humburgueria...\n");
//     printf("Digite uma opção do cardápio:\n 1. Cachorro Quente R$12.00.\n 2. X-Salada R$15.50.\n 3. X-Bacon R$18.00.\n 4. Torrada simples R$8.00.\n 5. Refrigerante R$4.50.\n ");
//     scanf("%d", &codigo);
//     printf("Quantas unidades desse produto você deseja: ");
//     scanf("%d", &quantidade);
//     if (codigo == 1)
//     {
//         total = quantidade*12;
//         printf("Você pediu %d unidades de Cachorro quente. Total do pedido R$%.2f\n", quantidade, total);
//     }
//     else if (codigo == 2)
//     {
//         total = quantidade*15.5;
//         printf("Você pediu %d unidades de X-Salada. Total do pedido R$%.2f\n", quantidade, total);
//     }
//     else if (codigo == 3)
//     {
//         total = quantidade*18;
//         printf("Você pediu %d unidades de X-Bacon. Total do pedido R$%.2f\n", quantidade, total);
//     }
//     else if (codigo == 4)
//         total = quantidade*8;
//         printf("Você pediu %d unidades de Torrada Simples. Total do pedido R$%.2f\n", quantidade, total);
//     }
//     else if (codigo == 5)
//     {
//         total = quantidade*4.5;
//         printf("Você pediu %d unidades de Refrigerante. Total do pedido R$%.2f\n", quantidade, total);
//     }
//     else
//     {
//         printf("Código ou quantidade invalidos");
//     }
    
//     return 0;
// }

//Exercício 07;

// int main(void){

//     float nota1, nota2, nota3, nota4, media, nota_exame, media_final;
//     printf("Digite a primeira nota: ");
//     scanf("%f", &nota1);
//     printf("Digite a segunda nota: ");
//     scanf("%f", &nota2);
//     printf("Digite a terceira nota: ");
//     scanf("%f", &nota3);
//     printf("Digite a quarta nota: ");
//     scanf("%f", &nota4);

//     media = ((nota1*2) + (nota2*3) + (nota3*4) + (nota4*1)) / 10;
    
//     if (media >= 7.0)
//     {
//         printf("Aluno com média %.2f APROVADO\n", media);
//     }
//     else if (media >= 5.0 && media < 7.0)
//     {
//         printf("Aluno com média %.2f ALUNO EM EXAME\n", media);
//         printf("Digite a nota do Exame: ");
//         scanf("%f", &nota_exame);
//         media_final = nota_exame + media / 2;
//         if (media_final >= 5.0)
//         {
//             printf("Aluno com média final %.2f APROVADO\n", media_final);
//         }
//         else if (media_final<=4.9)
//         {
//             printf("Aluno reprovado com média final %.2f\n", media_final);
//         }        
//     }
//     else if (media < 5.0)
//     {
//         printf("Média do aluno %.2f REPROVADO\n", media);
//     }
//     return 0;
// }

//Exercício 08;

// int main(void){

//     int codigo;
    
//     printf("Digite um código DDD para saber de qual cidade é: ");
//     scanf("%d", &codigo);
//     switch (codigo)
//     {
//     case 61:
//         printf("Código de Brasília.\n");break;
//     case 71:
//         printf("Código de Salvador.\n"); break;
//     case 11:
//         printf("Código de São Paulo.\n"); break;
//     case 21:
//         printf("Código de Rio de Janeiro.\n"); break;
//     case 32:
//         printf("Código de Juiz de Fora.\n"); break;
//     case 19:
//         printf("Código de Campinas.\n"); break;
//     case 27:
//         printf("Código de Vitória.\n"); break;
//     case 31:
//         printf("Código de Belo Horizonte.\n"); break;
//     case 42:
//         printf("Código de Ponta Grossa.\n"); break;
//     default:
//         printf("Código Invalido.\n")
//         break;
//     }
//     return 0;
// }

// Exercício 09;

// int main(void){

//     int nota;
//     printf("Digite a nota do aluno: ");
//     scanf("%d", &nota);
//     if (nota == 0)
//     {
//         printf("A nota do aluno foi %d e o conceito é igual a E.\n", nota);
//     }
//     else if (nota >= 1 && nota <= 35)
//     {
//     printf("A nota do aluno foi %d e o conceito é igual a D.\n", nota);
//     } 
//     else if (nota >= 36 && nota <= 60)
//     {
//     printf("A nota do aluno foi %d e o conceito é igual a C.\n", nota);
//     }
//     else if (nota >= 61 && nota <= 85)
//     {
//     printf("A nota do aluno foi %d e o conceito é igual a B.\n", nota);
//     }
//      else if (nota >= 86 && nota <= 100)
//     {
//     printf("A nota do aluno foi %d e o conceito é igual a D.\n", nota);
//     }
//     return 0;
// }

// Exercício 10;

int main(void){

    int a, b, n;
    printf("Quanto tempo falta para terminar o turno em minutos: ");
    scanf("%d", &n);
    printf("Digita quanto tempo é necessário para o brinqueda A: ");
    scanf("%d", &a);
    printf("Digite quanto tempo é necessario para o brinquedo B: ");
    scanf("%d", &b);

    if (n >= a + b)
    {
        printf("FAREI HOJE!.\n");
    }
    else if (n <= a + b)
    {
        printf("Farei amanhã...\n");
    } 
    return 0;
}