#include<stdio.h>
main(){
    int op;

    do{
        printf("\n Escolha as Opcoes Abaixo\n\n");
        printf("1 - Para Adicionar\n");
        printf("2 - Para Remover\n");
        printf("3 - Para Mostrar\n");
        printf("4 - Para Sair\n");
        printf("\nOpcao >> ");
        scanf("%d", &op);

        fflush(stdin); /*Limpar Buffer do Teclado*/

        switch(op){
            case 1:
                printf("\n Adicionando...\n\n");
                break;
            case 2:
                printf("\n Removendo...\n\n");
                break;
            case 3:
                printf("\n Mostrando...\n\n");
                break;
            case 4:
                printf("\n Saindo...\n\n");
                break;
            default:
                printf("\n Opcao Invalida\n\n");
        }
    }while(op!=4);
}
