#include <stdio.h>
main(){
    char letra = 'd';
    float n;
    printf("DIGITE UM NUMERO ");
    scanf("%f",&n);
    //fflush(stdin);
    //__fpurge(stdin);
    printf("DIGITE UMA LETRA ");
    scanf("%c",&letra);
    printf("A LETRA DIGITADA FOI %c",letra);
}
