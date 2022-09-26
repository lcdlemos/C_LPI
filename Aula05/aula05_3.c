#include <stdio.h>
main(){
    char est_c;
    printf("DIGITE O ESTADO CIVIL ");
    est_c = getchar();
    switch(est_c){
        case 'C':
        case 'c':
            printf("CASADO\n");
            break;
        case 'S':
        case 's':
            printf("SOLTEIRO\n");
            break;
        case 'V':
        case 'v':
            printf("VIUVO\n");
            break;
        case 'D':
        case 'd':
            printf("DIVORCIADO\n");
            break;
        default:
            printf("NENHUMA OPCAO\n");
    }
}
