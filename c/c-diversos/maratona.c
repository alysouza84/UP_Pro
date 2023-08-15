#include <stdio.h>
#include <string.h>

int main() {
 
    int T; // testes
    int At = 0, Ad = 0, Bt = 0, Bd = 0;
    int H; // vida monstro
    
    scanf("%d",&T);
    int ganhos[T];
    char vet[T][10];

    for(int i = 0;i < T;i++){
        for(int j = 0;j<T;j++){
            strcpy(vet[T],"");
        }
        scanf("%d %d %d %d",&At, &Ad, &Bt, &Bd);
        scanf("%d", &H);
        int Adt = Ad, Bdt = Bd;
        while(H>0){
            if(Ad <= Bd){
                H-=At;
                Ad+=Adt;
                if(H>0){
                    H-=Bt;
                    //Bd+=Bdt;
                    if(H<=0){
                        strcpy(vet[i],"Beto");
                        break;
                    }
                }
                else{
                    strcpy(vet[i],"Andre");
                    break;
                }
            }
            else{
                H-=Bt;
                Bd+=Bdt;
                if(H>0){
                    H-=At;
                    //Ad+=Adt;
                    if(H<=0){
                        strcpy(vet[i],"Andre");
                        break;
                    }
                }
                else{
                    strcpy(vet[i],"Beto");
                    break;
                }
            }
            Bd+=Bdt;
        }
    }

    for(int i = 0;i<T;i++){
        printf("%s\n", vet[i]);
    }
 
    return 0;
}