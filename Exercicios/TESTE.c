#include <stdio.h>

main(){
    int lin, col;

    printf("linha:  ");
    scanf("%d", &lin);
    printf("coluna: ");
    scanf("%d", &col);

    vetor(lin, col);
}

void vetor(int linha, int coluna){
    int i, j, vet[linha][coluna];

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf(" a%d%d = ", i+1,j+1);
            scanf("%d", &vet[i][j]);
        }
    }
    imprime_matriz(linha, coluna, vet);
}

void imprime_matriz(int m, int n, int matriz[m][n]){
    int i, j;

    printf("\n\nM =\n\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
}
