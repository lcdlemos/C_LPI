#include <stdio.h>
main(){
    int x, y;
    printf("\n<== PONTO EM UM PLANO CARTESIANO ==>\n\n\n");
    printf("\n--> DIGITE O VALOR DE X >>> ");
    scanf("%d",&x);
    printf("\n--> DIGITE O VALOR DE Y >>> ");
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("\n\n<-- O PONTO (%d,%d) FICA NA ORIGEM DO PLANO -->\n\n",x,y);
    }else{
        if(x==0){
            printf("\n\n<-- O PONTO (%d,%d) FICA NO EIXO Y -->\n\n",x,y);
        }else{
            if(y==0){
                printf("\n\n<-- O PONTO (%d,%d) FICA NO EIXO X -->\n\n",x,y);
            }else{
                  if(x>0){
                        if(y>0){
                            printf("\n\n<-- O PONTO (%d,%d) FICA NO PRIMEIRO QUADRANTE -->\n\n",x,y);
                        }else{
                            printf("\n\n<-- O PONTO (%d,%d) FICA NO QUARTO QUADRANTE -->\n\n",x,y);
                        }
                }else{
                        if(y>0){
                            printf("\n\n<-- O PONTO (%d,%d) FICA NO SEGUNDO QUADRANTE -->\n\n",x,y);
                        }else{
                            printf("\n\n<-- O PONTO (%d,%d) FICA NO TERCEIRO QUADRANTE -->\n\n",x,y);
                        }
                    }
            }
        }
    }
    printf("\nENCERRANDO O PROGRAMA...\n\n\n");
    system("PAUSE");
}
