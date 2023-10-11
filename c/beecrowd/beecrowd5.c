#include<stdio.h>

int aLenda(int a, int b){
    if(a == 1){
        return 0;
    }
    else{
        int x = aLenda(a-1, b);
        return (x + b) % a;
    }
}

int main(void){

    int NC, homens, saltos, resultado;

    scanf("%d", &NC);
        
        for(int i = 0; i < NC; i++){
            scanf("%d %d", &homens, &saltos);
            resultado = aLenda(homens, saltos)+1;
            printf("Case %d: %d\n", i+1, resultado);
        }

return 0;
}