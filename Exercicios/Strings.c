#include<stdio.h>

main(){
    char i, nome[]="Luize", sobrenome[]="Lemos", aux[6], string1='A', string2[]="A";

    printf(" Nome lindo: %s %s\n\n", nome, sobrenome);

    for(i=0; i<6; i++){
        printf(" %c\n", nome[i]);
    }

    for(i=0; i<6; i++){
        printf(" %c\n", sobrenome[i]);
    }

    printf(" Tamanho de: \n\t nome: %d\n\t sobrenome: %d\n\n", sizeof(nome), sizeof(sobrenome));
    printf(" Caracteres: \n\t nome: %d\n\t sobrenome: %d\n\n", strlen(nome), strlen(sobrenome));

    puts(nome);         //equivalente a printf("nome\n")
    puts(sobrenome);

    printf("\n Diz um novo nome: ");
    scanf("%s", nome);  //nao recebe o & para string

    printf(" Diz um novo sobrenome: ");
    scanf("%s", sobrenome);  //nao recebe o & para string

    strcpy(aux, nome);
    strcpy(nome, sobrenome);
    strcpy(sobrenome, aux);

    puts(nome);
    puts(sobrenome);

    printf("Concatenado fica: ");
    puts(strcat(nome, sobrenome));

    printf("\n Novo nome: %s %s\n\n", nome, sobrenome);

    for(i=0; i<5; i++){
        printf(" %c\n", nome[i]);
    }

    for(i=0; i<6; i++){
        printf(" %c\n", sobrenome[i]);
    }

    printf("\n\n Tamanho de string1: %d e tamanho de string2: %d\n\n", sizeof(string1), sizeof(string2));
}
