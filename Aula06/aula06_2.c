#include <stdio.h>
main(){
    int num, n=0;

    printf("\n\t\t\tA TABUADINHA DO NUMERO N\n\n\n\n");

    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("\nA tabuada do numero %d sera:\n\n", num);

    while(n<=10){
        printf("%2d x %2d = %2d\n", num, n, num*n);
        n++;
    }
}
