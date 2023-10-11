#include<stdio.h>

int main (){
    int a[10];
    int *p;

    p = a;

    for (int i = 0; i < 10; i++){
        printf("Digite numero [%d]: ", i+1);
        scanf("%d", p++);    
    }     
    
    for (p = &a[9]; p > a-1; p--){
        printf("%d \n", *p);
    }

return 0;
}
