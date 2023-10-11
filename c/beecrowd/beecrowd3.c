#include<stdio.h>

int calcMDC(int a, int b){
    int temp, y;
    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }
    while(b != 0){
        y = a % b;
        a = b;
        b = y;
    }
    return a;
}

int main(void){

    int num, f1, f2, mdc, resultado;

    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        scanf("%d %d", &f1, &f2);
        resultado = calcMDC(f1, f2);
        printf("%d\n", resultado);
    }

    return 0;
}