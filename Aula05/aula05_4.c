#include <stdio.h>
main(){
    char sexo;
    printf("DIGITE M PARA MASCULINO OU F PARA FEMININO ");
    scanf("%c",&sexo);
    switch(sexo){
        case 'M':
        case 'm':
            printf("\nMASCULINO\n");
            break;
        case 'F':
        case 'f':
            printf("\nFEMININO\n");
            break;
        default:
            printf("OPCAO INVALIDA");
    }
}
