#include <stdio.h>
main(){
    float n,i=0,s=0;

    printf("Informe um numero: ");
    scanf("%f", &n);

    while(n!=0){
            s=s+n;
            printf("Informe um numero: ");
            scanf("%f", &n);
            i++;
    }
    printf("\n\n Resultados:\n\n Numeros digitados: %.0f\n Soma dos numeros: %.0f\n Media aritmetica: %.2f\n\n", i, s, s/i);
}
