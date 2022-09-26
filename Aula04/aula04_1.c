#include <stdio.h>
main(){
    int n1,n2,aux;
    printf("DIGITE UM NUMERO ");
    scanf("%d",&n1);
    printf("DIGITE UM NUMERO ");
    scanf("%d",&n2);
    if(n1>n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    printf("EM ORDEM %d, %d ",n1, n2);

}
