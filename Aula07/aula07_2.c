#include <stdio.h>
main(){
    int n,i,s=0,p=1;
    printf("\n\t\t\tSoma e Produto de N Numeros Naturais\n\n\n");
    printf("Informe a quantidade de numeros naturais: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        s+=i;
        p*=i;
    }
    printf("\nSoma = %d\nProduto = %d\n", s, p);
}
