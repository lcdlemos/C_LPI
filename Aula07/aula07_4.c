#include <stdio.h>
main(){
    char opcao;
    do{
        printf("Menu Principal\n\n");
        printf("Clientes (c)\n");
        printf("Fornecedores (f)\n");
        printf("Encomendas (e)\n");
        printf("Sair (s)\n");
        printf("Opção: ");
        scanf("%c", &opcao);

        switch(opcao){
            case 'c': puts("Opcao Clientes"); break;
            case 'f': puts("Opcao Fornecedores"); break;
            case 'e': puts("Opcao Encomendas"); break;
            case 's': break; //Nao faz nada
            default : puts("Opcao invalida!");
        }
        getchar(); //Parar janela
    }
    while(opcao!='s');
}
