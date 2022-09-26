#include <stdio.h>
main(){
    float num;
    printf("DIGITE UM NUMERO ");
    scanf("%f",&num);
    printf("PARTE INTEIRA %d\n", (int)num);
    printf("A PARTE FRACIONARIA %.2f",num - (int)num);
}
