#include<stdio.h>
#define TAM 3

void quick(int vet[], int esq, int dir){
    int pivo = esq,i,ch,j;
    for(i=esq+1;i<=dir;i++){
        j = i;
        if(vet[j] < vet[pivo]){
         ch = vet[j];
         while(j > pivo){
            vet[j] = vet[j-1];
            j--;
         }
         vet[j] = ch;
         pivo++;
        }
    }
    if(pivo-1 > esq){
        quick(vet,esq,pivo-1);
    }
    if(pivo+1 < dir){
        quick(vet,dir,pivo+1);
    }
 }

int main(){
    int vet[TAM],i;

    for(i=0;i<TAM;i++)
        scanf("%d",&vet[i]);

    quick(vet,0,TAM-1);

    for(i=0;i<TAM;i++)
        printf("%d ",vet[i]);
    printf("\n");
    return 0;
}
