#include <stdio.h>
main(){
    int n,i,d,c=0;
    printf("\n\t\t------------------------------------");
    printf("\n\t\tCalculo de Raiz Inteira de Um Numero");
    printf("\n\t\t------------------------------------\n\n\n");
    printf("Informe ao o numero da ser calculado a raiz: ");
    scanf("%d", &n);
    for(i=1, d=n; i<=d ;i+=2){
        d=d-i;
        c++;
    }
    printf("\nRaiz inteira de %d = %d\n", n, c);
}
