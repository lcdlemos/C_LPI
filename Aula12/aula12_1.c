#include<stdio.h>
void vetor(int s[3]){
    int i;
    for(i=0; i<3; i++){
        s[i]=i+s[i];
    }
}

main(){
    int i,vet[3]={1,3,5};
    for(i=0;i<3;i++){
        printf(" %d", vet[i]);
    }
    putchar('\n');
    vetor(vet);
    for(i=0;i<3;i++){
        printf(" %d",vet[i]);
    }
}
