#include <stdio.h>
main(){
    float salario;
    printf("DIGITE UM NUMERO ");
    scanf("%f",&salario);
    salario = salario>1000? salario*1.05: salario*1.07;
    printf("O NOVO SALARIO >> %.2f",salario);
}
