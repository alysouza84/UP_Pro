// Exercício 01
// #include <stdio.h>

// int main(){
//     int numero;
//     printf("Digite um numero inteiro para ser calculado: ");
//     scanf("%d", &numero);
//     printf("O número vai ser igual a: %d\n", numero*numero);

//     return 0;
// }

//Exercício 02
#include <stdio.h>

int main(){

    double fah, celcius;
    printf("Digite uma temperatura em Celcius para converter em Fahrenheit: ");
    scanf("%lf", &celcius);
    fah = (celcius*9/5)+32;
    printf("A temperatura %.2lf Celcius é igual a %.2lf em Fahreinheit\n", celcius, fah);

    return 0;
}

//Ecercício 03
// #include<stdio.h>

// int main(){

//     double salario_minimo, salario_usuario, media;
//     printf("Digite o valor do salario minimo atual: ");
//     scanf("%lf", &salario_minimo);
//     printf("Digite o valor do seu salario: ");
//     scanf("%lf", &salario_usuario);
//     media = salario_usuario / salario_minimo;
//     printf("O seu salario R$%.2lf é equivalente a %.2lf vezes o salario mínimo", salario_usuario, media);

//     return 0;
// }

//Exercício 04
// #include<stdio.h>

// int main(){

//     double real, dolar, conversao;

//     printf("Digite a quantidade em Dólar a ser convertida em Real: USD");
//     scanf("%lf", &dolar);
//     printf("Digite o valor em Real da cotação: R$ ");
//     scanf("%lf", &real);
//     conversao = dolar*real;
//     printf("O Valor USD%.2lf convertido em Real é de R$%.2lf \n", dolar, conversao);


//     return 0;
// }

//Exercício 05
// #include<stdio.h>

// int main(){

//     double real, dolar, conversao;

//     printf("Digite a quantidade em Real a ser convertida em Dolar: R$");
//     scanf("%lf", &real);
//     printf("Digite o valor em Real da cotação: R$");
//     scanf("%lf", &dolar);
//     conversao = real/dolar;
//     printf("O Valor R$%.2lf convertido em Dolar é de USD$%.2lf \n", real, conversao);


//     return 0;
// }

//Exercício 06
// #include<stdio.h>

// int main(){

//     int a, b, c, d;
//     printf("Digite três numeros inteiros, separados por um espaço: ");
//     scanf("%d %d %d", &a, &b, &c);
//     d = (a*a)+(b*b)+(c*c);
//     printf("O valor da soma do quadrado dos números é %d\n", d);

//     return 0;
// }

// // Exercício 07;
// #include<stdio.h>

// int main(){

//     int a, b, c, d, e;
//     printf("Digite três numeros inteiros, separados por um espaço: ");
//     scanf("%d %d %d", &a, &b, &c);
//     d = (a+b+c)*(a+b+c)
//     printf("O valor do quadrado da soma dos números é %d\n", d);

//     return 0;
// }

//Exercicio 08;
// #include<stdio.h>

// int main(){

//     int a, b, c;
//     printf("Escreva numero A: ");
//     scanf("%d", &a);
//     printf("Escreva numero B: ");
//     scanf("%d", &b);
//     c = a;
//     a = b;
//     b = c;
//     printf("A = %d e B = %d\n", a, b);
    
//     return 0;
// }