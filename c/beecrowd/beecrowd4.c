#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main(void){

    int n;
    char text[200];
    int count[256] = {0};

    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++){
        fgets(text, 200, stdin);
        for (int j = 0; j < strlen(text); j++){
            char caracter = text[j];
            count[(int)caracter]++;
        }
        for (int i = 0; i < 256; i++){
            if(isalpha((char)i) && count[i] > 1){
                printf("%c", (char)i);
            }
        }
    text[0] = '\0';
    printf("\n");
    }
    

    return 0;
}