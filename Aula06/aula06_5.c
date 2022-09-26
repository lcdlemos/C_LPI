#include <stdio.h>
main(){
    int num, i=1, n=0;

    printf("\n\t\t\tA TABUADINHA DO NUMERO N\n\n\n\n");

    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("\n");

    while(i<=num){
        while(n<=10){
            printf("%2d x %2d = %2d\n", i, n, i*n);
            n++;
        }
        i++;
        n=0;
        printf("\n");
    }
}
