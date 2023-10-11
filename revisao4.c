#include <stdio.h>
#include <stdlib.h>

int binario(int decimal,int *output,int i){
	if(decimal < 1)
		return 0;
	else{
		output[i] = decimal%2;
		output[i-1] = binario(decimal/2,output,i-1);
	}
	return decimal%2;
}

int main(){
	int num;
	int *result = (int *)malloc(8*4);

    if(result != NULL){
        printf("Memoria liberada para uso.\n");
    }
    else{
        printf("Erro de alocação.\n");
        return 0;
    }

	scanf("%d",&num);

	binario(num,result,7);

	for(int i = 0;i < 8;i++)
		printf("%d",result[i]);
    
    free(result);
    puts("\n");

    for(int i = 0;i < 8;i++)
		printf("%d",result[i]);

    puts("\n");

    
return 0;
}