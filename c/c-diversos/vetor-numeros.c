#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, n;
    int v[n];

    printf("Digite quantos numeros tera o vetor: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Insira um valor: \n");
        scanf("%d", &v[i]);
    }
    printf("Numeros inseridos: \n");
    for (i = 0; i < n; i++){
        if (v[i] >= 20)
        {
            v[i] = 666;
        }
        
        printf("%d, ", v[i]);
    }
    

    return 0;
}