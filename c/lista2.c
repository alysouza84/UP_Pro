#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Lista 02 de exercícios:

//Exercício 01;

// int main(){

// 	double numero_a, numero_b, numero_c;
// 	printf("Digite um valor para A: \n");
// 	scanf("%lf", &numero_a);
// 	printf("Digite um valor para B: \n");
// 	scanf("%lf", &numero_b);

// 	numero_c = (numero_a+numero_b)*numero_b;

// 	printf("O resultado da operação c = (a+b)*c é igual a %.2lf\n", numero_c);
	
// 	return 0;
// }

// Exercício 02;

// int main(){

//     double volume, raio, altura;
// 	const double pi = 3.141592;
// 	printf("Para saber o volume de uma lata, insira o raio do objeto: ");
// 	scanf("%lf", &raio);
// 	printf("Agora insira a altura: ");
// 	scanf("%lf", &altura);

// 	volume = (pow(raio, 2)) * pi * altura;

// 	printf("O volume da late é de %.2lf l\n", volume);

// 	return 0;
// }

//Exercício 03;

// int main(){

// 	double sal_atual, aumento, sal_novo, salario;
// 	printf("Digite o salario atual do colaborador: ");
// 	scanf("%lf", &sal_atual);
// 	printf("Insira a porcentagem de aumento do salario: ");
// 	scanf("%lf", &aumento);

// 	sal_novo = sal_atual*(aumento/100);
// 	salario = sal_novo + sal_atual;

// 	printf("O aumento será de R$%.2lf\n", sal_novo);
// 	printf("O valor do novo salário será de R$%.2lf\n", salario);

// 	return 0;
// }

//Exercício 04;

// int main(void){

// 	double saldo_dev, multa, saldo_multa;
// 	int dias;

// 	printf("Digite o saldo devedor do cliente: ");
// 	scanf("%lf", &saldo_dev);
// 	printf("Digite a quantidade de dias em atraso: ");
// 	scanf("%d", &dias);
// 	printf("Qual a porcentagem de multa a ser aplicada por dia de atraso: ");
// 	scanf("%lf", &multa);


// 	printf("O valor devido após %d dias de atraso é de R$%.2lf\n", dias, saldo_multa);

// 	return 0;
// }

//Exercício 05;

// int main(void){

// 	double comprimento, largura, area, iluminacao;
// 	const double pot = 18;
// 	printf("Para saber a potencia correta de iluminação de um ambiente, digite o compromento: \n");
// 	scanf("%lf", &comprimento);
// 	printf("Agora digite a largura para sabermos a area total: \n");
// 	scanf("%lf", &largura);

// 	area = comprimento * largura;

// 	iluminacao = area * pot;

// 	printf("Para uma área de %.2lf metros quadrados, será necessário %.2lfW de potencia de iluminação.\n", area, iluminacao);

// 	return 0;
// }

//Exercício 06;

// int main(void){

// 	const float taxa = 0.1;
// 	float conta, valor_conta, valor_taxa;
// 	printf("Digite o valor total da sua conta no estabelecimento: ");
// 	scanf("%f", &conta);
// 	valor_taxa = conta*taxa;
// 	valor_conta = conta + valor_taxa;

// 	printf("O valor da taxa de serviço é de R$%.2f, sendo o valor total da conta de R$%.2f\n", valor_taxa, valor_conta);

// 	return 0;
// }

//Exercício 07;

// int main(void){

// 	float valor_original, desconto, valor_final;

// 	printf("Digite o valor original do produto: R$");
// 	scanf("%f", &valor_original);
// 	printf("Digite o valor do desconto: R$");
// 	scanf("%f", &desconto);
// 	valor_final = valor_original-desconto;
// 	printf("O valor do produto na promoção é de R$%.2f\n", valor_final);
	
// 	return 0;
// }

//Exercício 08;

// int main(void){

// 	float valor_divida, taxa, valor_futuro, periodo, valor_juro;

// 	printf("Para se organizar para o próximo mês, digite o valor da sua dívida atual: R$");
// 	scanf("%f", &valor_divida);
// 	printf("Digite o juro mensal em porcentagem: ");
// 	scanf("%f", &taxa);
//  periodo = 1;
// 	valor_futuro = pow(taxa/100+1, periodo) * valor_divida; //juros compostos m=c*(1+i)ˆn
// 	valor_juro = pow(taxa/100+1, periodo)*valor_divida-valor_divida;
// 	printf("Valor da dívida: R$%.2f, o valor a ser pago no final do mês é de R$%.2f\n", valor_divida, valor_futuro);

// 	return 0;
// }

//Exercício 09;

// int main(){

// 	float valor_aula, numero_aulas, inss, inss_total, salario;
  	
// 	printf ("Qual valor da sua hora/aula: R$");
//  scanf ("%f", &valor_aula);
//  printf ("Quantas horas de aula foram dadas: ");
//  scanf ("%f", &numero_aulas);
//  printf ("Qual desconto do INSS em porcentagem: ");
//  scanf ("%f", &inss); 
// 	salario = (valor_aula*numero_aulas)-(inss/100*(valor_aula*numero_aulas));

//  printf ("O valor do salario com desconto do INSS é de: R$%.2f", salario);
 
// return 0;
// }

//Exercício 10;

int main(){

	float sal_min, valor_kw, consumo_kw, total;

	printf("Insira o valor do salário mínimo: R$");
	scanf("%f", &sal_min);
	printf("Insira a quantidade de KW gastos no mês: ");
	scanf("%f", &consumo_kw);

	valor_kw = (sal_min/7)/100;
	total = consumo_kw*valor_kw;

	printf("O valor do Kilowatt é R$%.2f, a partir desse valor,sua total de: %.2f\n", valor_kw, total);

	return 0;
}