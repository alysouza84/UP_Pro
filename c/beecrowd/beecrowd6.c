#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

    int board[8][8];
    int x1, x2, y1, y2, dist;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if (abs(x2-x1) == abs(y2-y1)){ //verifica se os dois pontos estão na mesma diagonal.
        dist = abs(x2-x1)-1;
    }
    else if (x1 != x2){ //varifica as posições que não estão na mesma diagonal
        dist = sqrt(pow(x2 - x1, 2)) + pow(y2-y1,2)-3;        
    }
    
    
    
    printf("%d\n", dist);
    

    return 0;
}