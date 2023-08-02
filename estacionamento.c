#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

const int VAGAS = 10;

typedef struct{
    char modelo[30];
    char placa[10];
    int hora_in;
    int minuto_in;
} carro;

int menu(){
    int option;
    puts("\n---------- Sistema Estacionamento ----------"
       "\n[1] Cadastro Carro.\n"
         "[2] Saída do Veículo.\n"
         "[3] Consulta Carros Estacionados.\n"
         "[4] Sair do aplicatico.");
    scanf("%i", &option);
    return option;
}

void cadastro(carro *cad, int vagas, int *posicao){
    if (*posicao == vagas) {
        printf("Todas as vagas estão preenchidas.\n");
        return;
    }
    printf("\n---- Cadastro de Carro Vaga (%i) ----\n", *posicao + 1);
    printf("Digite o Modelo do Carro: ");
    scanf("%s", cad[*posicao].modelo);
    printf("\nDigite a Placa do Carro: ");
    scanf("%s", cad[*posicao].placa);
    printf("\nDigite a hora de entrada (HH:MM): ");
    scanf("%d:%d", &cad[*posicao].hora_in, &cad[*posicao].minuto_in);
    (*posicao)++;
    printf("\nVagas Restantes: %d\n", vagas-(*posicao));
}

void imprimir_cadastro(carro *cad, int posicao){
    if (posicao == 0){
        puts("----------------------------");
        puts("Não há carros cadastrados.");
        puts("----------------------------");
    }
    for (int i = 0; i < posicao; i++){
        printf("\n---- Veículos Estacionados ----\n");
        printf("Vaga (%i). Modelo: %s\n", i + 1, cad[i].modelo);
        printf("Vaga (%i). Placa: %s\n", i + 1, cad[i].placa);
        printf("Vaga (%i). Hora de entrada: %02d:%02d\n", i + 1, cad[i].hora_in, cad[i].minuto_in);
        puts("---------------------------------");
    }
    printf("Vagas disponíveis: %d\n", VAGAS-posicao);
}

void saida_veiculo(carro *cad, int *posicao){
    if (*posicao == 0) {
        printf("Nenhum veículo estacionado.\n");
        return;
    }

    char placa[10];
    int indice = -1;
    int hora_out, hora;
    int minuto_out;
    int permanencia;
    float total, minuto;

    printf("Digite a placa do veículo que está saindo: ");
    scanf("%s", placa);
    printf("Digite a hora da saída (HH:MM): ");
    scanf("%d:%d", &hora_out, &minuto_out);

    for (int i = 0; i < *posicao; i++) {
        if (strcmp(cad[i].placa, placa) == 0) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        printf("Veículo não encontrado.\n");
        return;
    }

    permanencia = (hora_out*60+minuto_out)-(cad[indice].hora_in * 60 + cad[indice].minuto_in);    
    hora = permanencia/60;
    minuto = permanencia % 60;
    float valor_hora = hora * 5;
    float valor_minuto = ceil((float)minuto/15.0)*2;
    total = valor_hora + valor_minuto;

    printf("\n---- Saída do Veículo ----\n");
    printf("Modelo: %s\n", cad[indice].modelo);
    printf("Placa: %s\n", cad[indice].placa);
    printf("Hora de entrada: %02d:%02d\n", cad[indice].hora_in, cad[indice].minuto_in);
    printf("Hora da Saída: %02d:%02d\n", hora_out, minuto_out);
    printf("Permanencia: %02d minutos\n", permanencia);
    printf("Total Pago: R$%.2f\n", total);
    puts("----------------------------");

    //Remover o veiculo do vetor
    for (int i = indice; i < *posicao - 1; i++) {
        cad[i] = cad[i + 1];
    }
    (*posicao)--;
    printf("Veiculo removido com sucesso.\n");
    puts("----------------------------");
}

int main(){
    int choice;
    carro cad[VAGAS];
    char opt[3];
    int posicao = 0;

    do {
        choice = menu();
        switch (choice) {
            case 1:
                puts("Cadastro de Veículo.\n");
                do {
                    cadastro(cad, VAGAS, &posicao);
                    puts("----------------------------");
                    printf("Deseja Cadastrar outro carro? (s/n)");
                    scanf("%s", opt);
                    puts("----------------------------");
                } while (strcmp(opt, "n") != 0);
                break;
            case 2:
                puts("Saída de Veículo.\n");
                saida_veiculo(cad, &posicao);
                break;
            case 3:
                puts("Consulta de Carros Estacionados.\n");
                imprimir_cadastro(cad, posicao);
                break;
        }
    } while (choice != 4);

    return 0;
}