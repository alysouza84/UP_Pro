#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverse(char *str, int base, int cont){
    for(int i = base; i < cont; i++){
        printf("%c", str[i]);
        printf("teste");
    }
}

int main(){

    char a[50];
    int count = 0;
    int base = 0;

    fgets(a, 50, stdin);

    while (count < strlen(a)){
        
        for(int i = 0; i <  strlen(a); i++){
            if(isspace(a[i])){
                reverse(a, i, count);
                base = count +1;
                count++;
            }else{
                count++;
            }
        }

    }


    return 0;
}