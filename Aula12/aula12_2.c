#include<stdio.h>

main(){
    int i,j,vet[3][3]={{0,0,0},{0,0,0},{0,0,0}};

    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf(" %d", vet[i][j]);
            }
            putchar('\n');
    }

    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                vet[i][j]=i+j;
            }
    }

    putchar('\n');
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf(" %d", vet[i][j]);
            }
            putchar('\n');
    }
}
