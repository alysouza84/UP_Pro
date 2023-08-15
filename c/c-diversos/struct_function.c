#include <stdio.h>

typedef struct {
  char placa[9];
  char modelo[30];
  int ano;
  float motor;
} veiculo;

void cadastra(veiculo *v) {
  printf("\n--- Veiculo em cadastro ---\n");
  printf("Digite a placa: ");
  scanf("%s", (*v).placa);
  printf("Digite o modelo: ");
  scanf("%s", (*v).modelo);
  printf("Digite o ano: ");
  scanf("%i", &(*v).ano);
  printf("Digite o motor: ");
  scanf("%f", &(*v).motor);
}

void edita(veiculo *v) {
  for (int i = 0; i < 3; i++) {
    printf("\n--- Veiculo %i em edicao ---\n", i);
    printf("Digite a placa: ");
    scanf("%s", v[i].placa);
    printf("Digite o modelo: ");
    scanf("%s", v[i].modelo);
    printf("Digite o ano: ");
    scanf("%i", &v[i].ano);
    printf("Digite o motor: ");
    scanf("%f", &v[i].motor);
  }
}

void imprimeRegistro(veiculo v) {
  printf("\n--- Veiculo cadastrado ---\n");
  printf("Placa: %s\n", v.placa);
  printf("Modelo: %s\n", v.modelo);
  printf("Ano: %i\n", v.ano);
  printf("Motor: %.1f\n", v.motor);
}

void imprimeTodos(veiculo *v) {
  for (int i = 0; i < 3; i++) {
    printf("\n--- Veiculo cadastrado ---\n");
    printf("Placa: %s\n", (*v).placa);
    printf("Modelo: %s\n", (*v).modelo);
    printf("Ano: %i\n", (*v).ano);
    printf("Motor: %.1f\n", (*v).motor);
  }
}

void alteraMotor(float *motor) {
  printf("\nNovo motor: ");
  scanf("%f", &(*motor));
}

int main(void) {

  veiculo veic[3];

  for (int i = 0; i < 3; i++) {

    // passa um único elemento do vetor por referência
    // para que ele seja alterado na função
    cadastra(&veic[i]);

    // passa um único elemento do vetor por valor
    // porque ele não será alterado na função
    imprimeRegistro(veic[i]);
  }

  // altera o motor do veiculo 0 do vetor
  alteraMotor(&veic[0].motor);

  // passa o vetor inteiro, dando permissão de leitura e edicao
  edita(veic);
  
  // passa o vetor inteiro, dando permissão de leitura e edicao
  imprimeTodos(veic);
  
  return 0;
}