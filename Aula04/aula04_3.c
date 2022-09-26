#include <stdio.h>
main(){
    int x,y;
    printf("DIGITE O PONTO X >> ");
    scanf("%d",&x);
    printf("DIGITE O PONTO Y >> ");
    scanf("%d",&y);

    if(x==0 && y==0){
        printf("PONTO NA ORIGEM");
    }
}
